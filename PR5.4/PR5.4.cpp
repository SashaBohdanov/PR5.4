#include <iostream>
#include <cmath>
using namespace std;

double S0(const int l, const int N)
{
	double s = 0;
	for (int i = l ; i <= N; i++)
		s += (( 1 / i) + sqrt(1 + sin(i) * 2));
	return s;
}
double S1(const int l, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return ((1 / i) + sqrt(1 + sin(i) * 2)) + S1(l, N, i + 1);
}
double S2(const int l, const int N, const int i)
{
	if (i < l)
		return 0;
	else
		return ((1 / i) + sqrt(1 + sin(i) * 2)) + S2(l, N, i - 1);
}
double S3(const int l, const int N, const int i, double t)
{
	t = t + ((1 / i) + sqrt(1 + sin(i) * 2));
	if (i >= N)
		return t;
	else
		return S3(l, N, i + 1, t);
}
double S4(const int l, const int N, const int i, double t)
{
	t = t + ((1 / i) + sqrt(1 + sin(i) * 2));
	if (i <= l)
		return t;
	else
		return S4(l, N, i - 1, t);
}
int main()
{
	int l, N;
	cout << "l = "; cin >> l;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(l, N) << endl;
	cout << "(rec up ++) S1 = " << S1(l, N, l) << endl;
	cout << "(rec up --) S2 = " << S2(l, N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(l, N, l, 0) << endl;
	cout << "(rec down --) S4 = " << S4(l, N, N, 0) << endl;
	return 0;
}

