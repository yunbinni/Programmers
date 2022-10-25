#include <vector>
using namespace std;

double solution(vector<int> arr) {
	int arrSize=arr.size();
    int sum=0;
    for(int number : arr) sum+=number;
    return (double)sum/arrSize;
}
