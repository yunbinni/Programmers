#include <vector>
using namespace std;

int GCD(int a, int b) {
	if(a%b==0) return b;
	else return GCD(b, a%b);
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    answer.push_back((denum1*num2)+(denum2*num1));
    answer.push_back(num1*num2);
    int gcd=GCD(answer[0], answer[1]);
    answer[0]/=gcd, answer[1]/=gcd;
    return answer;
}
