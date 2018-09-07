// programe to print Squre star pattern

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

int n;

//asking for input
cout << "Enter number of Row: ";
cin >> n;

//condituional structure
//printing stars'

for (int i=0; i<n; i++){
	cout << " \n";
	
	for (int j=0; j<n; j++){
	cout << "*";
	}
}
cout << endl;

return 0;
}
