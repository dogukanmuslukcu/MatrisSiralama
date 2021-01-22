#include <iostream>
using namespace std;
int main() {
	void satirSiralama(int x[][5], int m, int n);
	int x[2][5] = { {-1,-2,16,9,-4},{8,-2,17,41,9} }; // pattern matris for sorting

	satirSiralama(x, 2, 5);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << x[i][j] << "	";
		}
		cout << endl;
	}
}


void satirSiralama(int x[][5], int m, int n) {// line sort function
	int temp;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (x[i][j] > x[i][k])
				{
					temp = x[i][j];
					x[i][j] = x[i][k];
					x[i][k] = temp;
				}
			}
		}
	}
}
void sutunSiralama(int x[][4], int m, int n) {// column sort function
	int temp;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m - 1; i++)
		{
			for (int k = i + 1; k < m; k++)
			{
				if (x[i][j] > x[k][j])
				{
					temp = x[i][j];
					x[i][j] = x[k][j];
					x[k][j] = temp;
				}

			}
		}
	}
}