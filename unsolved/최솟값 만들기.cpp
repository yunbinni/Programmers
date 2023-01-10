#include <vector>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 1000000;
	
	for(int i = 0; i < A.size(); ++i) {
		
		int temp = 0;
		
		for(int j = 0; j < B.size(); ++j)
		{
			if (i == j) continue;
			
			temp += A[i]*B[i];
		}
		
		answer = min(answer, temp);
	}

    return answer;
}
