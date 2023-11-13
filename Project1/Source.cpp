#include <iostream>
#include <cmath>
using namespace std;
double P0(const int N)
{
	double p = 1;
	for (int K = N; K <= 25; K++)
		p *= sqrt(1.0+N/K) ;
	return p;
}
double P1(const int N, const int K)
{
	if (K > 25)
		return 1;
	else
		return sqrt(1.0 + N / K) * P1(N, K + 1);
}
double P2(const int N, const int K)
{
	if (K < N)
		return 1;
	else
		return sqrt(1.0 + N / K) * P2(N, K - 1);
}
double P3(const int N, const int K, double t)
{
	t = t * sqrt(1.0 + N / K);
	if (K >= 25)
		return t;
	else
		return P3(N, K + 1, t);
}
double P4(const int N, const int K, double t)
{
	t = t * sqrt(1.0 + N / K);
	if (K <= N)
		return t;
	else
		return P4(N, K - 1, t);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "(iter) P0 = " << P0(N) << endl;
	cout << "(rec up ++) P1 = " << P1(N, N) << endl;
	cout << "(rec up --) P2 = " << P2(N, 25) << endl;
	cout << "(rec down ++) P3 = " << P3(N, N, 1) << endl;
	cout << "(rec down --) P4 = " << P4(N, 10, 1) << endl;
	return 0;
}