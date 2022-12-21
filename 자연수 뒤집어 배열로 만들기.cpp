#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string n_str = to_string(n);
    
    reverse(n_str.begin(), n_str.end());
    
    for(char n_ch : n_str)
    	answer.push_back(n_ch - '0');
    
    return answer;
}
