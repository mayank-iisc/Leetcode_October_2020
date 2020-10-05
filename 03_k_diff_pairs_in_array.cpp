class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        /* Intuition : Create a frequency map and then search for nums[i]+k in map
        
        Eg: [3,1,4,1,5]        k = 2
        
        2 + 1   2       Search for 3 in map
        2 + 3   1       Search 5
        2 + 4   1       Search 6
        2 + 5   1       Search 7
        
        */
        
        // As per constraint of question
        if(k < 0)
            return 0;
        
        map <int,int> M;
        
        // Create a frequency map
        for (int i = 0; i < nums.size(); i++){
            if (M.find(nums[i]) != M.end())
               M[nums[i]]++;
             else
               M[nums[i]] = 1;              
        }
    
        int count = 0;
               
        if (k == 0){
            for (auto it : M){
                if(it.second >= 2)
                    count++;
            }
        }
            
        else{
            for (auto it : M){
                if (M.find(it.first + k) != M.end())
                    count++;
            }
        }
    return count;
    }
};
