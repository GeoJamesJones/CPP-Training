#include <iostream>

using namespace std;

char chars[] = { 'c', 'o', 'o', 'l', '\0', 'x', '2', '@' };

int main() {
	
	char* p = chars;

	while (*p != '\0') {
		cout << *p << endl;
		++p;
	}

	cout << endl;
	
	return 0;
}