#include <cassert>
#include <vector>
#include <iostream>
#include "../arrays/3010_minimum_cost.cpp"
using namespace std;

// forward declaration
int minimumCost(vector<int>& nums);


void test_basic_case()
{
	Solution sol;
	vector<int> nums = {1,2,3,12};
	auto res =  sol.minimumCost(nums);
	assert(res == 6);
}

void test_advance_case()
{
	Solution sol;
        vector<int> nums = {10,3,1,1};
        auto res =  sol.minimumCost(nums);
        assert(res == 12);	
}

int main() {
    test_basic_case();
    test_advance_case();

    cout << "All Minimum cost tests passed" << endl;
    return 0;
}
