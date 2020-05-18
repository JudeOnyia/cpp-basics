class linear_congruential_generator {
	public:
		typedef unsigned long long int int_type;
		
		linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = default_seed()){
			a_ = a;
			c_ = c;
			m_ = m;
			s_ = s;
		}

		static int_type default_seed(){ return (int_type)1;}

		int_type multiplier(){ return a_;}
		int_type increment(){ return c_;}


	private:
  		int_type a_;
		int_type c_;
		int_type m_;
		int_type s_;
}
