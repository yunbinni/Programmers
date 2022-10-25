#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(string q : quiz) {
    	
    	int A, B, C;
    	char op, eq;
    	
    	stringstream ss;
    	ss.str(q);
    	ss >> A >> op >> B >> eq >> C;
    	
    	if(op == '+') {
    		if(A + B == C) answer.push_back("O");
    		else answer.push_back("X");
    	}
    	
    	if(op == '-') {
    		if(A - B == C) answer.push_back("O");
    		else answer.push_back("X");
    	}
    }
    
    return answer;
}
