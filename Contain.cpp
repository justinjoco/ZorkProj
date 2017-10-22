#include "Contain.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

Contain::Contain(xml_node<> *contain) { }

Contain::~Contain() {}

void Contain::createContain(xml_node<> *contain){
	for(xml_node<> *childcontain = contain->first_node(); childcontain; childcontain = childcontain->next_sibling()){
		if(string(childcontain->name()) == string("name")){
			this->name = childcontain->value();
		}
		else if(string(childcontain->name()) == string("description")){
			this->description = childcontain->value();
		}
		else if(string(childcontain->name()) == string("status")){
			this->status = childcontain->value();
		}
		else if(string(childcontain->name()) == string("accept")){
			this->accept[childcontain->value()] = childcontain->value();
		}
		else if(string(childcontain->name()) == string("item")){
			this->item[childcontain->value()] = childcontain->value();
		}
		else if(string(childcontain->name()) == string("trigger")){
			this->trigger[childcontain->value()] = childcontain->value();
		}
	}
}
