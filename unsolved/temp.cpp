#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
//    	cout << word << ", size: " << word.size() << endl;
        for(int i = 0; i < word.size(); i++)
        {
            if(i & 1)
                word[i] = tolower(word[i]);
            else
                word[i] = toupper(word[i]);
        }
        
        cout << word << endl;

        answer += (word + ' ');
    }

    answer.pop_back(); // 마지막 공백 제거 

    return answer;
}

int main() {
	solution("try     hello world ");
	return 0;
}
