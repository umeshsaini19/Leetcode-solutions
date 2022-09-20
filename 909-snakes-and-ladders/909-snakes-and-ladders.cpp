class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        
        queue<int>q;
        q.push(1);
        visited[n-1][0]=true;    //yeh last row and first column yani ki first position ko visited krdia 
        int steps=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int curpos=q.front();
                if(curpos==n*n) return steps; // last position pe agye he 
                q.pop();
            for(int i=1;i<=6;i++){
            int nextpos=curpos+i;
                if(nextpos>n*n) break;//last pe punch gya add krte krte tohbreak krde 
                int r=n-(nextpos-1)/n-1;   //yeh row nikalne ka formyla he 
                    int c=(nextpos-1)%n; //yeh column nikalne ka agr even length he toh  row ka
            	if ((n-1-r) % 2 != 0) {
						c = n - 1 - c;
					}   //agr odd length he bcz of zig zag type 
                if(!visited[r][c]){
                    visited[r][c]=true;
                    if(board[r][c]!=-1) //means ya toh ladder he he ya stairs toh board pe jp value he voh deni  hogi{
                        q.push(board[r][c]);
                    
                else q.push(nextpos);
                }
            }
        }
             steps++;
        }
       
        
        
        return -1;
    }
};

//codebix se smja he yeh code 