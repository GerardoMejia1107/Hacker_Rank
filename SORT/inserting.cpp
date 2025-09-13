#include <iostream>

void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);

int main()
{
    int array[] = {8, 2, 7, 4, 5, 1, 9, 3};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    insertion_sort(array, length);
    std::cout << "Sorted array: " << std::endl;
    print_array(array, length);

    return 0;
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // Current element value
        int j = i - 1;    // Previous element indexs

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Previous element is shifted to the right of the current element
            j--;                 // Since we are moving to the left (backwards)
        }
        arr[j + 1] = key; // Insert the current element at its correct position
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}