class Solution {
	public:
		int climbStairs(int n) {
			int arr[n+1];   //yeh jma same he fibonacci vala bs isme n+1 he usme n+1 bcz usme 0 vala bhi test cass and isme mentioned he test case 1 to 45 hi hoga
			arr[0]=1;
			arr[1]=1;
			for(int i=2;i<=n;i++){
				arr[i]=arr[i-1]+arr[i-2];
			}

			return arr[n];
	}
};                  

//yeh recursion se s itna alag he ki recursion 1 se shuru hoti yeh 0 se means yahan pe base se check kr rhe ki 2 he toh base se 1 1se 2 and 0 se direcr 2 bhi ja skte he