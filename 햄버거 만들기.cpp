#include <vector>
using namespace std;

int getBurger(vector<int>& ingredient)
{
	if(ingredient.size() >= 4)
	{
		int i = ingredient.size() - 1;
		
		if(ingredient[i - 3] == 1 && ingredient[i - 2] == 2 && ingredient[i - 1] == 3 && ingredient[i] == 1)
		{
			for(int j = 0; j < 4; ++j)
				ingredient.pop_back();
			
			return 1;
		}
	}
	
	return 0;
}

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> store;
    
    for(int i = 0; i <= ingredient.size(); ++i)
    {
    	store.push_back(ingredient[i]);
    	answer += getBurger(store);
    }
    
    return answer;
}
