#include <string>
#include <vector>
using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int size = my_str.size();
    string store;
    
    for(int i = 0; i < size; i++)
    {
    	char ch = my_str[i];
    	
    	if(i>0 && i%n == 0)
		{
    		answer.push_back(store);
    		store.clear();
    	}
    	
    	store.push_back(ch);
    }
    
    answer.push_back(store);
    
    return answer;
}
