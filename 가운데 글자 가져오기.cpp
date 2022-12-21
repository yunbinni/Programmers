#include <string>
using namespace std;

string solution(string s) {
    string answer = "";
    int maxIdx = s.size() - 1;
    int size = maxIdx & 1 ? 2 : 1;
    
    answer = s.substr(maxIdx/2, size);
    
    return answer;
}
