/* 
 * File:   roadmap.cpp
 * Author: Anjoom
 * 
 */

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

roadmap::roadmap() {
    this->totalVertexCount = 0;
//    this->allVertexInRoadmap = new list<typename _Tp,typename _Alloc=std::allocator<_Tp>>;
//    this->allEdgeInRoadmap.;
//    this->allKnownPaths = NULL;
}

//roadmap::roadmap(const roadmap& orig) {
//}

roadmap::~roadmap() {
    this->allVertexInRoadmap.clear(); 
    this->allEdgeInRoadmap.clear();
//    this->allKnownPaths.clear();   
}

list<edge*>    roadmap::getAllEdgeInRoadmap() const    {return allEdgeInRoadmap;}
list<vertex*>  roadmap::getAllVertexInRoadmap() const  {return allVertexInRoadmap;}
int            roadmap::getTotalVertexCount()          {return totalVertexCount;}




bool roadmap::addVertex(string vertexType, string label){
    
//    for (this->allVertexInRoadmap::iterator i = this->allVertexInRoadmap.begin(); 
//         i != this->allVertexInRoadmap.end(); 
//            i++) {
//        if (i )->GetVertexName().compare(label) == 0){
//        if ((i)->GetVertexName().compare(label) == 0){
//            cerr << "Failed: addVertex: Vertex already exists!" << endl;
//            return false;
//        }
//        else {
//            
//        }
//    }
    
    
    int vType = this->vertexTypeStringToInt(vertexType);
    if (vType == -1){
        cerr << "Failed: addVertex: VertexType should be POI or INTERSECTION" << endl;
        return false;
    }
    
    
//    vertex v = vertex(vType, label, this->totalVertexCount);
//    vertex;
    class vertex v1(vType, label, ++totalVertexCount);
    this->allVertexInRoadmap.push_back(&v1);
    cerr << "Success: addVertex: Vertex " << label << " added to the map" << endl;
    cerr << "Success: addVertex: allVertexInRoadmap.size() = " << allVertexInRoadmap.size() << endl;
    cerr << "Success: addVertex: totalVertexCount          = " << totalVertexCount << endl;
    
//    this->totalVertexCount++;
    return true;
}


//int     roadmap::addEdge(vertex vertex1, vertex vertex2, int directional, double speed, double length);
//int     roadmap::edgeEvent(edge edgename, int edgeEventType);
//bool    roadmap::road(edge edges[]);
//edge*   roadmap::trip(vertex fromVertex, vertex toVertex);
//vertex  roadmap::vertex(string vertexName);
//int     roadmap::store(string filename);
//int     roadmap::retrieve(string filename);
//bool    roadmap::printMapGraph();
//bool    roadmap::freeMapGraph();



// PRIVATE METHODS

int roadmap::vertexTypeStringToInt(string vertexTypeString){
    int vertexTypeInt = -1;
    if (!vertexTypeString.compare("POI") || 
        !vertexTypeString.compare("poi") ||
        !vertexTypeString.compare("POINT_OF_INTEREST") ||
        !vertexTypeString.compare("point_of_interest") ){
        vertexTypeInt = 1;
    }
    if (!vertexTypeString.compare("INTERSECTION") || 
        !vertexTypeString.compare("intersection")){
        vertexTypeInt = 2;
    }
    return vertexTypeInt;
}