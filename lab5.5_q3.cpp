// Programme to print reverse right triangle star pattern


#include<iostream>
using namespace std;

int main()
{
	
//declaring variable	
int i,j,n;
cout << "Enter number of Row: ";
cin >> n;

//print inverted right triangle star pattern	
for(i=0; i<n; i++){
				
	for(j=0; (n-i)>j; j++){
	cout << "*";        //printing star
	cout << " \n";		//goto next line
	}
}

cout << "\n";     
return 0;
}
