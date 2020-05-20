#ifndef random_hpp
#define random_hpp
#include <iostream>
namespace ra::random{
	class linear_congruential_generator {
	public:
		typedef unsigned long long int int_type; // type member
		static int_type default_seed(){ return (int_type)1;} // Function to return default seed of one for all objects
		
		// Constructor that initializes the multiplier, increment and modulus. Seed is optional argument.
		linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = default_seed()){
			a_ = a;
			c_ = c;
			m_ = m;
			if( (c_ % m_)==(int_type)0 && (s % m_)==(int_type)0 ) x_ = (int_type)1;
			else x_ = s;
		}

		int_type multiplier(){ return a_;} // Function to return multiplier value
		int_type increment(){ return c_;} // Function to return increment value
		int_type modulus(){ return m_;} // Function to return modulus value
		int_type position(){ return x_;} // Function to return the current position in the sequence

		// Function to restarts the sequence generation process with a new seed value
		void seed(int_type s);

		// Operator to advance the generator to the next position in the sequence
		// with consideration to the number of positions to be discarded
		int_type operator()();

		// Function to discard the next n numbers in the generated sequence
		void discard(unsigned long long n){ n_ = n; }

		int_type min(){ return c_==(int_type)0? (int_type)1 : (int_type)0; } // Function to get the smallest value 
		int_type max(){ return m_-(int_type)1; } // Funtion to get the largest value in sequence
		
		// Operator to test two linear_congruential_generator objects for equality
		bool operator==(const linear_congruential_generator& obj){
			return (obj.a_==this->a_ && obj.c_==this->c_ && obj.m_==this->m_ && obj.x_==this->x_);
		}

		// Operator to test two linear_congruential_generator objects for inequality
		bool operator!=(const linear_congruential_generator& obj){
		        return !(obj.a_==this->a_ && obj.c_==this->c_ && obj.m_==this->m_ && obj.x_==this->x_);
		}


	private:
  		int_type a_; // multiplier
		int_type c_; // increment
		int_type m_; // modulus
		int_type x_; // current position in the generated sequence
		unsigned long long n_ = (unsigned long long)0; // number of positions to discard in the sequence
	};

	// Stream inserter
	std::ostream& operator<<(std::ostream& outStream, linear_congruential_generator& objA);
}
#endif
