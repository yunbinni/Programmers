#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

struct Student {
	int number;
	int score;
	Student(int a, int b) {
		number = a;
		score = b;
	}
};

bool cmp(const Student& A, const Student& B) {
	if(A.score == B.score)
		return A.number < B.number;
	return A.score > B.score;
}

set<int> get_super(vector<Student> Students) {
	set<int> Set;
	
	sort(Students.begin(), Students.end(), cmp);
	
	for(int i = 0; i < Students.size()/2; i++)
		Set.insert(Students[i].number);
	
	return Set;
}

int solution(int n, vector<int> student, vector<int> point) {
    int answer = 0;
    
    vector<Student> Students;
    
	for(int i = 1; i <= n; i++) Students.push_back(Student(i, 0));
	
    int len = student.size();
    
    set<int> super = get_super(Students);
		
    for(int i = 0; i < len; i++)
    {
    	for(int j = 0; j < n; j++)
    	{
    		if(Students[j].number == student[i])
			{
    			Students[j].score += point[i];
    			break;
    		}
    	}
    	
    	set<int> tsuper = get_super(Students);
    	
    	if(super != tsuper) {
    		answer++;
    		super = tsuper;
    	}
    }
    
    return answer;
}
