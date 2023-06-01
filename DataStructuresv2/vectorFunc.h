#pragma once
int getIthBit(int n, int i) {
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int& n, int i) {

	int mask = (1 << i);
	n = (n | mask);
}

void clearIthBit(int &n, int i)
{
	int mask = ~(1 << i);
	n = n & mask;
}

void updateIthBit(int& n, int i, int v) 
{
	clearIthBit(n, i);
	int mask = (v << i);
	n = n | mask; 
}

void clearLastIBits(int& n, int i) 
{
	int mask = (-1 << i);
	n = n & mask;
}

void clearBitsInRange(int& n, int i, int j)
{
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;
}




void replaceBitsinRange(int &N, int M, int i, int j)
{
	int mask  = (M << i);

	clearBitsInRange(N, i, j);
	N = N | mask;
}

bool isPowerOfTwo(int& n)
{
	if ((n & (n - 1)) == 0)
		return true;
	else false;
}

// exponentiation fo the no.
int fastExpo(int a, int n) 
{
	int ans = 1;

	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit) {
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;

	}
	return ans;
}


// find all occurences of a number and return all the indexes of the number in the array
vector<int> findAllOccurences(int k, vector<int> v)
{
	vector<int> arr ;
	for (int i = 0, j = 0; i < v.size(); i++)
	{
		if (v[i] == k)
		{
			arr.push_back( i);
			j++;
		}
	}
	return arr;
}
/*We are given an array containg n numbers.
All the numbers are present twice except for one number which is only present once. 
Find the unique number without taking any extra spaces and in linear time.
Sample Input

{ 1, 2, 3, 1, 4, 2, 3 }
Sample Output

4
Explanation

4 is present only once
*/

int xoring(vector<int> v)
{
	int res = v[0];
	for (int i = 1; i < v.size(); i++)
		res = res ^ v[i];

	return res;
}
