#ifndef rational_hpp
#define rational_hpp
#include <algorithm>
namespace ra::math{
template<class T>
class rational {
	public:
		typedef T int_type;
		
		// Default constructor sets rational number to 0
		rational(){
			n_ = (int_type)0;
			d_ = (int_type)1;
		}

		// Constructor to specify numerator and denominator values
		rational(int_type n, int_type d = (int_type)1){
			n_ = n;
			
			if(d == (int_type)0){
				// ZERO CONDITION!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			}
			else { d_ = d; }

			// Reduced form
			long long the_gcd = std::__gcd((long long)n_,(long long)d_);
			n_ = n_ / (int_type)the_gcd;
			d_ = d_ / (int_type)the_gcd;
			// If denominator is negative
			if(d_ < (int_type)0) { d_ = d_ * (int_type)(-1); n_ = n_ * (int_type)(-1); }
		}

		int_type numerator(){ return n_; } // Function to return the numerator value
		int_type denominator(){ return d_; } // Function to return the denominator value

		// Operator for compound addition (+=)
		rational& operator+=(const rational& obj){
			// FIGURE OUT THE MATH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			return *this;
		}

		// Operator for compound subtraction (-=)
		rational& operator-=(const rational& obj){
			// FIGURE OUT THE MATH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			return *this;
		}

		// Operator for compound multiplication (*=)
		rational& operator*=(const rational& obj){
			// FIGURE OUT THE MATH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			return *this;
		}

		// Operator for compound division (/=)
		rational& operator/=(const rational& obj){
			// FIGURE OUT THE MATH!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			return *this;
		}

		// Function for rounding the rational number towards zero (discard fractional part)
		int_type truncate(){
			return (int_type)( (n_/d_) - ((long long)n_%(long long)d_)/d_ );
		}

		// Function to check if rational number is an integer
		bool is_integer(){
			return ( d_==(int_type)1 ); 
		}

		// Operator to check if a rational number is zero (!)
		bool operator!(){
			return (n_==(int_type)0);
		}

		// Operator to check equality of rational numbers (==)
		bool operator==(rational& obj){
			return ( (n_/d_) == (obj.numerator()/obj.denominator()) );
		}

		// Operator to check inequality of rational numbers (!=)
		bool operator!=(rational& obj){
			return ( (n_/d_) != (obj.numerator()/obj.denominator()) );
		}

		// Operator to check less than of rational numbers (<)
		bool operator<(rational& obj){
			return ( (n_/d_) < (obj.numerator()/obj.denominator()) );
		}

		// Operator to check greater than of rational numbers (>)
		bool operator>(rational& obj){
			return ( (n_/d_) > (obj.numerator()/obj.denominator()) );
		}

		// Operator to check less than or equals to of rational numbers (<=)
		bool operator<=(rational& obj){
			return ( (n_/d_) <= (obj.numerator()/obj.denominator()) );
		}

		// Operator to check greater than or equals to of rational numbers (>=)
		bool operator>=(rational& obj){
			return ( (n_/d_) >= (obj.numerator()/obj.denominator()) );
		}

		// Operator to perform prefix and postfix increment (++)
		//rational& operator++(){
			//n_ = n_ + d_;
			//return
		//}
	
	private:
		int_type n_; // Numerator
		int_type d_; // Denominator
};





}
#endif
