#include <iostream>
#include <string>
using namespace std;

int main() {
	char str[100];
	cin.getline(str, sizeof(str), ' '); // cin class의 멤버함수 100은 sizeof(str)로 변경가능.

	cout << str << endl;
	/*string str2;
	getline(cin, str2); // 함수 오버로딩. string include해야함 */
}