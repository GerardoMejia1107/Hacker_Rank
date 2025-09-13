#include <bits/stdc++.h>
using namespace std;

/*
  Función para mostrar el contenido de un arreglo de enteros
*/
void show_array(int *array, int length)
{
  cout << "[ ";
  for (int index = 0; index < length; index++)
    cout << array[index] << " ";
  cout << "]\n";
}

/*
  Funciones para ordenar un arreglo de enteros utilizando el
  Merge Sort
*/
// Función que combina los resultados de dos mitades
void merge(int *array, int left, int mid, int right)
{
  // Variables auxiliares para los recorridos
  int leftIndex, rightIndex;

  // Se calculan los tamaños de las dos mitades
  int sizeLeft = mid - left + 1;
  int sizeRight = right - mid;

  // Se preparan los arreglos auxiliares, ambos con una celda extra
  int leftArray[sizeLeft + 1], rightArray[sizeRight + 1];

  // Se copia la mitad izquierda en leftArray
  for (leftIndex = 0; leftIndex < sizeLeft; leftIndex++)
    leftArray[leftIndex] = array[left + leftIndex];

  // Se copia la mitad derecha en rightArray
  for (rightIndex = 0; rightIndex < sizeRight; rightIndex++)
    rightArray[rightIndex] = array[mid + rightIndex + 1];

  // Se coloca un dato enorme al final de cada arreglo auxiliar
  leftArray[sizeLeft] = rightArray[sizeRight] = INT_MIN;

  // Se reinician los contadores
  leftIndex = rightIndex = 0;

  // Se recorre el arreglo original
  for (int current = left; current <= right; current++)
    if (leftArray[leftIndex] < rightArray[rightIndex])
    {
      array[current] = rightArray[rightIndex];
      rightIndex++;
    }
    else
    {
      array[current] = leftArray[leftIndex];
      leftIndex++;
    }
}

// Función principal del método
void merge_sort(int *array, int left, int right)
{
  if (left < right)
  {
    int mid = (left + right) / 2;

    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);

    merge(array, left, mid, right);
  }
}

int main(void)
{
  int size = 8, array[size] = {5, 2, 4, 6, 1, 3, 9, 7};

  cout << "Arreglo antes de ordenar: ";
  show_array(array, size);

  merge_sort(array, 0, size - 1);

  cout << "Arreglo después de ordenar: ";
  show_array(array, size);

  return 0;
}
