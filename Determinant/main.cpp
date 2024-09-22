#include <bits/stdc++.h>
using namespace std;

int main() {

	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);
	
	double a, b, c;
	cout<<"Please input in the following a, b, c"<<'\n';
	cin>>a>>b>>c;
	
	double D = b*b-(4*a*c);
	if(D>0)
	{
		double x1 = ((b*-1) + sqrt(D)) / (2*a);
		double x2 = ((b*-1) - (sqrt(D))) / (2*a);
		cout<<"D = "<<D<<'\n';
		cout<<"The discriminant is greater than 0, then x1 and x2 are real and distinct"<<'\n';
		cout<<"x1 = "<<x1<<'\n';
		cout<<"x2 = "<<x2<<'\n';
	} else if(D<0)
	{
		cout<<"D = "<<D<<'\n';
		cout<<"The discriminant is less than 0, then x1 and x2 are imaginary"<<'\n';
	} else {
		double x = (b*-1) / 2*a;
		cout<<"D = "<<D<<'\n';
		cout<<"The discriminant is equal to 0, then x1 and x2 are real and equal"<<'\n';
		cout<<"x = "<<x<<'\n';
	}

}
