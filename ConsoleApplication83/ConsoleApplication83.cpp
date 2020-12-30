#include <iostream>

using namespace std;

int main()

{
	int totalSecs, hr, mins, secs, q ;

	cout <<"Enter the total seconds to convert" << endl;

	cin >> totalSecs; 
	cout << endl; 

	hr = totalSecs / 3600; 
    
	q = totalSecs % 3600;
	mins = q / 60;
	

	secs = q % 60;

	cout << hr << ":" << mins << ":" << secs;
	cout << endl;




		return 0;


}