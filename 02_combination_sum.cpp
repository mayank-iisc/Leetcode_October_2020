class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        //As function returns vector of vectors
        vector <vector <int>> results;
        
        //Edge case check
        if(candidates.size() == 0)
            return results;
        
        //We will sort the candidate set - optional step as returning any order is fine
        sort(candidates.begin(),candidates.end());
        
        //Combination set
        vector <int> combination;
        
        //Function to find combinations - DFS/Backtracking function
        toFindCombination (results, combination, candidates, target, 0);
        
        return results;
    }
    
    //Can be made a private function also
    void toFindCombination (vector <vector <int>>& results, vector <int>& combination, vector <int>& candidates, int target, int start_index){
        
        //Return condition if a combination resulting target is found
        if(target == 0){
            results.push_back(combination);
            return;
        }
        
        for(int i = start_index; i < candidates.size(); i++){
            
            //break condition where target becomes negative, then no need to explore further
            if(target < 0)
                break;
            
            //Exploration of a candidates[i] needs it to be pushed into a combination
            combination.push_back(candidates[i]);
            
            //As same element can be used many times, therefore start_index is set as i
            toFindCombination(results, combination, candidates, target - candidates[i], i);
            //To reach previous level, pop last element in combinations
            combination.pop_back();
        }
        
    }
};
