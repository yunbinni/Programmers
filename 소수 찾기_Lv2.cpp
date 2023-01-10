#include <string>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

set<int> numSet;
vector<bool> visited;

int isPrime(int n)
{
	if (n == 0 || n == 1)
		return 0;
	
	int squareRoot = sqrt(n);
	
	for (int i = 2; i <= squareRoot; ++i)
	{
		if (n%i == 0)
			return 0;
	}
	
	return 1;
}

void combineNumber(string& original, string combined, int depth) // DFS
{
	if(depth > original.size())
		return;
	
	if(combined.length() > 0)
		numSet.insert(stoi(combined));
	
	for(int i = 0; i < original.size(); ++i)
	{
		if(!visited[i])
		{
			visited[i] = true;
			combineNumber(original, combined + original[i], depth + 1);
			visited[i] = false;
		}
	}
}

int solution(string numbers)
{
    int answer = 0;
    
    visited.assign(numbers.size(), false);
    
    combineNumber(numbers, "", 0); // numSet에 조합된 숫자들을 넣음 
    
    for(int number : numSet)
    {
    	if (isPrime(number))
    		answer++;
    }
    
    return answer;
}
