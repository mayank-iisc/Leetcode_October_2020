class Solution {
public:
    
    int bSearch(vector <int>& nums, int low, int high, int target){
        
        if(high < low)
            return -1;
        
        int mid = low + (high - low)/2;
        
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] >= target)
            return bSearch(nums, low, mid-1, target);
        else
            return bSearch(nums, low+1, high, target);
    
    }
    
    int search(vector<int>& nums, int target) {
       
        return bSearch(nums, 0, nums.size()-1, target);
        
    }
};
