#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target);

int main()
{
  vector<int> numbers = {5, 6, 7, 1, 2, 3, 4};
  int target = 8;
  vector<int> result = twoSum(numbers, target);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
}

vector<int> twoSum(vector<int> &nums, int target)
{
  int possibleOutcome = 0;
  int current = 0;
  int coupleOfCurrent = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    current = nums[i];
    for (int j = i + 1; j < nums.size(); j++)
    {
      coupleOfCurrent = nums[j];
      if (coupleOfCurrent + current == target)
      {
        possibleOutcome = current + coupleOfCurrent;
        return vector<int>{i, j};
      }
    }
  }
  return vector<int>{};
}