#include <string>
#include <vector>
#include <numeric> // accumulate
using namespace std;

double solution(vector<int> arr) {
    double answer = (double)accumulate(arr.begin(), arr.end(), 0)/(double)arr.size();
    return answer;
}
