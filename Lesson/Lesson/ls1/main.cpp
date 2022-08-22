#include <iostream>
#include <clocale>
#include <WIndows.h>

class Runtime {
public:
	int x = 0;
	int y = 0;
	int count(int &x) {
		x++;
		return 0;
	}

};
int main(int argc, const char* argv[]) {
	Runtime med;
	std::cin >> med.x;
	med.x++;
	med.count(med.x);
	std::cout << med.x;
}