class RecentCounter {
public:
    
    queue <int> q;
    
    RecentCounter() {
        
    }
    
    int ping(int t) {
        
        //Push all timestamps to a queue
        q.push(t);
        
        //if timestamps are in the range of 3000
        
        while(q.front() < t-3000)
            q.pop();
        
    //return queue size
    return q.size();
            
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
