#pragma once
#include<iostream>
#include <string>
using namespace std;

class Person{
private:
	string name;
	int age;

public:
	Person(string name_val, int age_val)
		:name{ name_val }, age{ age_val } {
		//std::cout << "\n";
	}
		string getName() const {
			return name;
		}

		int getAge() const {
			return age;
		}
};