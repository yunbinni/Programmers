#include <string>
#include <vector>

using namespace std;

int ans=0;

void DFS(vector<int> numbers, int psum, int target, int L) {
	if(L>=numbers.size()) {
		if(psum==target) ans++;
		return;
	}
	DFS(numbers, psum+numbers[L], target, L+1);
	DFS(numbers, psum-numbers[L], target, L+1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    DFS(numbers, 0, target, 0);
    answer=ans;
    return answer;
}
