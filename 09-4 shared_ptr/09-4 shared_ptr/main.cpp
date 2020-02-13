#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int[10];
	shared_ptr<int> p1(arr);
	cout << p1.use_count() << '\n';
	shared_ptr<int> p2(p1);
	cout << p1.use_count() << '\n';
	shared_ptr<int> p3 = p2;
	cout << p1.use_count() << '\n';
	p1.reset();
	p2.reset();
	p3.reset();
	cout << p1.use_count() << '\n';
	system("pause");
}
