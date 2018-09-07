// Programme to print Hollow squre star pattern

//including library
#include<iostream>
using namespace std;

//declare function
int main()
{

int n;
cout << "Enter number of Row: ";
cin >> n;

//printing hollow squre star
for(int i=1,j; i<n+1; i++)
{
   for(j=1; j<n+1; j++){
	if ((i==1)||(i==n)||(j==1)||(j==n)){
		cout << "*";
	}
	else{
	cout << " ";
	}
   }
   cout << "\n";	//go to next line
}
cout << "\n";
return 0;
}
