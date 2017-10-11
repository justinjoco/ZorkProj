#include "Creature.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

Creature::Creature(xml_node<> *creature) {}

Creature::~Creature() {}

void Creature::createCreature(xml_node<> *creature){
	for(xml_node<> *childcreature = creature->first_node(); childcreature; childcreature = childcreature->next_sibling()){
		if(string(childcreature->name()) == string("name")){
			this->name = childcreature->value();
		}
		else if(string(childcreature->name()) == string("description")){
			this->description = childcreature->value();
		}
		else if(string(childcreature->name()) == string("status")){
			this->status = childcreature->value();
		}
		else if(string(childcreature->name()) == string("attack")){
			this->attack = childcreature->value();
		}
		else if(string(childcreature->name()) == string("vulnerability")){
			this->vulnerability[childcreature->value()] = childcreature->value();
		}
		else if(string(childcreature->name()) == string("trigger")){
			this->trigger[childcreature->value()] = childcreature->value();
		}
	}
}
