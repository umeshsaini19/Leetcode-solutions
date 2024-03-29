class Solution {
public:
//    int getLiveNeighbours(vector<vector<int>>& curr, int i, int j, int m, int n) {
// 	int liveNeighbours = 0;
// 	if(i>0) {
// 		//check the upper neighbour
// 		if(curr[i-1][j] == 1) liveNeighbours++;
// 	}
// 	if(i<m-1) {
// 		//check the lower neighbour
// 		if(curr[i+1][j] == 1) liveNeighbours++;
// 	}
// 	if(j>0) {
// 		//check the left neighbour
// 		if(curr[i][j-1] == 1) liveNeighbours++;
// 	}
// 	if(j<n-1) {
// 		//check the right neighbour
// 		if(curr[i][j+1] == 1) liveNeighbours++;
// 	}

// 	if(i>0 && j>0) {
// 		if(curr[i-1][j-1] == 1) liveNeighbours++;
// 	}
// 	if(i>0 && j<n-1) {
// 		if(curr[i-1][j+1] == 1) liveNeighbours++;
// 	}
// 	if(i<m-1 && j>0) {
// 		if(curr[i+1][j-1] == 1) liveNeighbours++;
// 	}
// 	if(i<m-1 && j<n-1) {
// 		if(curr[i+1][j+1] == 1) liveNeighbours++;
// 	}
// 	return liveNeighbours;
// }
// void gameOfLife(vector<vector<int>>& board) {
// 	vector<vector<int>> curr = board;
// 	int m = board.size();
// 	int n = board[0].size();
// 	for(int i = 0; i<m; i++) {
// 		for(int j = 0; j<n; j++) {
// 			int ln = getLiveNeighbours(curr, i, j, m, n);
// 			if(board[i][j] == 0) {
// 				//currently dead
// 				//can become alive if has exactly three live neighbours
// 				if(ln == 3) {
// 					board[i][j] = 1;
// 				}
// 			}
// 			else if(board[i][j] == 1) {
// 				//<2 -> die
// 				//==2 || ==3 live
// 				//>3 ->die
// 				if(ln < 2 || ln > 3) {
// 					board[i][j] = 0;
// 				}
// 			}
// 		}
// 	}
    
    //jo neche vala soltion he uska yeh faida he ki hmne koi new copy ni bnai pehle values bdli firse vahi dedi voh ani chaiye thi agr 3 he toh 0 krdi and 2 he toh 1 krdi and na mdify kiye pure ko na hi store kiya toh soace complexity bh gau 
   int getLiveNeighbours(vector<vector<int>>& curr, int i, int j, int m, int n) {
	int liveNeighbours = 0;
	if(i>0) {
		//check the upper neighbour
		if(curr[i-1][j] == 1 || curr[i-1][j] == 3) liveNeighbours++;  // 3 tbhi aya kab voh newly dead hya he means voh pehle alive tha and voh bhi count me hi ayega 
	}
	if(i<m-1) {
		//check the lower neighbour
		if(curr[i+1][j] == 1 || curr[i+1][j] == 3) liveNeighbours++;
	}
	if(j>0) {
		//check the left neighbour
		if(curr[i][j-1] == 1 || curr[i][j-1] == 3) liveNeighbours++;
	}
	if(j<n-1) {
		//check the right neighbour
		if(curr[i][j+1] == 1 || curr[i][j+1] == 3) liveNeighbours++;
	}

	if(i>0 && j>0) {
		if(curr[i-1][j-1] == 1 || curr[i-1][j-1] == 3) liveNeighbours++;
	}
	if(i>0 && j<n-1) {
		if(curr[i-1][j+1] == 1 || curr[i-1][j+1] == 3) liveNeighbours++;
	}
	if(i<m-1 && j>0) {
		if(curr[i+1][j-1] == 1 || curr[i+1][j-1] == 3) liveNeighbours++;
	}
	if(i<m-1 && j<n-1) {
		if(curr[i+1][j+1] == 1 || curr[i+1][j+1] == 3) liveNeighbours++;
	}
	return liveNeighbours;
}
void gameOfLife(vector<vector<int>>& board) {
	int m = board.size();
	int n = board[0].size();
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			int ln = getLiveNeighbours(board, i, j, m, n);
			if(board[i][j] == 0) {
				//currently dead
				//can become alive if has exactly three live neighbours
				if(ln == 3) {
					board[i][j] = 2; //newly alive
				}
			}
			else if(board[i][j] == 1) {
				//<2 -> die
				//==2 || ==3 live
				//>3 ->die
				if(ln < 2 || ln > 3) {
					board[i][j] = 3; //newly dead
				}
			}
		}
	}
	//final modifications 2->1, 3->0
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			if(board[i][j] == 2) board[i][j] = 1;
			else if(board[i][j] == 3) board[i][j] = 0;
		}
	} 
}


};