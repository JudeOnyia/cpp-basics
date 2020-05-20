#include <iostream>
#include "ra/random.hpp"

namespace ra::random {
		typedef linear_congruential_generator::int_type int_type;

		// Function to restarts the sequence generation process with a new seed value
		void linear_congruential_generator::seed(int_type s){
			if( (c_ % m_)==(int_type)0 && (s % m_)==(int_type)0 ) x_ = (int_type)1;
			else x_ = s;
			n_ = (unsigned long long)0;
		}

		// Operator to advance the generator to the next position in the sequence
		// with consideration to the number of positions to be discarded
		int_type linear_congruential_generator::operator()(){
			++n_;
			do{
				x_ = (a_ * x_ + c_) % m_;
				--n_;
			} while(n_);
			return x_;
		}

		
}
