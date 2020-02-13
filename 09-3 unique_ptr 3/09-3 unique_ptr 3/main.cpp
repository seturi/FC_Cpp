#include <iostream>

using namespace std;

// 메모리 해제 이후에 객체에 접근
int main(void) {
	int* arr = new int[10];
	unique_ptr<int> p1(arr);
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	p1.reset();
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	system("pause");
}
