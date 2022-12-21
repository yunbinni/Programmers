#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int d[8][2] = { {-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1} };

struct Ship {
	int r;
	int c;
	int dir;
	Ship(int A, int B, int C) {
		r = A;
		c = B;
		dir = C;
	}
};

int solution(vector<string> worldmap) {
    int answer = 0;
	int r = worldmap.size(), c = worldmap[0].size();
	
	vector<vector<bool>> chk(r+1, vector<int>(c+1, 0));
	
	queue<Ship> Q;
	Q.push(Ship(1, 1, 6));
	
	while(!Q.empty())
	{
		int curR = Q.front().r;
		int curC = Q.front().c;
		int curD = Q.front().dir;
		Q.pop();
		
		for(int i = 0; i < 8; i++) {
			for(int j = -1; j <= 1; j++) {
			newD = curD + j;
			if(newD < 1) newD = 8;
			if(newD > 8) newD = 1;
			newR = curR + d[newD][0];
			newC = curC + d[newC][1];
			
			if(newR>=0 && newC>=0 && newR<r && newC<c) {
				if(chk[newR][newC] == false) {
					chk[newR][newC] = chk[curR][curC] +1;
					Q.push(Ship(newR, newC, newD);
				}
			}
		}
	}
    
    return answer;
}

int main() {
	return 0;
}
