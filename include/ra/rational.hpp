#ifndef rational_hpp
#define rational_hpp
#include <algorithm>
namespace ra::math{
template<class T>
class rational {
	public:
		typedef T int_type;

		// Function to reduce the form of the rational number
		void reduce_form(){
			long long the_gcd = std::__gcd((long long)n_,(long long)d_);
			n_ = (int_type)( (long long)n_ / the_gcd ); // Also make numerator a whole number;
			d_ = (int_type)( (long long)d_ / the_gcd ); // Also make denominator a whole number
		}

		// Function to Prevent denominator from having zero or negative value
		void denominator_handle(){
			if(d_ == (int_type)0){
				n_ = std::numeric_limits<int_type>::max();
				d_ = (int_type)1;
			}
			if(d_ < (int_type)0) { d_ = d_ * (int_type)(-1); n_ = n_ * (int_type)(-1); }
		}
		
		// Default constructor sets rational number to 0
		rational(){
			n_ = (int_type)0;
			d_ = (int_type)1;
		}

		// Constructor to specify numerator and denominator values
		rational(int_type n, int_type d = (int_type)1){
			n_ = n;
			d_ = d;
			reduce_form();
			denominator_handle();
		}

		int_type numerator() const { return n_; } // Function to return the numerator value
		int_type denominator() const { return d_; } // Function to return the denominator value

		// Operator for compound addition (+=)
		rational& operator+=(const rational& obj){
			n_ = (n_ * obj.denominator()) + (obj.numerator() * d_);
			d_ = d_ * obj.denominator();
			reduce_form();
			return *this;
		}

		// Operator for compound subtraction (-=)
		rational& operator-=(const rational& obj){
			n_ = (n_ * obj.denominator()) - (obj.numerator() * d_);
			d_ = d_ * obj.denominator();
			reduce_form();
			return *this;
		}

		// Operator for compound multiplication (*=)
		rational& operator*=(const rational& obj){
			n_ = n_ * obj.numerator();
			d_ = d_ * obj.denominator();
			reduce_form();
			return *this;
		}

		// Operator for compound division (/=)
		rational& operator/=(const rational& obj){
			n_ = n_ * obj.denominator();
			d_ = d_ * obj.numerator();
			reduce_form();
			denominator_handle();
			return *this;
		}

		// Function for rounding the rational number towards zero (discard fractional part)
		int_type truncate(){
			return (int_type)((long long)(n_ / d_));
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
		bool operator==(const rational& obj){
			return ( (n_/d_) == (obj.numerator()/obj.denominator()) );
		}

		// Operator to check inequality of rational numbers (!=)
		bool operator!=(const rational& obj){
			return ( (n_/d_) != (obj.numerator()/obj.denominator()) );
		}

		// Operator to check less than of rational numbers (<)
		bool operator<(const rational& obj){
			return ( (n_/d_) < (obj.numerator()/obj.denominator()) );
		}

		// Operator to check greater than of rational numbers (>)
		bool operator>(const rational& obj){
			return ( (n_/d_) > (obj.numerator()/obj.denominator()) );
		}

		// Operator to check less than or equals to of rational numbers (<=)
		bool operator<=(const rational& obj){
			return ( (n_/d_) <= (obj.numerator()/obj.denominator()) );
		}

		// Operator to check greater than or equals to of rational numbers (>=)
		bool operator>=(const rational& obj){
			return ( (n_/d_) >= (obj.numerator()/obj.denominator()) );
		}

		// Operator to perform prefix increment (++obj)
		rational& operator++(){
			n_ = n_ + d_;
			return *this;
		}

		// Operator to perform prefix and decrement (--obj)
		rational& operator--(){
			n_ = n_ - d_;
			return *this;
		}

		// Operator to perform postfix increment (obj++)
		rational operator++(int){
			rational<int_type> obj_copy(n_,d_);
			n_ = n_ + d_;
			return obj_copy;
		}

		// Operator to perform postfix decrement (obj--)
		rational operator--(int){
			rational<int_type> obj_copy(n_,d_);
			n_ = n_ - d_;
			return obj_copy;
		}
	
	private:
		int_type n_; // Numerator
		int_type d_; // Denominator
};

// Operator to perform Unary plus (+)
template<class int_type>
rational<int_type> operator+(const rational<int_type>& obj){
	return rational<int_type>(+(obj.numerator()),obj.denominator());
}

// Operator to perform Unary minus (-)
template<class int_type>
rational<int_type> operator-(const rational<int_type>& obj){
	return rational<int_type>(-(obj.numerator()),obj.denominator());
}



}
#endif
