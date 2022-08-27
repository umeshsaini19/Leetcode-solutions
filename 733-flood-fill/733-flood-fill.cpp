class Solution {
public:
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
	   
		int m = image.size();
		int n = image[0].size();
		
		queue<pair<int,int>> q;
		q.push(make_pair(sr,sc));
		
		long long int precolor = image[sr][sc];
		if(precolor == color) return image;
		
		while(!q.empty()){
			
			int i = q.front().first;
			int j = q.front().second;
			image[i][j] = color;
			q.pop();
			
			if(i-1 >= 0 && image[i-1][j] == precolor)
				q.push(make_pair(i-1,j));
			
			if(i+1 < m && image[i+1][j] == precolor)
				q.push(make_pair(i+1,j));
			
			if(j-1 >= 0 && image[i][j-1] == precolor)
				q.push(make_pair(i,j-1));
			
			if(j+1 < n && image[i][j+1] == precolor)
				q.push(make_pair(i,j+1)); 
		}
	   
		return image;
	}
};