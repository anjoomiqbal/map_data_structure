/* 
 * File:   roadmap.h
 * Author: Anjoom
 *
 */
//
#ifndef ROADMAP_H
#define ROADMAP_H

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

class vertex;
class edge;

class roadmap {
private:
    list<vertex*> allVertexInRoadmap;
    list<edge*> allEdgeInRoadmap;
    int         totalVertexCount;
//    list<list edge*> allKnownPaths;

    list<edge*>     getAllEdgeInRoadmap() const;
    list<vertex*>   getAllVertexInRoadmap() const;
    int             getTotalVertexCount();
    
public:
    roadmap();
//    roadmap(const roadmap& orig);
    virtual ~roadmap();

    int     addVertex(int vertexType, string label);
    int     addEdge(vertex vertex1, vertex vertex2, int directional, double speed, double length);
    int     edgeEvent(edge edgename, int edgeEventType);
    bool    road(edge edges[]);
    edge*   trip(vertex fromVertex, vertex toVertex);
    vertex  vertex(string vertexName);
    int     store(string filename);
    int     retrieve(string filename);
    bool    printMapGraph();
    bool    freeMapGraph();



};



#endif /* ROADMAP_H */

