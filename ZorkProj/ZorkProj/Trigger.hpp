//
//  Trigger.hpp
//  ZorkProj
//
//  Created by Justin-Anthony Ampil Joco on 10/17/17.
//  Copyright © 2017 Justin-Anthony Ampil Joco. All rights reserved.
//

#ifndef Trigger_hpp
#define Trigger_hpp

#include <stdio.h>
#include <string>
#include <map>
using namespace std;


class Trigger{
public:
    Trigger();
    virtual ~Trigger();
    string name;
    string status;
    string description;
    map<string,string> trigger;
    map<string,string> vulnerability;
    string attack;
    
    void createCreature();
};





#endif /* Trigger_hpp */
