#include <iostream>
#include <vector>

using namespace std;

long aVeryBigSum(vector<long> ar);

int main()
{
  vector<long> numbs = {2000, 3000, 5000};

  cout << "The sum  is: " << aVeryBigSum(numbs);

  return 0;
}

long aVeryBigSum(vector<long> ar)
{
  long sum = 0;

  for (int i = 0; i < ar.size(); i++)
  {
    sum += ar[i];
  }

  return sum;
}