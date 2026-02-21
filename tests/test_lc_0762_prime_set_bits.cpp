#include <cassert>
#include <iostream>
#include "../utils/lc_0762_prime_set_bits.cpp"

//forward Declaration
using namespace std;
int countPrimeSetBits(int left, int right);

void test_basic_case()
{
	int left = 6, right = 10;
	Solution sol;
	auto res =  sol.countPrimeSetBits(left, right);
	assert(res == 4);
}

void test_advance_case()
{
	Solution sol;
	int left = 10, right = 15;
        auto res =  sol.countPrimeSetBits(left, right);;
        assert(res == 5);	
}

int main() {
    test_basic_case();
    test_advance_case();

    cout << "All Minimum count Prime Set Bits tests passed" << endl;
    return 0;
}
