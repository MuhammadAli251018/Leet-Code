#include "solution.cpp"
#include <vector>

using namespace std;

int main () 
{
    vector<int> hight = {1,8,6,2,5,4,8,3,7};
    Solution solution = Solution();
    cout << solution.maxArea(hight) << endl;
}