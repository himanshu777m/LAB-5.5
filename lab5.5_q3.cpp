// Programme to print reverse right triangle star pattern


#include<iostream>
using namespace std;

int main()
{

int i,j,n;
cout << "Enter number of Row: ";
cin >> n;

for(i=0; i<n; i++){
	cout << " \n";
	for(j=0; (n-i)>j; j++){
	cout << "*";
	}
}

cout << "\n";
return 0;
}
