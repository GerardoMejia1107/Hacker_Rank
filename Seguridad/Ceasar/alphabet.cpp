#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                           'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                           'Y', 'Z'};

  int start = 4, end = alphabet.size();

  // Extraer los elementos del rango
  vector<char> extraidos(alphabet.begin() + start, alphabet.begin() + end);

  // Eliminar esos elementos del vector original
  alphabet.erase(alphabet.begin() + start, alphabet.begin() + end);

  // Insertarlos al final
  extraidos.insert(extraidos.end(), alphabet.begin(), alphabet.end());
  for (int i = 0; i < extraidos.size(); i++)
  {
    cout << extraidos[i] << " - " << i + 1 << endl;
  }

  return 0;
}