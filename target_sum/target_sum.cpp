#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int pointer = nums[i];
            // cout << "Pointer : " << pointer << endl;
            for (int j = i+1; j < nums.size(); j++)
            {
                // cout << "nums[j]" << nums[j] << endl;
                if ((pointer + nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){
    Solution one;
    vector<int> test_case_one = {2, 3};
    vector<int> test_case_1  = {0, 1};

    vector<int> result = one.twoSum(test_case_one, 5);

    cout << result[0] << " " << result[1] << endl;

    if(result == test_case_1){
        cout << "True" << endl;
    }  else {
        cout <<"False \n";
    }
}