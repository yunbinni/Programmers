#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> T;
    for(auto e : clothes) T[e[1]]++;
    for(auto it=T.begin(); it!=T.end(); it++) answer*=it->second+1;
    return answer-1;
}
