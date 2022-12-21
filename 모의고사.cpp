#include <bits/stdc++.h>
using namespace std;

class Student
{
	private:
		int score;
		vector<int> pattern;
	
	public:
		Student(int score, vector<int> pattern)
		{
			this->score = score;
			this->pattern = pattern;
		}
		
		void plusScore()
		{
			this->score++;
		}
		
		int getScore()
		{
			return score;
		}
		
		vector<int> getPattern()
		{
			return pattern;
		}
		
		~Student() {}
};

vector<int> solution(vector<int> answers) {
    vector<int> result;
    
    Student student1(0, {1, 2, 3, 4, 5});
    Student student2(0, {2, 1, 2, 3, 2, 4, 2, 5});
    Student student3(0, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5});
    
    for(int i = 0; i < answers.size(); i++)
    {
    	int answer = answers[i];
    	
    	if(answer == student1.getPattern()[i%5]) student1.plusScore();
    	if(answer == student2.getPattern()[i%8]) student2.plusScore();
    	if(answer == student3.getPattern()[i%10]) student3.plusScore();
    }
    
    int maxScore = max({student1.getScore(), student2.getScore(), student3.getScore()});
    
    if(maxScore == student1.getScore()) result.push_back(1);
    if(maxScore == student2.getScore()) result.push_back(2);
    if(maxScore == student3.getScore()) result.push_back(3);
    
    return result;
}

int main()
{
	return 0;
}
