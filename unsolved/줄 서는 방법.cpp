#include <vector>
using namespace std;

int numbers[21];
bool chk[21];
long long count;
vector<int> answer;

void DFS(int n, long long k, int L) // DFS
{
	if (L > n)
	{
		count++;
		
		if (k == count)
		{
	    	for(int i = 1; i <= n; ++i)
	    		answer.push_back(numbers[i]);
	    	
			return;
	    }
	    
		return;
	}
    
    for(int i = 1; i <= n; ++i)
    {
    	if (!chk[i])
    	{
    		chk[i] = true;
    		numbers[L] = i;
    		DFS(n, k, L + 1);
    		chk[i] = false;
    	}
    }
}

vector<int> solution(int n, long long k)
{
    DFS(n, k, 1);
    return answer;
}
