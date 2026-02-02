#include <cassert>
#include <vector>
#include <iostream>
#include "../arrays/two_sum.cpp"
using namespace std;

// Forward Declaration

vector<int> twoSum(vector<int>& nums, int target);


void test_basic_case()
{
	Solution sol;
	vector<int> nums = {2,7,11,15};
	auto res =  sol.twoSum(nums,9);
	assert((res == vector<int>{0,1}));

}



int main()
{

	test_basic_case();

	cout<<"ALL Two Sum Tests Passed"<<endl;
	return 0;
}
