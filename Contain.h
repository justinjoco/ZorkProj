#ifndef CONTAIN_H_
#define CONTAIN_H_
#include "Obj.h"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Contain : public Obj {
public:
	Contain(xml_node<> *contain);
	virtual ~Contain();
	string name;
	string status;
	string description;
	map<string,string> trigger;
	map<string,string> accept;
	map<string,string> item;

	void createContain(xml_node<> *contain);
};

#endif /* CONTAIN_H_ */
