class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, max = 0, temp = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>temp) temp = nums[i];
        }

        if(temp<0){
            max = temp;
            return max;
        }

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(sum < 0) sum = 0;
            if(sum > max) max = sum;
        }

        return max;
    }
};