#include "ra/rational.hpp"
#include <iostream>

int main(){
	using std::cout;
	using std::endl;

	ra::math::rational<double> obj_A;
	cout << "1) Test default constructor" << endl;
	cout << "   Numerator: " << obj_A.numerator() << endl;
	cout << "   Denominator: " << obj_A.denominator() << endl << endl;

	ra::math::rational<float> obj_B(-56);
	cout << "2) Test constructor with single parameter" << endl;
	cout << "   Numerator: " << obj_B.numerator() << endl;
	cout << "   Denominator: " << obj_B.denominator() << endl << endl;

	ra::math::rational<double> obj_C(31488,-117);
	cout << "3) Test constructor with double parameter and trunction function" << endl;
	cout << "   Numerator: " << obj_C.numerator() << endl;
	cout << "   Denominator: " << obj_C.denominator() << endl;
	cout << "   Truncated value: " << obj_C.truncate() << endl << endl;

	

	return 0;
}
