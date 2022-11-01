#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    int n = board.size();
    vector<vector<int>> check = board;
    
    for(int i = 0 ; i < n; i++) {
    	for(int j = 0; j < n; j++)
    	{
    		if(board[i][j] == 1)
    		{
				for(int ii = i - 1; ii <= i + 1; ii++) {
					for(int jj = j - 1; jj <= j + 1; jj++)
					{
						if(ii >= 0 && jj >= 0 && ii < n && jj < n)
							check[ii][jj] = 1;
					}
				}
			}
		}
	}
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			answer += (check[i][j] == 0);
    
    return answer;
}
