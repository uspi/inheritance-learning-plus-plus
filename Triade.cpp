
#include "Triade.h"
int Triade::getFirstNum() { return this->_firstNum; }
void Triade::setFirstNum(int num) { this->_firstNum = num; }

int  Triade::getSecondNum() { return this->_secondNum; }
void  Triade::setSecondNum(int num) { this->_secondNum = num; }

int  Triade::getThirdNum() { return this->_thirdNum; }
void  Triade::setThirdNum(int num) { this->_thirdNum = num; }

Triade::Triade(int firstNum, int secondNum, int thirdNum) {
	this->_firstNum = firstNum;
	this->_secondNum = secondNum;
	this->_thirdNum = thirdNum;
}
Triade::Triade() {	}


bool Triade::isEqual(Triade f, Triade s) {
	return f.getFirstNum() == s.getFirstNum()
		&& f.getSecondNum() == s.getSecondNum()
		&& f.getThirdNum() == s.getThirdNum();
}

void Triade::operator =(Triade obj) {
	this->_firstNum = obj.getFirstNum();
	this->_secondNum = obj.getSecondNum();
	this->_thirdNum = obj.getThirdNum();
}
void Triade::operator +=(Triade obj) {
	this->_firstNum += obj.getFirstNum();
	this->_secondNum += obj.getSecondNum();
	this->_thirdNum += obj.getThirdNum();
}

bool Triade::operator ==(Triade obj) {
	return this->getFirstNum() == obj.getFirstNum()
		&& this->getSecondNum() == obj.getSecondNum()
		&& this->getThirdNum() == obj.getThirdNum();
}
bool Triade::operator <(Triade obj) {
	if (this->getFirstNum() < obj.getFirstNum()) return true;
	if (this->getSecondNum() < obj.getSecondNum()) return true;
	if (this->getThirdNum() < obj.getThirdNum()) return true;

	return false;
}
bool Triade::operator >(Triade obj) {
	if (this->getFirstNum() > obj.getFirstNum()) return true;
	if (this->getSecondNum() > obj.getSecondNum()) return true;
	if (this->getThirdNum() > obj.getThirdNum()) return true;

	return false;
}

std::ostream& operator<<(std::ostream& s,  Triade& t)
{
	s << "First: " << t.getFirstNum();
	s << "Second: " << t.getSecondNum();
	s << "Third: " << t.getThirdNum();
	return s;
}

std::istream& operator>>(std::istream& s, Triade& t)
{
	int f, sec, th;
	std::cout << "Enter a first number: ";
	std::cin >> f;
	t.setFirstNum(f);

	std::cout << "Enter a second number: ";
	std::cin >> sec;
	t.setSecondNum(sec);

	std::cout << "Enter a third number: ";
	std::cin >> th;
	t.setThirdNum(th);
	return s;
}

Triade::~Triade() { }