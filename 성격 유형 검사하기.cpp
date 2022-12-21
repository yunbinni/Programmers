#include <string>
#include <vector>
#include <map>
using namespace std;

int choice_score[8][2] = { {0, 0}, {1, 3}, {2, 2}, {3, 1}, {4, 0}, {5, 1}, {6, 2}, {7, 3} };

map<char, int> scores;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    int size = survey.size();
    
    for(int i = 0; i < size; i++)
    {
    	char select_1 = survey[i][0];
    	char select_2 = survey[i][1];
    	int choice = choices[i];
    	
    	if(choice < 4)
    		scores[select_1] += choice_score[choice][1];
    	if(choice > 4)
    		scores[select_2] += choice_score[choice][1];
    }
    
    if(scores['R'] >= scores['T'])
		answer.push_back('R');
    else
    	answer.push_back('T');
    
    if(scores['C'] >= scores['F'])
		answer.push_back('C');
    else
    	answer.push_back('F');
    
    if(scores['J'] >= scores['M'])
		answer.push_back('J');
    else
    	answer.push_back('M');
    
    if(scores['A'] >= scores['N'])
		answer.push_back('A');
    else
    	answer.push_back('N');
    
    return answer;
}
