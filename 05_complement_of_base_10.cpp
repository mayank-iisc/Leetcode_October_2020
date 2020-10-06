class Solution {
public:
  
    int bitwiseComplement(int N) {
        
        //edge case
        if (N == 0) return 1;
        
        int i = 0;
        int j = 0;
        
        // N + N' = 111...111, generate 2^N-1 and subtract the original number
        
        while(i < N){
            i += pow(2,j);
            j++;
        }
    return i-N;
    }
};
