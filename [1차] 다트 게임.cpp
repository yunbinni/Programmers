#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

int solution(string dartResult)
{
    int answer = 0;
    dartResult.push_back('0');
    
	string Score_str;
	vector<int> Scores;
	string BonusandOption;
	
	for(char ch : dartResult)
	{
		if('0' <= ch && ch <= '9') // 숫자일 경우 
		{
			if(BonusandOption.size())
			{
				BonusandOption.push_back(' ');
				char Bonus = BonusandOption[0];
				char Option = BonusandOption[1];
				BonusandOption.clear();
				
				int lastIndex = Scores.size() - 1;
				
				if(Bonus == 'D') Scores[lastIndex] *= Scores[lastIndex];
				if(Bonus == 'T') Scores[lastIndex] *= (Scores[lastIndex]*Scores[lastIndex]);
				
				if(Option == '#') Scores[lastIndex] *= -1;
				if(Option == '*')
				{
					Scores[lastIndex] *= 2;
					if(lastIndex - 1 >= 0) Scores[lastIndex - 1] *= 2;
				}
				
				BonusandOption.clear();
			}
			
			Score_str.push_back(ch);
		}
		
		else // 문자일 경우 
		{
			if(Score_str.size())
			{
				int Score = stoi(Score_str);
				Scores.push_back(Score);
				Score_str.clear();
			}
			
			BonusandOption.push_back(ch);
		}
	}
	
	for(int i : Scores) cout << i << " ";
	
	answer = accumulate(Scores.begin(), Scores.end(), 0);
	
    return answer;
}

int main()
{
	cout << solution("1D2S3T*");
	return 0;
}
