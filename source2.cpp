#include <iostream>
using namespace std;

;
int main() {
	int var1 = 10;
	int var2 = 20;

	int *const ptr = &var1; // pointer�� const�� ������ int *

	*ptr = 5; // not read only

	ptr = &y; // ���ο� �ּҰ� �Ҵ� �Ұ�

}
