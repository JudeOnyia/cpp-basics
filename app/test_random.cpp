#include "ra/random.hpp"
#include <random>

int main(){
	
	//typedef ra::random::linear_congruential_generator::int_type int_type;
	using std::cout;
	using std::endl;

	// Compare the next value of both classes
	ra::random::linear_congruential_generator obj_mine(14,5,29);
	std::linear_congruential_engine<std::uint_fast32_t,14,5,29> obj_theirs;
	cout << "mylcg's next value: " << obj_mine() << endl;
	cout << "minstd_rand's next value: " << obj_theirs() << endl;

	// Compare their minimum and maximum
	cout << "mylcg's min value: " << obj_mine.min() << endl;
	cout << "minstd_rand's min value: " << obj_theirs.min() << endl;
	cout << "mylcg's max value: " << obj_mine.max() << endl;
	cout << "minstd_rand's max value: " << obj_theirs.max() << endl;

	



}
