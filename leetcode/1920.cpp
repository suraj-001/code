class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // vector<int>ans(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     ans[i]=nums[nums[i]];
        // }
        // return ans;
        // // int temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(nums[nums[i]]%n)*n;
        }
        for(int i=0;i<n;i++){
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};
