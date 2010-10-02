#include <iostream> 
using namespace std;

int main ()
{	
	float temp_C;
	float temp_F;

	cout << "Enter temp in F:" << endl;
	cin >> temp_F;

	temp_C = (5.0/9.0)*(temp_F-32);

	cout << "The temp is " << temp_C << " Celcius." << endl; 
	return 0; 

}
