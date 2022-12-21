#include <string>
#include <map>
using namespace std;

map<string, char> number_word;

void set_number_word() {
	number_word["zero"] = '0';
	number_word["0"] = '0';
	number_word["one"] = '1';
	number_word["1"] = '1';
	number_word["two"] = '2';
	number_word["2"] = '2';
	number_word["three"] = '3';
	number_word["3"] = '3';
	number_word["four"] = '4';
	number_word["4"] = '4';
	number_word["five"] = '5';
	number_word["5"] = '5';
	number_word["six"] = '6';
	number_word["6"] = '6';
	number_word["seven"] = '7';
	number_word["7"] = '7';
	number_word["eight"] = '8';
	number_word["8"] = '8';
	number_word["nine"] = '9';
	number_word["9"] = '9';
}

int solution(string s) {
    int answer = 0;
    string answer_s;
    
    s.push_back(' ');
    
    set_number_word();
    
	string store;
	
	for(char ch : s)
	{
		if(store.size() > 0 && number_word[store])
		{
			answer_s.push_back(number_word[store]);
			store.clear();
		}
		store.push_back(ch);
	}
	
	answer = stoi(answer_s);
    
    return answer;
}
