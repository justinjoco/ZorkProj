#ifndef CREATURE_H_
#define CREATURE_H_
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Creature{
public:
	Creature(xml_node<> *);
	virtual ~Creature();
	string name;
	string status;
	string description;
	map<string,string> trigger;
	map<string,string> vulnerability;
	string attack;

	void createCreature(xml_node<> *);
};

#endif /* CREATURE_H_ */
