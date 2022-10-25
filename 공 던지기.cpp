#include <vector>
using namespace std;

int solution(vector<int> numbers, int k) {
	int numbersSize=numbers.size();
	return numbers[((k-1)*2)%numbersSize];
}
