#include <algorithm>
#include <string>
using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<>());
    
    return s;
}
