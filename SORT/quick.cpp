#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <ctime>
#include <cstdlib>
using namespace std;

void quick_sort(int arr[], int size);
void quick_recursion(int arr[], int low, int upper);
int partition(int arr[], int low, int upper);

int main()
{
  int array[] = {34, 7, 23, 32, 5, 62};
  int size = sizeof(array) / sizeof(array[0]);

  quick_sort(array, size);
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }

  return 0;
}

void quick_sort(int arr[], int size)
{
  // array, low index, upper index -> as parameters
  quick_recursion(arr, 0, size - 1);
}

void quick_recursion(int arr[], int low, int upper)
{
  if (low < upper)
  {
    int pivot_index = partition(arr, low, upper);

    quick_recursion(arr, low, pivot_index - 1);
    quick_recursion(arr, pivot_index + 1, upper);
  }
}

int partition(int arr[], int low, int upper)
{
  int pivot_value = arr[upper];
  int i = low;
  for (int j = low; j < upper; j++)
  {
    if (arr[j] < pivot_value)
    {
      swap(arr[i], arr[j]);
      i++;
    }
  }
  swap(arr[i], arr[upper]);
  return i;
}