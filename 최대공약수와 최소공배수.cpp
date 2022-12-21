#include <string>
#include <vector>
using namespace std;

int get_gcd(int a, int b)
{
    if(b == 0) return a;
    else return get_gcd(b, a%b);
}

int get_lcm(int a, int b)
{
    return a*b/get_gcd(a, b);
}

vector<int> solution(int n, int m)
{
    vector<int> answer;
    
    answer.push_back(get_gcd(n, m));
    answer.push_back(get_lcm(n, m));
    
    return answer;
}
