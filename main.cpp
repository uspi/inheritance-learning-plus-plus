#include <ostream>
#include "Triade.h"
#include "Printer.h"
#include "Time.h"
#include <string>

void main() {
	Printer p;
	Time time1, time2;

	
	p.Line("A first time");
	// enter a first time
	std::cin >> time1;

	p.Line("---");

	p.Line("A second time");
	// enter a second time
	std::cin >> time2;

	p.Line("---");

	std::string f, s, t;
	f = time1 == time2 ? "Yes" : "No";
	s = time1 > time2 ? "Yes" : "No";
	t = time1 < time2 ? "Yes" : "No";

	p.Line("Time equal: " + f);
	p.Line("First > Second: " + s);
	p.Line("First < Second: " + t);

	p.Line("===");

	p.Line("A first Time: ");
	std::cout << time1;
	p.Line("A second Time: ");
	std::cout << time2;
}