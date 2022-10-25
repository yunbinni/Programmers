#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> T;
    for(auto e : participant) {
    	if(T.find(e)==T.end())
    		T.insert({e, 1});
    	else
    		T[e]++;
    }
    for(auto e : completion) T[e]--;
    for(auto e : participant) {
    	if(T[e]>0) return e;
    }
    return answer;
}

int main() {
	return 0;
}
