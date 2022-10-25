#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    int sum=0, numbersSize=numbers.size();
    for(int number : numbers) sum+=number;
    return (double)sum/numbersSize;
}
