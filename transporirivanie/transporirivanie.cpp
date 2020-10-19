#include <iostream>

using namespace std;
//
int main()
{
	const int n = 5;

	int matrix[n][n] = { {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5} ,{1,2,3,4,5} ,{1,2,3,4,5}};
	int matrix2[n][n] ={ {5,2,3,8,45},{37,87,34,23,5}, {1,2,54,4,21} ,{11,2,38,4,55} ,{1,23,36,43,5}};

	

	//for (int a = 0;; a++) {

		for (int i = 0; i < n; i++) {
			cout << endl;

			for (int j = 0; j < n; j++) {
				cout << " " << matrix[i][j];
			}
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << endl;

			for (int j = 0; j < n; j++) {
				cout << " " << matrix2[i][j];
			}
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << endl;

			for (int j = 0; j < n; j++) {
				cout << " " << matrix[i][j] + matrix2[i][j];
			}
		}
	//}

	cout << endl;
}

