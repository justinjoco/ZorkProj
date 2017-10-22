#include "Obj.h"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <stack>
#include <map>
using namespace rapidxml;
using namespace std;

Obj::Obj(xml_node<> *node) {
}

Obj::~Obj() {}

void Obj::createSeperateXml(xml_node<> *node, stack<xml_node<> *>& xml_room, stack<xml_node<> *>& xml_item, stack<xml_node<> *>& xml_container, stack<xml_node<> *>& xml_creature){
	while(node != NULL){
		if (string(node->name()) == string("room")) {
			xml_room.push(node);
		}
		else if (string(node->name()) == string("item")) {
			xml_item.push(node);
		}
		else if (string(node->name()) == string("container")) {
			xml_container.push(node);
		}
		else if (string(node->name()) == string("creature")) {
			xml_creature.push(node);
		}
		node = node->next_sibling();
	}
}
