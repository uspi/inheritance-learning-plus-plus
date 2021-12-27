#include "Time.h"

// Ovveride of triade methods START
bool Time::operator <(Triade t) {
	// Hour
	if (this->getFirstNum() < t.getFirstNum()) return true;
	// Minute
	if (this->getSecondNum() < t.getSecondNum()) return true;
	// Second
	if (this->getThirdNum() < t.getThirdNum()) return true;

	return false;
}
bool Time::operator >(Triade t) {
	// Hour
	if (this->getFirstNum() > t.getFirstNum()) return true;
	// Minute
	if (this->getSecondNum() > t.getSecondNum()) return true;
	// Second
	if (this->getThirdNum() > t.getThirdNum()) return true;

	return false;
}
// Ovveride of triade methods END


void Time::setHour(int hour) { setFirstNum(hour); }
int Time::getHour() { return getFirstNum(); }

void Time::setMinutes(int minutes) { setSecondNum(minutes); }
int Time::getMinutes() { return getSecondNum(); }

void Time::setSeconds(int seconds) { setThirdNum(seconds); }
int Time::getSeconds() { return getThirdNum(); }

Triade Time::getBaseTriade() {
	return Triade{ this->getFirstNum(), this->getSecondNum(), this->getThirdNum() };
}

Time::Time(int hour, int minutes, int seconds) : Triade(hour, minutes, seconds) { }
Time::Time() { }

bool Time::operator ==(Time t) {
	return
		Triade{ this->getHour(), this->getMinutes(), this->getSeconds() }
	 == Triade{ t.getHour(), t.getMinutes(), t.getSeconds() };
}
bool Time::operator <(Time t) {
	return
		Triade{ this->getHour(), this->getMinutes(), this->getSeconds() }
	  < Triade{ t.getHour(), t.getMinutes(), t.getSeconds() };
}
bool Time::operator >(Time t) {
	return
		Triade{ this->getHour(), this->getMinutes(), this->getSeconds() }
      > Triade{ t.getHour(), t.getMinutes(), t.getSeconds() };
}

Time::~Time() { };

std::ostream& operator<<(std::ostream& s, Time& t)
{
	s << "Hours: " << t.getHour() << "\n";
	s << "Minutes: " << t.getMinutes() << "\n";
	s << "Seconds: " << t.getSeconds() << "\n";
	return s;
}

std::istream& operator>>(std::istream& s, Time& t)
{
	int f, sec, th;
	std::cout << "Enter a Hours: ";
	std::cin >> f;
	t.setHour(f);

	std::cout << "Enter a Mintes: ";
	std::cin >> sec;
	t.setMinutes(sec);

	std::cout << "Enter a Seconds: ";
	std::cin >> th;
	t.setSeconds(th);
	return s;
}

