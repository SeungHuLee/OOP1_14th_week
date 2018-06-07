#include <iostream>
using namespace std;

;
int main() {
	int var1 = 10;
	int var2 = 20;

	int *const ptr = &var1; // pointer가 const기 때문에 int *

	*ptr = 5; // not read only

	ptr = &y; // 새로운 주소값 할당 불가

}
