#include <iostream>
#include <vector>
using namespace std;

/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.
Complete the function diagonalDifference with the following parameter:
int arr[n][m]: a 2-D array of integers
Return:
int: the absolute difference in sums along the diagonals
*/

int diagonalDifference(vector<vector<int>> arr, int lenght);

int main()
{
  int rows = 4, columns = 4;
  vector<vector<int>> matrix(rows, vector<int>(columns, 0));

  matrix = {
      // 0 1  2  3
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};

  cout << "The sum of the diagonals is: " << diagonalDifference(matrix, rows) << endl;

  return 0;
}

int diagonalDifference(vector<vector<int>> arr, int lenght)
{
  // This variables will store the sum of each side
  int firstSide = 0, secondSide = 0;

  // For the first diagonal both indexes will be the same, so we use the same iterator
  for (int i = 0; i < lenght; i++)
  {
    firstSide += arr[i][i];
  }

  /* Fot the second diagonal, for the vertical we will iterate normally, but to get the right horizolntal index
  we will substract the length of either the row or colum minus the current index minus ones.*/
  for (int i = 0; i < lenght; i++)
  {
    secondSide += arr[i][lenght - i - 1];
  }

  // We return the absolute difference between both sides
  return abs(firstSide - secondSide);
}
