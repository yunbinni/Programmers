#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
bool cmp(string A, string B)
{
	if(A[N] == B[N])
		return A < B;
	
	return A[N] < B[N];
}

vector<string> solution(vector<string> strings, int n) {
    N = n;
    
    sort(strings.begin(), strings.end(), cmp);
    
    return strings;
}
