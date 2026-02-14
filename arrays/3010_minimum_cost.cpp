//Problem Statement:
//You are given an array of integers nums of length n.
//The cost of an array is the value of its first element. For example, the cost of [1,2,3] is 1 while the cost of [3,4,1] is 3.
//You need to divide nums into 3 disjoint contiguous subarrays.
//Return the minimum possible sum of the cost of these subarrays.


//So what I understood from this is, we need to find the minimum three numbers from this vector and add it, this will idealy be our minimum cost.
#include <vector>
#include <climits>

using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& nums) {

        int min1 = INT_MAX;
        int min2 = min1;
        int min3 = min1;
        if(nums.size() == 3)
        {
            return nums[0] + nums[1]+ nums[2];
        }

        for (int i : nums)
        {
	        if (i < min1)
	        {
		        min3 = min2;
                min2 = min1;
                min1 = i;
	        }
	        else if (i >= min1 && i < min2)
	        {
                min3 = min2;
		        min2 = i;
	        }
            else if (i >= min2 && i <= min3)
            {
	            min3 = i;
            }
        }
        if(nums[0] == min1 || nums[0] == min2)
        {
            return min1+min2+min3;
        }

        return nums[0] + min1+min2; 
        
    }
};
