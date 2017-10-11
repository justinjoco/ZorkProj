#include "Item.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

Item::Item(xml_node<> *item) {}

Item::~Item() {}

void Item::createItem(xml_node<> *item){
	for(xml_node<> *childitem = item->first_node(); childitem; childitem = childitem->next_sibling()){
		if(string(childitem->name()) == string("name")){
			this->name = childitem->value();
		}
		else if(string(childitem->name()) == string("description")){
			this->description = childitem->value();
		}
		else if(string(childitem->name()) == string("status")){
			this->status = childitem->value();
		}
		else if(string(childitem->name()) == string("writing")){
			this->writing = childitem->value();
		}
		else if(string(childitem->name()) == string("turnon")){
			this->turnon = childitem->value();
		}
		else if(string(childitem->name()) == string("trigger")){
			this->trigger[childitem->value()] = childitem->value();
		}
	}
}
