#include <iostream>

using namespace std;

extern void library_function();

int
main() {
	cout << "Library function call:" << endl;
	library_function();
	cout << "End of library function call." << endl;
	return 0;
}
