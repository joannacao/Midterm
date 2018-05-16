#include "stdafx.h"
#include "Human.h"
#include <string>
 
using namespace std; 

Human::Human(string n, int a, char s)
{
	name = n; 
	age = a; 
	sex = s; 
}

void Human::setName(string n)
{ 
	name = n; 
}

void Human::setAge(int a)
{
	age = a; 
}

void Human::setSex(char s)
{
	sex = s; 
}

string Human::getName()
{
	return name;
}

int Human::getAge()
{
	return age;
}

char Human::getSex()
{
	return sex;
}
