#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
float m;
float n;
float side1, side2, hyptonuse;

cout <<"Make a Pythagorean Triple!" <<endl;
cout <<"Enter two positive integer where m > n."<<endl;
cin >> m >> n; 

side1 = (pow(m,2))+(pow(n,2));
side2 = 2*m*n;
hyptonuse = sqrt(pow(m,2))+(pow(n,2));

cout <<"Your triple:" << side1 << side2 << hyptonuse << endl;
return 0;
}

