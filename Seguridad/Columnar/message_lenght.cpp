#include <iostream>
#include <string>
using namespace std;

int main()
{
  string message, key;
  int messageLenght, keyLenght;

  cout << "Enter Message: ";
  cin >> message;
  cout << "Enter Key: ";
  cin >> key;

  messageLenght = message.length();
  keyLenght = key.length();

  cout << "Message Lenght: " << messageLenght << endl;
  cout << "Key Lenght: " << keyLenght << endl;
}