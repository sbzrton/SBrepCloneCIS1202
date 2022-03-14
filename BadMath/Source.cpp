#include <iostream>
#include <iomanip>
using namespace std;


//Function Prototype
float average(int&, int&, int&);

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "\nFirst number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "\n\nThe average is " << a << endl;


	cin.ignore(INT_MAX);
	return 0;

}

//Calling Function
float average(int &i1, int &i2, int& i3)
{
	float avg = 0;
	avg = (i1 + i2 + i3) / 3.0;
	return avg;
}
