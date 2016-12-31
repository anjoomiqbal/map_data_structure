/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   edge.h
 * Author: Anjoom
 *
 * Created on December 30, 2016, 9:54 AM
 */

#ifndef EDGE_H
#define EDGE_H

#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <string>
#include <list>
#include <stack>

#include "vertex.h"
#include "roadmap.h"
using namespace std;

class vertex;

class edge {
    private:
        string  edgeName;
        double  edgeLength;
        double  edgePostedSpeedLimit;
        double  edgeEffectiveSpeedLimit;
        int     edgeDirection;  // 1 = one way, 
                                // 2 = two way, 
                                // other val = invalid
        
        int     edgeEvent;      // 0 = EVENT_NORMAL, 
                                // 1 = EVENT_ACCIDENT_1_WAY, 
                                // 2 = EVENT_ACCIDENT_2_WAY, 
                                // 3 = EVENT_ROADBLOCK_1_WAY, 
                                // 4 = EVENT_ROADBLOCK_2_WAY, 
                                // 5 = EVENT_CONSTRUCTION_1_WAY, 
                                // 6 = EVENT_CONSTRUCTION_2_WAY, 
        vertex* sourceVertex;
        vertex* destinationVertex;
        
        int edgeEventStringToInt (string eventName);
        int edgeDirectionStringToInt (string directional);
        
    public:
        edge();
        edge(vertex* vertex1, vertex* vertex2, int directional, double speed, double length);
        virtual ~edge();
        
        string  GetEdgeName() const;
        double  GetEdgeLength() const;
        double  GetEdgePostedSpeedLimit() const;
        double  GetEdgeEffectiveSpeedLimit() const;
        int     GetEdgeDirection() const;
        int     GetEdgeEvent() const;
        vertex* GetSourceVertex() const;
        vertex* GetDestinationVertex() const;
        
};

#endif /* EDGE_H */

