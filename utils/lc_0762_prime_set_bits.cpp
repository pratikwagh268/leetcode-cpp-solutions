class Solution {
public:

    bool isPrime(int n)
    {
        if (n <= 1)
	return false;

if (n == 2)
	return true;

if (n % 2 == 0)
	return false;

for (int i = 3; i * i <= n; i += 2)
{
	if (n % i == 0)
		return false;
}
return true;
}

    int countPrimeSetBits(int left, int right) {
        int primeBits = 0;
        for (int i = left; i <= right; i++)
        {
	        int numBits = 0;
	        for (int j = 0; j< 32; j++)
	        {
		        if (((i >> j) & 1) == 1)
		        {
			        numBits++;
		        }   
	        }
	        primeBits += isPrime(numBits) ? 1 : 0;
        }
        return primeBits;
    }

};
