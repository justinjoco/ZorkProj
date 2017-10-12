#ifndef ITEM_H_
#define ITEM_H_
#include "Obj.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Item : public Obj {
public:
	Item(xml_node<> *);
	virtual ~Item();
	string name;
	string status;
	string description;
	string writing;
	map<string,string> trigger;
	bool turnon;

	virtual void createItem(xml_node<> *);
};

#endif /* ITEM_H_ */
