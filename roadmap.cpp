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

list<edge*>     roadmap::getAllEdgeInRoadmap() const    {return allEdgeInRoadmap;}
list<vertex*>   roadmap::getAllVertexInRoadmap() const  {return allVertexInRoadmap;}
int             roadmap::getTotalVertexCount()          {return totalVertexCount;}