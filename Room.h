#ifndef ROOM_H_
#define ROOM_H_
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Room : public Obj {
public:
	Room(xml_node<> *);
	virtual ~Room();
	string name;
	string status;
	string description;
	string type;
	map<string,string> trigger;
	map<string,string> border;
	map<string,string> container;
	map<string,string> item;
	map<string,string> creature;

	void createRoom(xml_node<> *);
	void createBorder(xml_node<> *);
};

#endif /* ROOM_H_ */
