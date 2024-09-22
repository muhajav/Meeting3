#include <bits/stdc++.h>
using namespace std;

int main() {

	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);
	
	cout<<"THE LARGEST NUMBER"<<'\n';
	cout<<"Please input 3 numbers a, b, and c"<<'\n';
	float a, b, c;
	cin>>a>>b>>c;

	float big = a;
	if(big<b)
	{
		big = b;
		if(big<c)
		{
			big = c;
		}
	} else{
		if(big<c)
		{
			big = c;
		}
	}

	cout<<"The largest number is "<<big<<'\n';

}
