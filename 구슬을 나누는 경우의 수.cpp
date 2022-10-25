using namespace std;

int solution(int balls, int share) {
	if(balls==share) return 1;
	if(share==1) return balls;
    return solution(balls-1, share-1)+solution(balls-1, share);
}
