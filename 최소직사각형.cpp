#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> sizes) {
    
    int w = 0;
    int h = 0;
    
    for(int i = 0; i < sizes.size(); i++)
    {
    	w = max(w, max(sizes[i][0], sizes[i][1]));
    	h = max(h, min(sizes[i][0], sizes[i][1]));
    }
    
    return w*h;
}
