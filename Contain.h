#ifndef CONTAIN_H_
#define CONTAIN_H_
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml.hpp"
#include <string>
#include <map>
using namespace rapidxml;
using namespace std;

class Contain {
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
