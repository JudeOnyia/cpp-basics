#include "ra/random.hpp"
#include <iostream>
#include <random>

int main(){
	
	typedef ra::random::linear_congruential_generator::int_type int_type;
	using std::cout;
	using std::endl;

	// Test class against linear congruential engine in standard library
	// Test constructor with no seed input
	// Test the operator() and the operator<<
	ra::random::linear_congruential_generator obj_mine(14,5,29);
	std::linear_congruential_engine<std::uint_fast32_t,14,5,29> obj_theirs;
	obj_mine();
	obj_theirs();
	cout << "lc generator object: " << obj_mine << endl;
	cout << "lc engine current state: " << obj_theirs << endl;

	// Compare their minimum and maximum
	cout << "lc generator min value: " << obj_mine.min() << endl;
	cout << "lc engine min value: " << obj_theirs.min() << endl;
	cout << "lc generator max value: " << obj_mine.max() << endl;
	cout << "lc engine max value: " << obj_theirs.max() << endl;

	// Test constructor with seed input
	// Test seed() member function
	// Test operator== and operator!=
	ra::random::linear_congruential_generator obj_mine_A(97,41,300,77);
	cout << "lc generator object (seed must be 77): " << obj_mine_A << endl;
	obj_mine_A.seed(259);
	cout << "lc generator object (seed change to 259): " << obj_mine_A << endl;
	obj_mine_A.seed(77);
	ra::random::linear_congruential_generator obj_mine_B(97,41,300,77);
	ra::random::linear_congruential_generator obj_mine_C(20,58,300,77);
	cout << "lc generator equality check (Must be true): " << (obj_mine_A==obj_mine_B) << endl;
	cout << "lc generator equality check (Must be false): " << (obj_mine_A==obj_mine_C) << endl;
	cout << "lc generator inequality check (Must be false): " << (obj_mine_A!=obj_mine_B) << endl;
	cout << "lc generator inequality check (Must be true): " << (obj_mine_A!=obj_mine_C) << endl;

	// Test the discard member function
	for(int i=0; i<90; ++i){
		obj_mine_A();
	}
	obj_mine_B.discard(90);
	cout << "lc generator discard function check (Must be true): " << (obj_mine_A()==obj_mine_B()) << endl;

	// Test condition when increment and seed are both zero
	ra::random::linear_congruential_generator obj_mine_D(20,0,300,0);
	cout << "lc generator seed (Must be 1): " << obj_mine_D << endl;
	
	return 0;



}
