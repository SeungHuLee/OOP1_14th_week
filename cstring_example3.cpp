#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	cin.getline(str, sizeof(str), ' '); // cin class�� ����Լ� 100�� sizeof(str)�� ���氡��.

	cout << str << endl;
	/*string str2;
	getline(cin, str2); // �Լ� �����ε�. string include�ؾ��� */
}