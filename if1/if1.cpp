#include <iostream>
using namespace std;

void Divide()
{
	int a, b;

	cout << "一番目の値を入力してください > ";
	cin >> a;
	
	cout << "二番目の値を入力してください > ";
	cin >> b;

	if (b == 0)
		cout << "０では割れません！" << endl;
	else
		cout << a << " / " << b << " = " << a / b << "...";
	if (a % b == 0)
		cout << "あまりなし!" << endl;
		else
			cout << a % b << endl;

}

int main()
{
	Divide();
	Divide();
	return 0;
}