#include <iostream>
#include <vector>
#include <unordered_map>
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
  unordered_map<int, int> seen;
  for (int i = 0; i < nums.size(); i++)
  {
    int complement = target - nums[i];
    if (seen.find(complement) != seen.end())
    {
      return {seen[complement], i};
    }
    seen[nums[i]] = i;
  }
  return {};
}