
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
				// ZERO CONDITION!!!!!!!!!!!
			}
			else { d_ = d; }
		}

		int_type numerator(){ return n_; } // Function to return the numerator value
		int_type denominator(){ return d_; } // Function to return the denominator value
	
	private:
		int_type n_; // Numerator
		int_type d_; // Denominator
};

