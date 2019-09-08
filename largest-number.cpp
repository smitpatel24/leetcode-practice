// https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1147/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp = nums;
        int size = temp.size();
        int count = 0;
        int max = 0;
        int index = 0;
        for(int i = 0; i < size; i++)
        {
            if(temp[i] > max)
                max = temp[i];
        }
        for(int k = 0; k < size; k++)
        {
            if(temp[k] == max)
            {
                index = k;
                break;   
            }
        }
        for(int j = 0; j < size; j++)
        {
            if(temp[j] != max)
                if((temp[j] * 2) <= max)
                    count++;
        }
        if(count == (size -1))
            return index;
        return -1;
    }
};