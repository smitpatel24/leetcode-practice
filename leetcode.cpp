// https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1144/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> temp = nums;
        int n = temp.size();
        int sum_left = 0;
        int sum_right = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        for(int j = 1; j < n - 1; j++)
        {
            sum_left += temp[j - 1];
            sum_right += sum - temp[j] - sum_left;
            if(sum _right == sum_left)
            {
                return j;
                exit(0);
            }
        }
        return -1;
};