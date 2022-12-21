#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> numbers;
    stringstream ss;
    
    ss.str(s);
    int number;
    
    while(ss >> number)
    {
    	numbers.push_back(number);
    }
    
    sort(numbers.begin(), numbers.end());
    
    answer += to_string(numbers.front());
    answer += " ";
    answer += to_string(numbers.back());
    
    return answer;
}
