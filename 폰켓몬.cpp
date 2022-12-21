#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> Set(nums.begin(), nums.end());
    
    answer = min(nums.size()/2, Set.size());
    
    return answer;
}
