#include <iostream>
#include <ctime>
using namespace std;

int main () {
  const int n = 5;
  int array[n][n];
  float sum = 0;
  float avg = 0;
  srand(time(NULL));
  int k;

  cout << "Chose index sum from 0 to " << n - 1 << " : ";
  cin >> k;
  while (k > n - 1 || k < 0 ) {
    cout << "PLEASE chose index sum from 0 to " << n - 1 << " : ";
    cin >> k;
  }

  cout << "\n ! Matrix !" << endl;
  cout << "-------------------------------------------" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      array[i][j] = rand() % 100;
      cout << array[i][j] << "\t";
    }
    cout << "\n";
  }

  cout << "-------------------------------------------" << endl;

  for (int i = 0; i <= k; i++)
  {
    sum += array[k - i][0 + i];
  }

  avg = sum / (k + 1);
  cout << "\nAverage : " << avg;

  return 0;
}