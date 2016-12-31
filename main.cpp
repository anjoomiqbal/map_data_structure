/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anjoom
 *
 * Created on December 30, 2016, 12:53 AM
 */

#include <cstdlib>

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
    

    return 0;
}

