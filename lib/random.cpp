#include "random.hpp"

class linear_congruential_generator {
	public:
		typedef unsigned long long int int_type; // type member
		static int_type default_seed(){ return (int_type)1;} // Function to return default seed of one for all objects
		
		// Constructor that initializes the multiplier, increment and modulus. Seed is optional argument.
		linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = default_seed()){
			a_ = a;
			c_ = c;
			m_ = m;
			if( (c_ % m_)==0 && (s % m_)==0 ) x_ = 1;
			else x_ = s;
		}

		int_type multiplier(){ return a_;} // Function to return multiplier value
		int_type increment(){ return c_;} // Function to return increment value
		int_type modulus(){ return m_;} // Function to return modulus value

		// Function to restarts the sequence generation process with a new seed value
		void seed(int_type s){
			if( (c_ % m_)==0 && (s % m_)==0 ) x_ = 1;
			else x_ = s;
			n_ = 0;
		}

		// Function to advance the generator to the next position in the sequence
		// with consideration to the number of positions to be discarded
		int_type operator()(){
			++n_;
			do{
				x_ = (a_ * x_ + c_) % m_;
				--n_;
			} while(n_);
			return x_;
		}

		// Function to discard the next n numbers in the generated sequence
		void discard(unsigned long long n){
			n_ = n;
		}


	private:
  		int_type a_; // multiplier
		int_type c_; // increment
		int_type m_; // modulus
		int_type x_; // current position in the generated sequence
		unsigned long long n_ = 0; // number of positions to discard in the sequence
}
