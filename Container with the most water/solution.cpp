#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int result = 0;
        int i = height.size() - 1;
        int j = 0;

        while (i != j)
        {
            int area = coutArea(height[i], height[j], i, j);

            //check if the new area is bigger than the old one
            result = (result > area)? result : area;

            //debug print
            cout << "i: " << height[i] << " ["<< i <<"]" << " j: " << height[j] << " ["<< j <<"]" << " result: " << result << endl;

            if (height[i] > height[j]) 
            {
                j ++;
            } else 
            {
                i --;
            }
        }
        

        return result;
    }

private:
    int coutArea(int x, int y, int i, int j)
    {
        //get the smallest hight
        int hight = (x > y) ? y : x;
        int width = (i - j > 0) ? i - j: j - i;
        return width * hight;
    }
};