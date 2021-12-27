#pragma once
#ifndef TRIADE_H
#define TRIADE_H
#endif
#include <iostream>

class Triade {
private:
	int _firstNum;
	int _secondNum;
	int _thirdNum;
public:

	int getFirstNum();
	void setFirstNum(int num);

	int getSecondNum();
	void setSecondNum(int num);

	int getThirdNum();
	void setThirdNum(int num);

	Triade(int firstNum, int secondNum, int thirdNum);
	Triade();

	bool isEqual(Triade f, Triade s);

	void operator =(Triade obj);
	void virtual operator +=(Triade obj);
	bool operator ==(Triade obj);
	bool virtual operator <(Triade obj);
	bool virtual operator >(Triade obj);
	friend std::ostream& operator <<(std::ostream &s, Triade &t);
	friend std::istream& operator >>(std::istream&s, Triade &t);

	~Triade();
};

