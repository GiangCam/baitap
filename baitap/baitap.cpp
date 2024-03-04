#include <iostream>
using namespace std;
int main()
{
	int so, tongle = 0;
	cout << "nhap so";
	cin >> so;
	for (int i = 0; i <= so; i++) {
		if (1 % 2 != 0) // số lẽ là số chia 2 dư 1
		{
			cout << i << " ";
			tongle = tongle + i;
		}
	}
	cout << "\n tong cac so le o don " << so << "la " << tongle;
	return 0;
}