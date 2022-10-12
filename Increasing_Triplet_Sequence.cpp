class Solution {
public:
    int max(vector<int>& nums)
    {
        int temp = nums[0];
        for(int i=0; i<nums.size(); i++)
        {
            if(temp < nums[i])
            {
                temp = nums[i];
            }
        }
        return temp;
    }
    bool increasingTriplet(vector<int>& nums) {
        int middle = max(nums);
        int left = max(nums);
        for(int i=0; i<nums.size(); i++)
        {
            int right = nums[i];
            if(right<left)
            {
                left = right;
            }
            else if(right<middle && right>left)
            {
                middle = right;
            }
            else if(right>middle && right>left)
            {
                return true;
            }
        }
        return false;
    }
};
