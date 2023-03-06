#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        //check if the vector is empty
        set<vector<int>> result;
        if (nums.size() < 3) {

            return vector<vector<int>>();
        }

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {

                    /*bool isDulicated = false;

                    if (result.size() != 0)
                    {
                        for (int l = 0; l < nums.size() - 1; l++) 
                        {
                            vector<int> triple = {nums[i], nums[j], nums[k]};

                            if (triple == result[l]) 
                            {
                                isDulicated = true;
                            }
                        }
                    }

                    if (!isDulicated)
                    {
                        result.push_back({nums[i], nums[j], nums[k]});
                    }*/

                    result.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return vector<vector<int> >(result.begin(), result.end());
    }
};
