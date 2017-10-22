#ifndef ITEM_H_
#define ITEM_H_
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Item {
public:
	Item(xml_node<> *);
	virtual ~Item();
	string name;
	string status;
	string description;
	string writing;
	map<string,string> trigger;
	bool turnon;

	void createItem(xml_node<> *);
};

#endif /* ITEM_H_ */
