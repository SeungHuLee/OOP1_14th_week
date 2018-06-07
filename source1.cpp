#include <iostream>
using namespace std;

void func(const int *);
int main() {
	int var = 10;
	func(&var);
}
void func(const int *ptr) { // data가 const기 때문에 int *
	*ptr = 100; // read - only
}