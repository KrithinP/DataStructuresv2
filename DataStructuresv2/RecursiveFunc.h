string spell[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

double factorial(double n, double f)
{
	
	if (n > 0)
	{
		f *= n;
		n--;
		return factorial(n, f);
	}
	else return f;
}

int fibonacciSeries(int n)
{
	if (n == 0 || n == 1)
		return n;
	
	int f1 = fibonacciSeries(n -1), f2 = fibonacciSeries(n- 2 );
	return f1 + f2;
}

bool isSortedTwo(int arr[], int i, int n) 
{
	if (i == n - 1) 
		return true;
	
	if (arr[i] < arr[i + 1] and isSortedTwo(arr, i + 1, n))
	{
		return true;
	}

	return false;
}

void decrease(int n) {
	
	if (n == 0) 
		return;

	cout << n<< " ,";
	decrease(n - 1);
}

void increase(int n) 
{
	
	if (n == 0) 
		return;
	
	increase(n-1);
	cout << n << ", ";
}

int firstOcc(int arr[], int n, int key) 
{


	if (n == 0) 
		return -1;
	

	if (arr[0] == key) 
	{
		return 0;
	}
	int subIndex = firstOcc(arr + 1, n - 1, key);
	if (subIndex != -1) 
	{
		return subIndex + 1;
	}
	return -1;
}

int lastOcc(int arr[], int n, int key) 
{
	if (n == 0) 
		return -1;

	int subIndex = lastOcc(arr + 1, n - 1, key);
	if (subIndex == -1) 
	{
		if (arr[0] == key) 
			return 0;
		else 
			return -1;
	}
	else 
		return subIndex + 1;
	
}

int power(int a, int n) 
{

	if (n == 0)
		return 1;
	
	return a * power(a, n - 1);
}

int fastPower(int a, int n) 
{
	if (n == 0) 
		return 1;

	int subProb = fastPower(a, n / 2);
	int subProbSq = subProb * subProb;
	if (n & 1) 
	{
		return a * subProbSq;
	}
	return subProbSq;
}


void printSpell(int n)
{

	if (n == 0) 
		return;
	
	int last_digit = n % 10;
	printSpell(n / 10);
	cout << spell[last_digit] << " ";
}



