#include <iostream>
#include <vector>

/* this library provides a way of Formatting the output for text like alignment or numeric precisiion
In this exercise I will use it for numerical precision
*/
#include <iomanip>
using namespace std;

/*
You are given an array of integers.
Task: calculate the ratios of its elements that are:
Positive
Negative
Zero

Output:
Print the decimal value of each ratio on a new line.
Each value must have 6 places after the decimal.
Answers within an absolute error of 10^-4 are acceptable.

Example:
arr = [1, 1, 0, -1, -1]
n = 5 elements.
Positives = 2 → ratio = 2/5 = 0.400000
Negatives = 2 → ratio = 2/5 = 0.400000
Zeros = 1 → ratio = 1/5 = 0.200000
*/

void plusMinus(vector<int> arr);

int main()
{
  vector<int> arr = {1, 1, -1, -1};
  plusMinus(arr);
}

void plusMinus(vector<int> arr)
{
  vector<int> analysis(3, 0);
  //[0] -> for > 0
  //[1] -> for = 0
  //[2] -> for < 0

  // Logic to identify the 3 sections
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > 0)
    {
      analysis[0] += 1;
    }
    else if (arr[i] < 0)
    {
      analysis[1] += 1;
    }
    else
    {
      analysis[2] += 1;
    }
  }

  // Printing result
  for (int j = 0; j < analysis.size(); j++)
  {
    float outcome = analysis[j] / (float)arr.size(); // We must conver to float the size this is casting""
    cout << fixed << setprecision(6) << outcome << endl;
  }
}