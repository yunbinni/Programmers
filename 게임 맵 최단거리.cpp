#include <bits/stdc++.h>
using namespace std;

int d[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

int BFS(vector<vector<int> >& maps)
{
	maps[0][0] = 2;
	
	queue<pair<int, int> > Q;
	Q.push(make_pair(0, 0));
	
	while(!Q.empty())
	{
		int r = Q.front().first;
		int c = Q.front().second;
		Q.pop();
		
		if(r == maps.size() - 1 && c == maps[0].size() - 1)
			return maps[r][c] - 1;
		
		for(int i = 0; i < 4; i++)
		{
			int nr = r + d[i][0];
			int nc = c + d[i][1];
			
			if(nr >= 0 && nc >= 0 && nr < maps.size() && nc < maps[0].size())
			{
				if(maps[nr][nc] == 1)
				{
					maps[nr][nc] = maps[r][c] + 1;
					Q.push(make_pair(nr, nc));
				}
			}
		}
	}
	
	return -1;
}
	

int solution(vector<vector<int> > maps)
{
    int answer = BFS(maps);
    
    return answer;
}
