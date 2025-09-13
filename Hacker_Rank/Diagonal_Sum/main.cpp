// Basic dependencies
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int rows = 10, columns = 10;
  vector<vector<int>> matrix(rows, vector<int>(columns, 0));

  for (int i = 0; i < rows; i++)
  {

    for (int j = 0; j < columns; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
