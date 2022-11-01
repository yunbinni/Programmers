#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int minX = 257;
    int minY = 257;
    int maxX = -257;
    int maxY = -257;
    
    for(vector<int> dot : dots) 
    {
    	minX = min(minX, dot[0]);
    	minY = min(minY, dot[1]);
    	maxX = max(maxX, dot[0]);
    	maxY = max(maxY, dot[1]);
    }
    
    return (maxX - minX)*(maxY - minY);
}
