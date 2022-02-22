//Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int current_sum=0;
        for(int i=0;i<nums.size();i++){
            current_sum=current_sum+nums[i];
            if(max_sum<current_sum){
                max_sum=current_sum;
            }
            if(max_sum<current_sum)
                max_sum=current_sum;
            if(current_sum<0)
                current_sum=0;
        }
        return max_sum ;
    }
};
