#include <iostream>
#include <string>
#include <vector>
using namespace std;

int len;
bool check[8];

int answer;

void DFS(int k, int L, vector<vector<int>>& dungeons) {
	
	if(L == len)
	{
		answer = len;
		return;
	}
	
	for(int i = 0; i < len; i++)
	{
		if(check[i] == false) {
			if(k >= dungeons[i][0])
			{
				check[i] = true;
				DFS(k - dungeons[i][1], L + 1, dungeons);
				answer = max(answer, L + 1);
				check[i] = false;
			}
		}
	}
}

int solution(int k, vector<vector<int>> dungeons) {
    len = dungeons.size();
    
    DFS(k, 0, dungeons);
    
    return answer;
}

int main() {
	return 0;
}
