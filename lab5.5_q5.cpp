// Rhombus star pattern

#include<iostream>
using namespace std;

int main()
{

//asking input
int n;
cout << "Enter number of Row: ";
cin >> n;

//printing Rhombus
for(int i=1,j; i<=n; i++){
	
	//printing space
	for(j=1; j<=n-i; j++){
	   cout <<" ";
	}
	
	//printing stars
	for(j=1; j<=n; j++){
	   cout <<"*";
	}
	cout << "\n";
}

return 0;
}
	
