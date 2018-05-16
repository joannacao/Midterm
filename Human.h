#pragma once
#include "stdafx.h"
#include <string>

using namespace std; 

class Human {
private:
	string name; 
	int age; 
	char sex; 
	Human(); 

protected:
	Human(string, int, char); 

public:
	void setName(string); 
	void setAge(int); 
	void setSex(char); 

	string getName(); 
	int getAge(); 
	char getSex(); 

	virtual void work() = 0; 
};
