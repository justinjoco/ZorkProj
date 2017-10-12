#ifndef ROOM_H_
#define ROOM_H_
#include "Obj.h"
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

	virtual void createRoom(xml_node<> *);
	virtual void createBorder(xml_node<> *);
};

#endif /* ROOM_H_ */
