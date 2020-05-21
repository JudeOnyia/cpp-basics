#ifndef rational_hpp
#define rational_hpp
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
			return ( ((long long)n_%(long long)d_)==(long long)0 )? true : false; 
		}
	
	private:
		int_type n_; // Numerator
		int_type d_; // Denominator
};





}
#endif
