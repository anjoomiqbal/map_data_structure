/* 
 * File:   vertex.h
 * Author: Anjoom
 * 
 */

#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <string>
#include <list>
#include <stack>

#include "vertex.h"
#include "edge.h"
#include "roadmap.h"
using namespace std;

class edge;

class vertex {
    private:
        int         vertexNumber;
        string      vertexName;
        int         vertexType;     
        list<edge*> availableEdges;
        
    public:
        vertex(int vertexTypeInput, string nameInput, int vertexNum);
        virtual ~vertex();
        
        int         GetVertexNumber() const;
        string      GetVertexName() const;
        int         GetVertexType() const;
        list<edge*> GetAvailableEdges() const;
        
        int         vertexTypeStringToInt(string vertexTypeString);
        bool        addEdgeToAvailableEdgeList(edge* edgeToAdd);
};


#endif /* VERTEX_H */
