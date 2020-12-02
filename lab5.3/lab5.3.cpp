#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double s(const double x);
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dg = (tk - tp) / n;
	double t = tp;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|"
		<< setw(7) << "z" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	while (t <= tk)
	{
		z = s(pow(t,2)+1)+2*pow(s(1-t),2)+s(1);
		cout << "|"  
			<< setw(10) << setprecision(5) << z << " |"
			<< setw(5) << t << " |"
			<< endl;
		t += dg;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
double s(const double x)
{
	if (abs(x) > 1)
		return ((pow(cos(x),2)+1)/exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = ((2*k+2)/x);
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}