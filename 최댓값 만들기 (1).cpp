#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> numbers) {
	sort(numbers.begin(), numbers.end(), greater<>());
	return numbers[0]*numbers[1];
}
