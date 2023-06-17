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

// merge sorttt


void merge(vector<int>& array, int s, int e) {
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;
	vector<int> temp;

	while (i <= m and j <= e) {
		if (array[i] < array[j]) {
			temp.push_back(array[i]);
			i++;
		}
		else {
			temp.push_back(array[j]);
			j++;
		}
	}
	while (j <= e)
		temp.push_back(array[j++]);

	while (i <= m) 
		temp.push_back(array[i++]);

	int k = 0;
	for (int idx = s; idx <= e; idx++) 
		array[idx] = temp[k++];
	
	return;
}

void mergesort(vector<int>& arr, int s, int e)
{

	if (s >= e) 
		return;
	

	int mid = (s + e) / 2;
	mergesort(arr, s, mid);
	mergesort(arr, mid + 1, e);
	return merge(arr, s, e);
}

// quikly soryt

int partition(vector<int>& a, int s, int e)
{

	int pivot = a[e];
	int i = s - 1;

	for (int j = s; j < e; j++) 
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[e]);
	return i + 1;

}

void quicksort(vector<int>& a, int s, int e)
{

	if (s >= e) 
		return;

	int p = partition(a, s, e);
	quicksort(a, s, p - 1);
	quicksort(a, p + 1, e);
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
