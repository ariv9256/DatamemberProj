//
//  Graph.hpp
//  DatamemberProj
//
//  Created by Rivas, Angela on 3/4/19.
//  Copyright © 2019 CTEC CSP. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>


using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIUMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //Graph operations
    
    void addVertex(const Type & value);
    
    //Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target);
    //Disconnect vertices
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type & operator [] (int vertex);
    Type operator[] (int vertext) const;
    int size() const;
    
    //Check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std:::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertext);
    void breadthFirstTraversal(Graph<TYpe> & graph, int vertex);
    int costTraversal(Graph <Type> & graph, int vertex); 
    
};
template <class Type>
const int Graph<Type> :: MAXIMUM;

template<class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}
/*
 Since we cannot "remove" from an array in C++,
 we onlly implement adding to a Graph.
 Java allows for all objects to be set to null but C++
 does not.
 */
template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}
//left hand side operator
template <class Type>
Type & Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}
//right hand side operator
template <class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}
/*Vertices
 Adding vertices requires verification that the Graph is not full,
 Then assigning the current vertex for the adjacency matrix.
 All values attaching to the index are false and stored in the data array.
 */
template <class Type>
void Graph<Type> :: addVertex(const Type & value)
{
    assert(vertexCount < MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    graphData[newVertexNumber] = value;
}
/*
 These are edges
 There are 3 methods for edges,
 Each validate the values of source & target,
 Each type of edge depends on the graph in question which is why there's
 3 separate methods.
 */
template<class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
}
/* We can assume each coordinate spot knows of it's identity, but not all of them
know of each other unless explicitly said in addEdgeUndirected
 */
template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}
//Next are the 3 individual remove edge methods, same style
template<class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}
template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMatrix[target][source] = 0;
}
template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}
/*
 Next are the Connection checkers,
 Checking the connection between the vertices / edge to determine whether the
 user is looking for a one or two way connection (if it exists).
 */
template<class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target] || adjacencyMatrix[target][source] ;
    
    return isAnEdge;
}

template<class Type>
bool Graph<TYpe> :: areConnected(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target] ;
    
    return isAnEdge;
}
/*This next connection method doesn't directly associate with [source][target]
but rather the neighbors method.
This identifies all the connections of a vertex
 */
template<class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < vertexCount);
    std::set<int> vertexNeighbors;
    
    for(int index = 0; index < vertexCount; index++)
    {
        if(adjacencyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return vertexNeighbors;
}
/*
The depth first traversal sets array to be filled with false,
This is done by recursively calling the 'neighbors' class to visit all vertices
To visit every vertix, we use a set iterator
 */
template <class Type>
void Graph<Type> :: depthFirstTraveral(Graph<Type> & currentGraph, int vertex)
{
    bool visitedVertices[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(visitedVertices, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, visitedVertices);
}
template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> & currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
    {
        depthFirstTraversal(currentGraph, *setIterator, visited);
    }
}
/*
 In the breadth first traversal the unique values are tracked via a combination of a set and a
 queue using the STL implementations instead of our custom one already in the linear section.
 As each member of the supplied vertex’s neighbors is processed the vertex is popped off the queue;
 then it checks if it has already been visited and if not, processes it, adds it to the queue to check for its neighbors.
 */
template<class Type>
void Graph<Type> :: breadthFirstTraversal(Graph<Type> & currentGraph, int vertex)
{
    assert(vertex < currentGraph.size());
    bool visited[MAXIMUM];
    std:: set<int> connections;
    std:: set<int>:: iterator setIterator;
    std:: queue<int> vertexQueue;
    
    std::fill_n(visited, currentGraph.size(), false);
    visited[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while(!vertexQueue.empty())
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                visited[*setIterator] = true;
                cout << currentGraph[*setIterator] << endl;
                vertexQueue.push(*setIterator);
            }
        }
    }
}
/*
 The cost accruing traversal uses the same process as the breadth first traversal but instead
 of merely outputting the values stored in the Graph it calculates the cost of the traversal from the
 starting vertex to visit each of the vertices.
 */
template<class Type>
int Graph<Type> :: costTraversal(Graph<Type> & currentGraph, int start)
{
    assert(start >= 0 && start < vertexCount);
    int cost = 0;
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int> iterator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited, currentGraph.size(), false);
    visited[start] = true;
    
    vertexQueue.push(start);
    while(!vertexQueue.empty())
    {
        int currentIndex = vertexQueue.front();
        connections = currentGraph.neighbors(currentIndex);
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); steIterator != connections.end(); setIterator++)
        {
            if(visited[*setIterator])
            {
                cost += weightCostMatrix[currentIndex][*setIterator];
                visited[*setIterator] = true;
                vertexQueue.push(*setIterator);
            }
        }
    }
    return cost;
}
#endif /* Graph_hpp */
