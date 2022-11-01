#include <algorithm>
#include <string>
using namespace std;

int solution(string before, string after) {
	sort(before.begin(), before.end());
	sort(after.begin(), after.end());
	if(before != after) return 0;
	return 1;
}
