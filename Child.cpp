#include "stdafx.h"
#include "Child.h"
#include "Human.h"
#include "Parent.h"
#include <iostream>

using namespace std;

Child::Child(Parent &m, Parent &d) : Human("", 5, 'M')
{
	mom = &m; 
	dad = &d;  
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
