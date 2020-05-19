#include <iostream>
#include "ra/random.hpp"

namespace ra::random {

		// Constructor that initializes the multiplier, increment and modulus. Seed is optional argument.
		linear_congruential_generator::linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = default_seed()){
			a_ = a;
			c_ = c;
			m_ = m;
			if( (c_ % m_)==(int_type)0 && (s % m_)==(int_type)0 ) x_ = (int_type)1;
			else x_ = s;
		}

		// Function to restarts the sequence generation process with a new seed value
		linear_congruential_generator::void seed(int_type s){
			if( (c_ % m_)==(int_type)0 && (s % m_)==(int_type)0 ) x_ = (int_type)1;
			else x_ = s;
			n_ = (unsigned long long)0;
		}

		// Operator to advance the generator to the next position in the sequence
		// with consideration to the number of positions to be discarded
		linear_congruential_generator::int_type operator()(){
			++n_;
			do{
				x_ = (a_ * x_ + c_) % m_;
				--n_;
			} while(n_);
			return x_;
		}

		// Stream inserter
		std::ostream& operator<<(std::ostream& outStream, const linear_congruential_generator& objA){
			outStream << objA.multiplier() << " " << objA.increment() << " " << objA.modulus() << " " << objA.position();
			return outStream;
		}
}
