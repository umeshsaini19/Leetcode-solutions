class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
          vector<int> result(cells.size(), 0);
        int N=n;
        N = N > 14 ? (N % 14 == 0 ? 14 : N % 14) : N;
        while (N--) {
            for (int i = 1; i < cells.size() - 1; ++i) {
                result[i] = cells[i - 1] == cells[i + 1] ? 1 : 0;
            }
            cells = result;  //har bari pechle se agal compare hoga 
        }
        return result;
    }  //tc=o(n*n%14) jitni bhi aye mere acc
};

//kuch na alag hi dimag lgra iske andr toh shuru ho jao sunne ke liye 
//  sbse pehle yeh n vali line ka mtlb kya he iska mtlb he ki agr n 14 he toh 14 bari cycle chlegi ni toh n%14 jo bhi ae utni bari ab 14 bari hi kyu kyuki https://math.stackexchange.com/questions/3311568/why-does-this-pattern-repeat-after-14-cycles-instead-of-256-can-you-give-a-proo/3311963#3311963  
//har 14 cycle ke badh repet hoga and kyu hoga yeh article he 

// dusri bath yeh ki 1 se cells.size-1 tk kyu chala kyuki first and last hmesha ki zero rhenge acc to condition ki unke age vala and unke peche bala he hi ni koi 