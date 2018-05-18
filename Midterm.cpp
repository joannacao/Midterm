// Midterm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Human.h"
#include "Parent.h"
#include "Child.h"

using namespace std; 


int main()
{
	//Parent dad("Homer", 36, 'M'); 
	//Parent mom("Mach", 34, 'F'); 
	vector<Child> c; 
	Parent dad(c);
	Parent mom(c); 
	dad.setName("Homer"); 
	dad.setAge(36); 
	dad.setSex('M');
	mom.setName("Mach"); 
	mom.setAge(34); 
	mom.setSex('F'); 
	Child c1(dad, mom); 
	Child c2(dad, mom); 
	Child c3(dad, mom); 
	//c1.setName("Lisa"); 
	c1.setAge(12); 
	c1.setSex('F'); 
	//c2.setName("Bart"); 
	c2.setAge(10);
	c2.setSex('M');
	//c3.setName("Maggie");
	c3.setAge(3);
	c3.setSex('F');
	mom.changeChildName(c3, "Maggie"); 
	dad.changeChildName(c1, "Lisa");
	dad.changeChildName(c2, "Bart"); 
	dad.setChildren(c1); 
	dad.setChildren(c2); 
	dad.setChildren(c3); 
	mom.setChildren(c1);
	mom.setChildren(c2);
	mom.setChildren(c3);
	cout << "Name:\t" << dad.getName() << "\t" << mom.getName() << "\t" << c1.getName() << "\t"; 
	cout << c2.getName() << "\t" << c3.getName() << endl; 
	cout << "Age:\t" << dad.getAge() << "\t" << mom.getAge() << "\t" << c1.getAge() << "\t"; 
	cout << c2.getAge() << "\t" << c3.getAge() << endl; 
	cout << "Sex:\t" << dad.getSex() << "\t" << mom.getSex() << "\t" << c1.getSex() << "\t";
	cout << c2.getSex() << "\t" << c3.getSex() << endl; 
	cout << "Work:\t";
	dad.work(); 
	cout << "\t"; 
	mom.work(); 
	cout << "\t"; 
	c1.work(); 
	cout << "\t"; 
	c2.work(); 
	cout << "\t"; 
	c3.work();
	cout << endl; 
    return 0;
}

