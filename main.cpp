/*
 * File:   main.cpp
 * Author: Anjoom
 *
 * Created on December 30, 2016, 12:53 AM
 */

#include <cstdlib>
#include <cstddef>
#include "vertex.h"
#include "edge.h"
#include "road.h"
#include "roadmap.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cerr << "main() start" << endl;
    
    roadmap x;
    
    x.addVertex("POI", "A");
    x.addVertex("POI", "B");
    x.addVertex("POI", "C");
    x.addVertex("INTERSECTION", "D");
//    for (int i=0; i<x.getAllVertexInRoadmap().size(); i++){
//        cerr << "Vertex # " << i << " = " << x.getAllVertexInRoadmap().at(i).GetVertexName() << endl;
//    }
    
    x.addEdge("a", "B", "ONE-WAY", 40, 2);
    x.addEdge("B", "C", "TWO-WAY", 60, 5);
    x.addEdge("c", "A", "twoway", 50, 10);
    x.addEdge("C", "A", "ONEWAY", 50, 10);      // will fail
    x.addEdge("D", "A", "THREE-WAY", 50, 10);   // will fail
    x.addEdge("D", "f", "ONEWAY", 50, 10);   // will fail
    x.addEdge("F", "A", "TWOWAY", 50, 10);   // will fail

//    for (int i=0; i<x.getAllEdgeInRoadmap().size(); i++){
//        cerr << "Edge # " << i << " = " << x.getAllEdgeInRoadmap().at(i).GetEdgeName() << endl;
//    }
    
//    cerr << "x.vertex(\"A\")" << x.vertex("A")->GetVertexName() << endl;
//    cerr << "x.vertex(\"D\")" << x.vertex("D")->GetVertexName() << endl;
    
    
    x.edgeEvent("A-B", "EVENT_ACCIDENT");
    x.edgeEvent("A-C", "EVENT_ROAD_CLOSED");
    x.edgeEvent("B-C", "EVENT_CONSTRUCTION");
    x.edgeEvent("A-B", "EVENT_NORMAL");
    x.edgeEvent("Q-B", "EVENT_ROAD_CLOSED");  // will fail as edge doesn't exist
    x.edgeEvent("A-B", "EVENT_RANDOM");     // will fail as not valid event type
    
    
    return 0;
}

