#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    
    vector<vector<double>> ddots;
    
    for(auto dot : dots)
    {
    	double x = (double)dot[0];
    	double y = (double)dot[1];
    	
    	ddots.push_back({x, y});
    }
    
    double first = (ddots[0][0] - ddots[1][0]) / (ddots[0][1] - ddots[1][1]);
    double second = (ddots[0][0] - ddots[2][0]) / (ddots[0][1] - ddots[2][1]);
    double third = (ddots[0][0] - ddots[3][0]) / (ddots[0][1] - ddots[3][1]);
    double fourth = (ddots[1][0] - ddots[2][0]) / (ddots[1][1] - ddots[2][1]);
    double fifth = (ddots[1][0] - ddots[3][0]) / (ddots[1][1] - ddots[3][1]);
    double sixth = (ddots[2][0] - ddots[3][0]) / (ddots[2][1] - ddots[3][1]);
    
    if(first == sixth)
    	return 1;
    if(second == fifth)
    	return 1;
    if(third == fourth)
    	return 1;
    
    return 0;
}
