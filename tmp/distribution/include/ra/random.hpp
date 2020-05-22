#ifndef random_hpp
#define random_hpp
#include <iostream>
namespace ra::random{
	class linear_congruential_generator {
	public:
		typedef unsigned long long int int_type; // type member
		static int_type default_seed(){ return (int_type)1;} // Function to return default seed of one for all objects
		
		// Constructor that initializes the multiplier, increment and modulus. Seed is optional argument.
		linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = default_seed());

		const int_type multiplier() const { return a_;} // Function to return multiplier value
		const int_type increment() const { return c_;} // Function to return increment value
		const int_type modulus() const { return m_;} // Function to return modulus value
		const int_type position() const { return x_;} // Function to return the current position in the sequence

		// Function to restarts the sequence generation process with a new seed value
		void seed(int_type s);

		// Operator to advance the generator to the next position in the sequence
		// with consideration to the number of positions to be discarded
		int_type operator()();

		// Function to discard the next n numbers in the generated sequence
		void discard(unsigned long long n){ n_ = n; }

		const int_type min() const { return c_==(int_type)0? (int_type)1 : (int_type)0; } // Function to get the smallest value 
		const int_type max() const { return m_-(int_type)1; } // Funtion to get the largest value in sequence
		
		// Operator to test two linear_congruential_generator objects for equality
		bool operator==(const linear_congruential_generator& obj){
			return (a_==obj.multiplier() && c_==obj.increment()  && m_==obj.modulus()  && x_==obj.position());
		}

		// Operator to test two linear_congruential_generator objects for inequality
		bool operator!=(const linear_congruential_generator& obj){
		        return !(a_==obj.multiplier() && c_==obj.increment()  && m_==obj.modulus()  && x_==obj.position());
		}


	private:
  		int_type a_; // multiplier
		int_type c_; // increment
		int_type m_; // modulus
		int_type x_; // current position in the generated sequence
		unsigned long long n_ = (unsigned long long)0; // number of positions to discard in the sequence
	};

	// Stream inserter
	std::ostream& operator<<(std::ostream& outStream, const linear_congruential_generator& objA);
}
#endif
