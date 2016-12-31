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
#include <vector>
#include <stack>

#include "vertex.h"
#include "roadmap.h"
using namespace std;

class edge;

class vertex {
    private:
        int           vertexNumber;
        string        vertexName;
        int           vertexType;     
        vector<edge*> availableEdges;
        
    public:
        vertex();
        vertex(int vertexTypeInput, string nameInput, int vertexNum);
        virtual ~vertex();
        
        int           GetVertexNumber() const;
        string        GetVertexName() const;
        int           GetVertexType() const;
        vector<edge*> GetAvailableEdges() const;
        
        bool          addEdgeToAvailableEdgeList(edge* edgeToAdd);
};


#endif /* VERTEX_H */
