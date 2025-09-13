#include <iostream>

void selection_sort(int arr[], int n);
void print_array(int arr[], int n);

int main()
{
  int array[] = {8, 2, 7, 4, 5, 1, 9, 3};
  int length = sizeof(array) / sizeof(array[0]);
  print_array(array, length);
  selection_sort(array, length);
  std::cout << "Sorted array: " << std::endl;
  print_array(array, length);
  return 0;
}

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_pos = i; // Assume the minimum is the first element of unsorted part
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_pos])
      {
        min_pos = j;
      }
      if (min_pos != i)
      {
        std::swap(arr[i], arr[min_pos]); // Swap the found minimum element with the first element of unsorted part
      }
    }
  }
}

void print_array(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << std::endl;
  }
}