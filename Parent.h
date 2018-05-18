#pragma once
#include "stdafx.h"
#include <vector>
#include "Human.h"
#include "Child.h"

class Child; 

class Parent : public Human {
private: 
	vector<Child> children;

public: 
	Parent(string, int, char); 
	Parent(vector<Child> &);
	void setChildren(Child &); 

	Child getChildren(int); 

	void changeChildName(Child &,string); 

	void work(); 
};
