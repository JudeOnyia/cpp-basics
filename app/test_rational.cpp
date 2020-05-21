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

	ra::math::rational<int> obj_C(31488,-117);
	cout << "3) Test constructor with double parameter and trunction function" << endl;
	cout << "   Numerator: " << obj_C.numerator() << endl;
	cout << "   Denominator: " << obj_C.denominator() << endl;
	cout << "   Truncated value: " << obj_C.truncate() << endl << endl;

	ra::math::rational<int> obj_D(48,-4);
	cout << "4) Test is_integer function" << endl;
	cout << "   Numerator: " << obj_D.numerator() << endl;
	cout << "   Denominator: " << obj_D.denominator() << endl;
	cout << "   is_integer: " << obj_D.is_integer() << endl;
	cout << "   Numerator: " << obj_C.numerator() << endl;
	cout << "   Denominator: " << obj_C.denominator() << endl;
	cout << "   is_integer: " << obj_C.is_integer() << endl << endl;

	ra::math::rational<int> obj_E(0,-4);
	cout << "5) Test the Not(!) operator" << endl;
	cout << "   Numerator: " << obj_E.numerator() << endl;
	cout << "   Not(!) operator: " << !obj_E << endl;
	cout << "   Numerator: " << obj_D.numerator() << endl;
	cout << "   Not(!) operator: " << !obj_D << endl << endl;

	ra::math::rational<int> obj_F(48,-4);
	cout << "6) Test Equality(==) operator" << endl;
	cout << "   Must be true: " << (obj_D==obj_F) << endl;
	cout << "   Must be false: " << (obj_F==obj_C) << endl << endl;

	cout << "7) Test Inequality(!=) operator" << endl;
	cout << "   Must be true: " << (obj_C!=obj_F) << endl;
	cout << "   Must be false: " << (obj_F!=obj_D) << endl << endl;

	

	return 0;
}
