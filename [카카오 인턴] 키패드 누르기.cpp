#include <bits/stdc++.h>
using namespace std;

pair<int, int> Left = {3, 0};
pair<int, int> Right = {3, 2};

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
	for(int i = 0; i < numbers.size(); ++i)
	{
		numbers[i]--;
		if(numbers[i] == -1) numbers[i] = 10;
	}
	
	for(int number : numbers)
	{
		if (number%3 == 0)
		{
			answer.push_back('L');
			Left.first = number/3;
			Left.second = number%3;
		}
		
		else if(number%3 == 2)
		{
			answer.push_back('R');
			Right.first = number/3;
			Right.second = number%3;
		}
		
		else
		{
			pair<int, int> Coord;
			Coord.first = number/3;
			Coord.second = number%3;
			
			int range_L = abs(Left.first - Coord.first) + abs(Left.second - Coord.second);
			int range_R = abs(Right.first - Coord.first) + abs(Right.second - Coord.second);
			
			if(range_L == range_R)
			{
				if(hand == "left")
				{
					answer.push_back('L');
					Left = Coord;
				}
				else
				{
					answer.push_back('R');
					Right = Coord;
				}
			}
			else if(range_L < range_R)
			{
				answer.push_back('L');
				Left = Coord;
			}
			else
			{
				answer.push_back('R');
				Right = Coord;
			}
		}
	}
	
    return answer;
}
