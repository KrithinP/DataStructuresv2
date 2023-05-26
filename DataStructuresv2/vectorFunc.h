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
