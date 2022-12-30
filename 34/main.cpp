#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void CSStyle(const char *str) {
	while(*str != '\0') {
		cout << *str;
		
		++str;
	}
}
int main(int argc, char** argv) {
	CSStyle("Hello, world!");
	return 0;
}
