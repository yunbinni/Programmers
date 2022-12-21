#include <algorithm>
#include <string>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string n_str = to_string(n);
    
    sort(n_str.begin(), n_str.end(), greater<>());
    
    answer = stoll(n_str);
    
    return answer;
}
