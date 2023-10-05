#include <iostream>

using namespace std;

int main()
{
	int len1, len2;
	cin >> len1; // Ввод кол-во в миллиметров
	cin >> len2; // Ввод кол-во в сантиметров

	len2 += len1 / 10;
	cout << len2 << endl;

	return 0

}
