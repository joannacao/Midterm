#pragma once
#include "stdafx.h"
#include "Human.h"
#include "Parent.h"

class Parent; 

class Child : public Human {
private: 
	Parent *mom; 
	Parent *dad; 
	Child();


public:
	Child(Parent &, Parent &); 
	friend void Parent::changeChildName(Child, string); 

	void work(); 

};
