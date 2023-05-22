#pragma once
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n -1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int current = arr[i];
		int prev = i - 1;

		while (prev >= 0 && arr[prev] > current)
		{
			arr[prev + 1] = current;
			prev--;
		}
		arr[prev + 1] = current;
	}
}

void countingSort(int arr[], int n)
{
	int largest = -1;

	for (int i = 0; i < n; i++)
	{
		largest = max(largest, arr[i]);
	}


	vector<int> arrF(largest + 1, 0);

	for (int i = 0; i < n; i++)
	{
		int el = arr[i];
		arrF[el + 1]++;
	}

	for (int i = 0, j = 0; i < n; i++)
	{
		int freq = arrF[i];
		while (freq > 0)
		{
			freq--;
		}

	}
}

/*vector<int> sortingWithComparator(vector<int> a, bool flag) {

	int n = a.size();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (!flag)
			{
				if (a[j] > a[j + 1])
				{

					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}

			  else
					if (a[j] < a[j + 1])
					{

						int temp = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp;
					}

		}
	}
	return a;

}*/