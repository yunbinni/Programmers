#include <vector>
using namespace std;

int solution(vector<int> dot) {
    int x=dot[0], y=dot[1];
    
    if(x>0 && y>0) return 1;
    if(x<0 && y>0) return 2;
    if(x<0 && y<0) return 3;
    if(x>0 && y<0) return 4;
    
    return 0;
}
