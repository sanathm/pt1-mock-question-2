#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
	int mins;
	int hours;
public:
	Time();
	~Time();
	friend ostream& operator<< (ostream &, const Time &);
	void set(int, int);
	void get(int &, int &);
	Time(int, int);
	Time &operator++(int);
};

