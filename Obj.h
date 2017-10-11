#ifndef OBJ_H_
#define OBJ_H_
//#include "rapidxml_iterators.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <stack>
using namespace rapidxml;
using namespace std;

class Obj {
public:
	Obj(xml_node<> *);
	virtual ~Obj();
	void createSeperateXml(xml_node<> *, stack<xml_node<> *>&, stack<xml_node<> *>&, stack<xml_node<> *>&, stack<xml_node<> *>&);

	xml_node<> *node;
	stack<xml_node<> *>& xml_room;
	stack<xml_node<> *>& xml_item;
	stack<xml_node<> *>& xml_container;
	stack<xml_node<> *>& xml_creature;
};

#endif /* OBJ_H_ */
