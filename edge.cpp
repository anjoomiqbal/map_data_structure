/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   edge.cpp
 * Author: Anjoom
 * 
 * Created on December 30, 2016, 9:54 AM
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


edge::edge(vertex* vertex1, vertex* vertex2, int directional, double speed, double length) {
    this->edgePostedSpeedLimit      = speed;
    this->edgeEffectiveSpeedLimit   = speed;
    this->edgeLength                = length;
    this->edgeDirection             = directional;
    this->edgeEvent                 = 0;
    this->sourceVertex              = vertex1;
    this->destinationVertex         = vertex2;
    
    this->sourceVertex->addEdgeToAvailableEdgeList(this);
    if (this->edgeDirection == 1){
        this->sourceVertex->addEdgeToAvailableEdgeList(this);
    }
    else if (this->edgeDirection == 2){
        this->destinationVertex->addEdgeToAvailableEdgeList(this);
    }
}

edge::~edge() {
}


string  edge::GetEdgeName()                 const {return edgeName;}
double  edge::GetEdgeLength()               const {return edgeLength;}
double  edge::GetEdgePostedSpeedLimit()     const {return edgePostedSpeedLimit;}
double  edge::GetEdgeEffectiveSpeedLimit()  const {return edgeEffectiveSpeedLimit;}
int     edge::GetEdgeDirection()            const {return edgeDirection;}
int     edge::GetEdgeEvent()                const {return edgeEvent;}
vertex* edge::GetSourceVertex()             const {return sourceVertex;}
vertex* edge::GetDestinationVertex()        const {return destinationVertex;}


// 0 = EVENT_NORMAL, 
// 1 = EVENT_ACCIDENT_1_WAY, 
// 2 = EVENT_ACCIDENT_2_WAY, 
// 3 = EVENT_ROADBLOCK_1_WAY, 
// 4 = EVENT_ROADBLOCK_2_WAY, 
// 5 = EVENT_CONSTRUCTION_1_WAY, 
// 6 = EVENT_CONSTRUCTION_2_WAY,
int edge::edgeEventStringToInt (string eventName){
    
}

int edge::edgeDirectionStringToInt (string edgeDirectionString){
    if (!edgeDirectionString.compare("ONE-WAY") || 
        !edgeDirectionString.compare("one-way") ||
        !edgeDirectionString.compare("ONEWAY") ||
        !edgeDirectionString.compare("oneway") ){
        return 1;
    }
    if (!edgeDirectionString.compare("TWO-WAY") || 
        !edgeDirectionString.compare("two-way") ||
        !edgeDirectionString.compare("TWOWAY") ||
        !edgeDirectionString.compare("twoway") ){
        return 2;
    }
    return -1;
}