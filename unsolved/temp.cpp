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
    	
        for(int i = 0; i < word.size(); i++)
        {
            if(i & 1)
                word[i] = tolower(word[i]);
            else
                word[i] = toupper(word[i]);
        }
        
        cout << word << ", size: " << word.size() << endl;

        answer += (word + ' ');
    }
    
    answer.pop_back(); // 마지막 공백 제거 
    cout << answer << ", size: " << answer.size() << endl;

    return answer;
}

int main() {
	solution("  TRY     hello   world     ");
	return 0;
}
