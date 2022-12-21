#include <vector>
using namespace std;

int res = 0;
vector<bool> chk;

void DFS(int L, int s, vector<int>& number)
{
	if(L > 2)
	{
		int sum = 0;
		
		for(int i = 0; i < number.size(); i++)
			if(chk[i])
				sum += number[i];
		
		if (sum == 0) res++;
		
		return;
	}
	
	for(int i = s; i < chk.size(); i++)
	{
		if(chk[i] == true) continue;
		chk[i] = true;
		DFS(L + 1, i + 1, number);
		chk[i] = false;
	}
}

int solution(vector<int> number) {
    int answer = 0;
    
    chk.assign(number.size(), 0);
    
    DFS(0, 0, number);
    
    answer = res;
    
    return answer;
}
