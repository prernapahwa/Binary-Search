class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index;
        int n=nums.size();
        int left=0,right=n-1;
        int mid;
        while(left<right) {
            mid=(left+right)/2;
            if(nums[mid]>nums[mid+1]) {
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};
