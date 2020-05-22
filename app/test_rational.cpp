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

	ra::math::rational<double> obj_C(31488,117);
	cout << "3) Test constructor with double parameter and trunction function" << endl;
	cout << "   Numerator: " << obj_C.numerator() << endl;
	cout << "   Denominator: " << obj_C.denominator() << endl;
	cout << "   Truncated value: " << obj_C.truncate() << endl << endl;

	ra::math::rational<double> obj_D(48,-4);
	cout << "4) Test is_integer function" << endl;
	cout << "   Numerator: " << obj_D.numerator() << endl;
	cout << "   Denominator: " << obj_D.denominator() << endl;
	cout << "   is_integer: " << obj_D.is_integer() << endl;
	cout << "   Numerator: " << obj_C.numerator() << endl;
	cout << "   Denominator: " << obj_C.denominator() << endl;
	cout << "   is_integer: " << obj_C.is_integer() << endl << endl;

	ra::math::rational<double> obj_E(0,-4);
	cout << "5) Test the Not(!) operator" << endl;
	cout << "   Numerator: " << obj_E.numerator() << endl;
	cout << "   Not(!) operator: " << !obj_E << endl;
	cout << "   Numerator: " << obj_D.numerator() << endl;
	cout << "   Not(!) operator: " << !obj_D << endl << endl;

	ra::math::rational<double> obj_F(-12);
	cout << "6) Test Equality(==) operator" << endl;
	cout << "   Must be true: " << (obj_D==obj_F) << endl;
	cout << "   Must be false: " << (obj_F==obj_C) << endl << endl;

	cout << "7) Test Inequality(!=) operator" << endl;
	cout << "   Must be true: " << (obj_C!=obj_F) << endl;
	cout << "   Must be false: " << (obj_F!=obj_D) << endl << endl;

	cout << "8) Test Less than(<) operator" << endl;
	cout << "   Must be true: " << (obj_F<obj_C) << endl;
	cout << "   Must be false: " << (obj_E<obj_F) << endl;
	cout << "   Must be false: " << (obj_F<obj_D) << endl << endl;

	cout << "9) Test Greater than(>) operator" << endl;
	cout << "   Must be false: " << (obj_F>obj_C) << endl;
	cout << "   Must be true: " << (obj_E>obj_F) << endl;
	cout << "   Must be false: " << (obj_F>obj_D) << endl << endl;

	cout << "10) Test Less than or equals to(<=) operator" << endl;
	cout << "    Must be true: " << (obj_F<=obj_C) << endl;
	cout << "    Must be false: " << (obj_E<=obj_F) << endl;
	cout << "    Must be true: " << (obj_F<=obj_D) << endl << endl;

	cout << "11) Test Greater than or equals to(>=) operator" << endl;
	cout << "    Must be false: " << (obj_F>=obj_C) << endl;
	cout << "    Must be true: " << (obj_E>=obj_F) << endl;
	cout << "    Must be true: " << (obj_F>=obj_D) << endl << endl;

	cout << "12) Test Reduced form and negative denominator" << endl;
	cout << "    obj_C(31488,117): " << obj_C.numerator() << ", " << obj_C.denominator() << endl;
	cout << "    obj_D(48,-4): " << obj_D.numerator() << ", " << obj_D.denominator() << endl << endl;

	ra::math::rational<double> obj_G(-9,0);
	cout << "13) Test Condition when denominator is zero" << endl;
	cout << "    obj_G(-9,0): " << obj_G.numerator() << ", " << obj_G.denominator() << endl << endl;

	cout << "14) Test Prefix Increment(++obj) and Decrement(--obj) operators" << endl;
	cout << "    obj_D: " << obj_D.numerator() << ", " << obj_D.denominator() << endl;
	cout << "    increment: " << (++obj_D).numerator() << ", " << obj_D.denominator() << endl;
	cout << "    decrement: " << (--obj_D).numerator() << ", " << obj_D.denominator() << endl << endl;

	cout << "15) Test Postfix Increment(obj++) and Decrement(obj--) operators" << endl;
	cout << "    obj_D: " << obj_D.numerator() << ", " << obj_D.denominator() << endl;
	cout << "    increment: " << (obj_D++).numerator() << ", " << obj_D.denominator() << endl;
	cout << "    See change after: " << obj_D.numerator() << ", " << obj_D.denominator() << endl;
	cout << "    decrement: " << (obj_D--).numerator() << ", " << obj_D.denominator() << endl;
	cout << "    See change after: " << obj_D.numerator() << ", " << obj_D.denominator() << endl << endl;
	
	ra::math::rational<double> obj_H(-9.776,1.33);
	cout << "16) Test case where a decimal points is used for the numerator and denominator " << endl;
	cout << "    obj_H: " << obj_H.numerator() << ", " << obj_H.denominator() << endl << endl;
	
	ra::math::rational<float> obj_I(8,10);
	ra::math::rational<float> obj_J(1,5);
	ra::math::rational<float> obj_K(2,3);
	cout << "17) Test Operator(+=) and (-=) and (*=) and (/=)" << endl;
	cout << "    (8/10) += (1/5): " << (obj_I+=obj_J).numerator() << "/" << obj_I.denominator() << endl;
	cout << "    (prev ans) -= (2/3): " << (obj_I-=obj_K).numerator() << "/" << obj_I.denominator() << endl;
	cout << "    (prev ans) *= (2/3): " << (obj_I*=obj_K).numerator() << "/" << obj_I.denominator() << endl;
	cout << "    (prev ans) /= (1/5): " << (obj_I/=obj_J).numerator() << "/" << obj_I.denominator() << endl;
	

	return 0;
}
