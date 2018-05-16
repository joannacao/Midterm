#include "stdafx.h"
#include "Parent.h"
#include "Child.h"
#include <vector>
#include <iostream>

using namespace std; 

Parent::Parent(string n, int a, char s) : Human(n,a,s)
{
}

Parent::Parent() : Human("", 0, 'M')
{
}

void Parent::copy(Parent p)
{
	 this->setName(p.getName()); 
	 this->setAge(p.getAge()); 
	 this->setSex(p.getSex()); 
}

void Parent::setChildren(Child c)
{
	children.push_back(c);
}

Child Parent::getChildren(int i)
{
	return children[i];
}

void Parent::work() {
	if (this->getSex() == 'M') {
		cout << "Safety Inspector"; 
	}
	else {
		cout << "Housewife"; 
	}
}

