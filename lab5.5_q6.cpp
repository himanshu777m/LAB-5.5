// Programme to print right triangle star pattern


#include<iostream>
using namespace std;

int main()
{

int i,j,n;
cout << "Enter number of Row: ";
cin >> n;

for(int i=1,j; i<=n; i++){
	
	//printing space
	for(j=1; j<n; j++){
	   cout <<" ";
	}
	
	//printing stars
	for(j=1; j<=i; j++){
	   cout <<"*";
	}
	cout << "\n";

}

cout << "\n";
return 0;
}
