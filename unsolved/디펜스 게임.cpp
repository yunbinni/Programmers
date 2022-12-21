#include <bits/stdc++.h>
using namespace std;

int res = 1;
vector<bool> checkedIndexes;

void DFS(int L, int s, int n, int k, vector<int>& enemy) {
	
	if(L > k)
	{
		int count = 0;
		
		for(int i = 1; i <= enemy.size(); i++)
		{
			if(checkedIndexes[i] == true)
				{cout<<i<<" ";count++;}
			
//			else if(n - enemy[i] > 0)
//			{
//				n -= enemy[i];
//				count++;
//			}
			
			else break;
			
		}
		res = max(res, count);
		
		return;
	}
	
	for(int i = s; i <= enemy.size(); i++)
	{
		checkedIndexes[i] = true;
		DFS(L + 1, i + 1, n, k, enemy);
		checkedIndexes[i] = false;
	}
}

int solution(int n, int k, vector<int> enemy) {
    int answer = 0;
    
    checkedIndexes.assign(enemy.size() + 1, false);
    
    DFS(1, 1, n, k, enemy);
    
    answer = res;
    
    return answer;
}

int main()
{
	vector<int> A{4, 2, 4, 5, 3, 3, 1};
	
	checkedIndexes.assign(A.size() + 1, false);
	
	DFS(1, 1, 7, 3, A);
	
	cout << endl << res;
	
	return 0;
}
