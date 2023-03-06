#include <iostream>
#include <vector>
#include "solution.cpp"

using namespace std;

int main()
{
    Solution solution = Solution();
    vector<int> nums = {0,0,0};
    vector<vector<int>> res = solution.threeSum(nums);

    string output = "{";

    for (int i = 0; i < res.size(); i++)
    {
        output += "{";
        for (int j = 0; j < res[i].size(); j++)
        {
            output += to_string(res[i][j]);
            if (j != res[i].size() - 1)
            {
                output += ",";
            }
        }
        output += "}";
        if (i != res.size() - 1)
        {
            output += " ";
        }
    }

    output += "}";

    cout << output;
    return 0;
}
