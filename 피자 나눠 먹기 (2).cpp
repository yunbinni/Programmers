using namespace std;

int GCD(int A, int B) {
	if(A%B==0) return B;
	else return GCD(B, A%B);
}

int solution(int n) {
    int LCM=n*6/GCD(n, 6);
    return LCM/6;
}
