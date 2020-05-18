class linear_congruential_generator(){
	public:
		typedef unsigned long long int int_type;
		
		linear_congruential_generator(int_type a, int_type c, int_type m, int_type s = seed_){
			a_ = a;
			c_ = c;
			m_ = m;
			s_ = s;

		}

		static int_type default_seed(int_type seed){
			seed_ = seed;
			return seed_;
		}
	private:
		int_type a_;
		int_type c_;
		int_type m_;
		int_type s_;
		static int_type seed_;
}
