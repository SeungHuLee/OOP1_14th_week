#include <iostream>
using namespace std;

int main() {
	char str[] = "hello";
	char str2[] = { 'h', 'e', 'l', 'l', 'o', '\0' }; // \0���� �̻��� �� ����
	int num[] = { 1,2,3 };
	char str3[100];
	char str4[100];
	int index = 0;
	char *ptr = str;
	cout << "length of str is " << sizeof(str) << endl;

	//��¹��1
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
	//��¹��2
	cout << str << endl;
	cout << str2 << endl;
	cout << num << endl;
	cout << str3 << endl; // \0������ �ʱ�ȭ�ؾ� ���������� �ȳ���
	cout << str4 << endl;
}