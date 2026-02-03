#include <cassert>
#include <iostream>

#include "../arrays/trionic_array.cpp"

void test_valid_trionic() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 4, 2, 6, 8};
    assert(sol.isTrionic(nums) == true);
}

void test_minimum_valid_length() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 4};
    assert(sol.isTrionic(nums) == true);
}

void test_all_increasing() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    assert(sol.isTrionic(nums) == false);
}

void test_all_decreasing() {
    Solution sol;
    vector<int> nums = {5, 4, 3, 2, 1};
    assert(sol.isTrionic(nums) == false);
}

void test_missing_final_increase() {
    Solution sol;
    vector<int> nums = {3, 7, 1};
    assert(sol.isTrionic(nums) == false);
}

void test_plateau_not_allowed() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 1, 3};
    assert(sol.isTrionic(nums) == false);
}

void test_multiple_turns_invalid() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 4, 3};
    assert(sol.isTrionic(nums) == false);
}

int main() {
    test_valid_trionic();
    test_minimum_valid_length();
    test_all_increasing();
    test_all_decreasing();
    test_missing_final_increase();
    test_plateau_not_allowed();
    test_multiple_turns_invalid();

    cout << "All Trionic Array tests passed" << endl;
    return 0;
}