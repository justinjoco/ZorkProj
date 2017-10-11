#include "Room.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

Room::Room(xml_node<> *room) {}

Room::~Room() {}

void Room::createRoom(xml_node<> *room){
	for(xml_node<> *childroom = room->first_node(); childroom; childroom = childroom->next_sibling()){
		if(string(childroom->name()) == string("name")){
			this->name = childroom->value();
		}
		else if(string(childroom->name()) == string("description")){
			this->description = childroom->value();
		}
		else if(string(childroom->name()) == string("status")){
			this->status = childroom->value();
		}
		else if(string(childroom->name()) == string("type")){
			this->type = childroom->value();
		}
		else if(string(childroom->name()) == string("border")){
			createBorder(childroom->first_node());
		}
		else if(string(childroom->name()) == string("container")){
			this->container[childroom->value()] = childroom->value();
		}
		else if(string(childroom->name()) == string("item")){
			this->item[childroom->value()] = childroom->value();
		}
		else if(string(childroom->name()) == string("creature")){
			this->creature[childroom->value()] = childroom->value();
		}
		else if(string(childroom->name()) == string("trigger")){
			this->trigger[childroom->value()] = childroom->value();
		}
	}
}

void Room::createBorder(xml_node<> *childborder){
	string bordername;
	string borderdirection;
	while(childborder != NULL){
		if(string(childborder->name()) == string("name")){
			bordername = childborder->value();
		}
		else if(string(childborder->name()) == string("direction")){
			borderdirection = childborder->value();
		}
		childborder = childborder->next_sibling();
	}
	this->border[borderdirection] = bordername;
}

