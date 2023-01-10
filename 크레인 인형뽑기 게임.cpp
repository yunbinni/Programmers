#include <bits/stdc++.h>
using namespace std;

stack<int> Basket;
int res = 0;

void PickandDrop(vector<vector<int>>& board, int move)
{
	pair<int, int> Crane = make_pair(0, move - 1);
	
	while(Crane.first + 1 <= board.size() - 1 && board[Crane.first][Crane.second] == 0)
		Crane.first += 1;
	
	int doll = board[Crane.first][Crane.second];
	
	board[Crane.first][Crane.second] = 0;
	
	if (Basket.size() && Basket.top() == doll)
	{
		res += 2;
		Basket.pop();
	}
	
	else
		if(doll) Basket.push(doll);
}

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    for(int move : moves)
    	PickandDrop(board, move);
    
    answer = res;
    
    return answer;
}

int main() {
	cout << solution({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0,0}}, {1,2,3,4});
	return 0;
}
