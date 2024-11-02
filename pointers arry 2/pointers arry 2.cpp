

#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout << "rows   :";
	cin >> rows ;
	cout << "cols  :";
	cin >> cols;
	int** table = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		table[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] table[i];
	}
	delete[] table;
	cout << rows << endl;
	cout << cols << endl;


	system(" pause");
	return 0;
}

