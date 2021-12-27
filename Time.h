#pragma once
#ifndef TIME_H
#define TIME_H
#endif
#include "Triade.h"

class Time : public Triade{
// Store the date in the fields of the base class
public:
	void setHour(int hour);
	int getHour();

	void setMinutes(int minutes);
	int getMinutes();

	void setSeconds(int seconds);
	int getSeconds();

	Triade getBaseTriade();

	Time(int hour, int minutes, int seconds);
	Time();

	bool operator ==(Time t);
	bool operator <(Time t);
	bool operator >(Time t);

	friend std::ostream& operator <<(std::ostream& s, Time& t);
	friend std::istream& operator >>(std::istream& s, Time& t);

	// Ovveride of triade methods
	bool operator <(Triade t);
	bool operator >(Triade t);

	~Time();
};