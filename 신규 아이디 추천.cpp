#include <string>
using namespace std;

string firstStep(string id)
{
	for(int i = 0; i < id.length(); ++i)
		id[i] = tolower(id[i]);
	
	return id;
}

string secondStep(string id)
{
	string result;
	
	for(char ch : id)
	{
		if('a' <= ch && ch <= 'z')
			result.push_back(ch);
		if('0' <= ch && ch <= '9')
			result.push_back(ch);
		if(ch == '-' || ch == '_' || ch == '.')
			result.push_back(ch);
	}
	
	return result;
}

string thirdStep(string id)
{
	int count = 0;
	string result;
	
	for(char ch : id)
	{
		if (ch == '.')
		{
			count++;
			
			if(count >= 2) continue;
			else result.push_back(ch);
		}
		
		else
		{
			count = 0;
			result.push_back(ch);
		}
	}
	
	return result;
}

string fourthStep(string id)
{
	if (id.front() == '.')
		id = id.substr(1);
	if (id.back() == '.')
		id.pop_back();
	
	return id;
}

string fifthStep(string id)
{
	if (!id.size())
		id.push_back('a');
	
	return id;
}

string sixthStep(string id)
{
	if (id.length() >= 16)
		id = id.substr(0, 15);
	
	if (id.back() == '.')
		id.pop_back();
	
	return id;
}

string seventhStep(string id)
{
	if(id.length() <= 2)
	{
		while(id.length() < 3)
			id.push_back(id.back());
	}
	
	return id;
}

string solution(string new_id) {
    string answer = "";
    
    answer = firstStep(new_id);
    answer = secondStep(answer);
    answer = thirdStep(answer);
    answer = fourthStep(answer);
    answer = fifthStep(answer);
    answer = sixthStep(answer);
    answer = seventhStep(answer);
    
    return answer;
}
