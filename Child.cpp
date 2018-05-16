#include "stdafx.h"
#include "Child.h"
#include "Human.h"
#include "Parent.h"
#include <iostream>

using namespace std;

Child::Child(Parent &m, Parent &d) : Human("", 5, 'M')
{
	mom = new Parent; 
	dad = new Parent; 
	mom = &m; 
	dad = &d; 
	//Human("", 0, 'F'); 
	//Child(); 
}

void Child::work()
{
	if (this->getAge() < 5) {
		cout << "Play"; 
	}
	else {
		cout << "Student"; 
	}
}

void Parent::changeChildName(Child c, string n)
{
	c.setName(n); 
}

