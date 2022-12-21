#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i = 1; i < food.size(); i++)
    {
    	for(int j = 0; j < food[i]/2; j++)
    	{
    		answer.push_back(i + '0');
    	}
    }
    
    string copied(answer);
    
//    string copied;
//    copy(answer.begin(), answer.end(), back_inserter(copied));

    reverse(copied.begin(), copied.end());
    
    answer = answer + "0" + copied;
    
    return answer;
}
