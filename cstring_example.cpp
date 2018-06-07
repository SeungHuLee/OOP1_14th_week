#include <iostream>
using namespace std;

int main() {
	char str[] = "hello";
	char str2[] = { 'h', 'e', 'l', 'l', 'o', '\0' }; // \0빼면 이상한 값 나옴
	int num[] = { 1,2,3 };
	char str3[100];
	char str4[100];
	int index = 0;
	char *ptr = str;
	cout << "length of str is " << sizeof(str) << endl;

	//출력방법1
	for (char item : str) {
		cout << item;
	}
	for (char item : str) {
		str3[index++] = item;
	}
	cout << endl;
	for (char item : str) {
		*(ptr++) = item;
	}
	//출력방법2
	cout << str << endl;
	cout << str2 << endl;
	cout << num << endl;
	cout << str3 << endl; // \0값으로 초기화해야 가비지값이 안나옴
	cout << str4 << endl;
}