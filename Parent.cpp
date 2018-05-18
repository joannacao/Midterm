#include "stdafx.h"
#include <vector>
#include <iostream>
#include "Parent.h"
#include "Child.h"

using namespace std; 

Parent::Parent(string n, int a, char s) : Human(n,a,s)
{
}

Parent::Parent(vector<Child>& v) : Human("", 0, 'M')
{
	children = v; 
}

void Parent::setChildren(Child &c)
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

void Parent::changeChildName(Child &c, string n)
{
	c.setName(n); 
}

