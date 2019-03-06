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
#endif /* Graph_hpp */
