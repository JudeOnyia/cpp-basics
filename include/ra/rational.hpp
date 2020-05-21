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
	
	private:
		int_type n_; // Numerator
		int_type d_; // Denominator
};





}
#endif
