#include <string>
#include <set>
#include <cmath>
using namespace std;

set<int> numSet;

bool isPrime(int n)
{
	if (n == 0 || n == 1)
		return false;
		
	int squareRoot = sqrt(n);
	
	for (int i = 2; i <= squareRoot; ++i)
		if (n%i == 0)
			return false;
	
	return true;
}

void makeCombination(string comb, string others)
{
	if (comb != "")
		numSet.insert(stoi(comb));
	
	for (int i = 0; i < others.size(); ++i)
		makeCombination(comb + others[i], others.substr(0, i) + others.substr(i + 1));
}

int solution(string numbers)
{
	makeCombination("", numbers);
	
    int answer = 0;
    
    for (int n : numSet)
    	if (isPrime(n))
    		answer++;
    
    return answer;
}
