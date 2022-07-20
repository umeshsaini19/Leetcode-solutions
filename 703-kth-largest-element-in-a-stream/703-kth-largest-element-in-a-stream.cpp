class KthLargest {
public:
   priority_queue<int,vector<int>,greater<int>> min_heap;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        kk=k;
        for(int i=0;i<nums.size();i++)
        {
            min_heap.push(nums[i]);
            if(min_heap.size()>k)min_heap.pop();
        }
    }
    
    int add(int val) {
        min_heap.push(val);
         if(min_heap.size()>kk)min_heap.pop();
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

//simply 4,5,8,2,3 bhi add hoga add function ke andr and pehle 4 me se check krlo and min heap bnalo and then add vala bhi lgado and 3 he kth element and upr add liha he 3 ko fir add 5 fir add 10 aise