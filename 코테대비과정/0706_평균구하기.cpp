#include <iostream>
using namespace std;

int main()
{
   	int N = 0;
   	int A[1000];
   	cin >> N;
	int sum = 0; // on-the-fly
	int max = 0;

   	for (int i = 0; i < N; i++){
    	cin >> A[i];
		if (max < A[i]) max = A[i];
		sum += A[i];
   	}

	double res = (double)sum * 100 / max / 3;
	//cout << res << endl;
	printf("%f\n", res);
	return 0;
}
