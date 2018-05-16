#pragma once
#include "stdafx.h"
#include "Human.h"
#include "Child.h"
#include <vector>

class Child; 

class Parent : public Human {
private: 
	vector<Child> children;

public: 
	Parent(string, int, char); 
	Parent(); 
	void copy(Parent); 
	void setChildren(Child); 

	Child getChildren(int); 

	void changeChildName(Child,string); 

	void work(); 
};