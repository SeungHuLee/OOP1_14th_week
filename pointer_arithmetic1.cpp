#include <iostream>
using namespace std;
int main() {
	int v[5] = { 1,2,3,4,5 };
	int* vPtr = v; // v[0]狼 林家蔼. &v[0]客 鞍促
	
	cout << vPtr << endl; // Windows int = 4byte. v[0] = 3000, v[1] = 3004. vPtr + 1 = v[1]狼 林家 3004
	cout << vPtr + 1 << endl; // v[1]
	cout << vPtr + 2 << endl; // v[2]
	cout << vPtr + 3 << endl; // v[3]
	cout << vPtr + 4 << endl; // v[4]
	cout << endl;

	cout << *(vPtr) << endl; // 1
	cout << *(vPtr) + 1 << endl; // 2
	cout << *(vPtr + 2) << endl; // 3
	cout << *(vPtr + 3) << endl; // 4
	cout << *(vPtr + 4) << endl; // 5
	cout << endl;

	int* vPtrr = &v[1];
	cout << vPtrr - vPtr << endl;
	cout << endl;

	cout << vPtr[1] << endl;
	
}