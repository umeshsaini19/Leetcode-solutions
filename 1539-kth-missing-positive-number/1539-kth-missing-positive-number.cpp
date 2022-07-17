class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k) k++;
        }
        return k;
    }
};


// usually if all elements smaller than K (let say 5) are not present in the array then answer will be K itself cuz the 5th number missing will be 5 cuz there is nothing else in between right?right!

// but if there are some elements smaller than K present in array like [2,3,4,7,11] here we are incrementing K because when we first see 2 , we on the spot know that now 5 will not be the 5th empty number bcz 2 is available so our number can be 6 now, we proceed further and find 3 in array, now we know that since 3 is present in array (which means there is another number present) so now 6 can't be the answer and it will be 7,