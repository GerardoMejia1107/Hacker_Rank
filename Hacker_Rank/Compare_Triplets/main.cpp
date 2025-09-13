#include <iostream>
#include <vector>

using namespace std;

vector<int> CompareTriplets(vector<int> a, vector<int> b);
void print(vector<int> arr);

int main()
{
  vector<int> alice = {17, 28, 30};
  vector<int> bob = {99, 16, 8};

  CompareTriplets(alice, bob);
  print(CompareTriplets(alice, bob));

  return 0;
}

vector<int> CompareTriplets(vector<int> a, vector<int> b)
{
  int aliceRank = 0, bobRank = 0;
  vector<int> outcome(2);

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] < b[i])
    {
      bobRank++;
    }
    else if (a[i] > b[i])
    {
      aliceRank++;
    }
  }
  outcome = {aliceRank, bobRank};
  return outcome;
}

void print(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}