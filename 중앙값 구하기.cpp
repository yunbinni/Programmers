#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> array) {
    int arraySize=array.size();
    sort(array.begin(), array.end());
    return array[arraySize/2];
}
