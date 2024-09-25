#ifndef GRAPHTYPE_H
#define GRAPHTYPE_H

#pragma once
#include "StackType.h"
#include "quetype.h"

template <class VertexType>
class GraphType
{
    public:
        GraphType();
        GraphType(int maxV);
        ~GraphType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void AddVertex(VertexType);
        void AddEdge(VertexType, VertexType, int);
        int WeightIs(VertexType, VertexType);
        void GetToVertices(VertexType, quetype<VertexType> &);
        void ClearMarks();
        void MarkVertex(VertexType);
        bool IsMarked(VertexType);
        void DepthFirstSearch(VertexType, VertexType);
        bool isQueued(VertexType, quetype<VertexType>&);
        void BreadthFirstSearch(VertexType, VertexType);
        int OutDegree(VertexType v);
        bool FoundEdge(VertexType u, VertexType v);
        void print();

    private:
        int numVertices;
        int maxVertices;
        VertexType *vertices;
        int **edges;
        bool *marks;
};

#endif