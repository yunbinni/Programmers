#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> count(n + 1, 1);
    
    for (int n : lost)
    	count[n]--;
    
    for (int n : reserve)
    	count[n]++;
    
    for (int i = 1; i <= n; ++i)
    {
    	if (count[i] == 0)
    	{
    		if (i > 1)
    		{
    			if (count[i - 1] > 1)
    			{
    				count[i - 1]--;
    				count[i]++;
    				continue;
    			}
    			
    			else if (i < n)
    			{
    				if (count[i + 1] > 1)
    				{
    					count[i + 1]--;
    					count[i]++;
    					continue;
    				}
    			}
    		}
    		
    		if (i < n)
    		{
    			if (count[i + 1] > 1)
				{
					count[i + 1]--;
					count[i]++;
					continue;
				}
				
				else if (i > 1)
				{
					if (count[i - 1] > 1)
	    			{
	    				count[i - 1]--;
	    				count[i]++;
	    				continue;
	    			}
	    		}
	    	}
	    }
	}
	
	for (int i = 1; i <= n; ++i)
		if (count[i])
			answer++;
    
    return answer;
}
