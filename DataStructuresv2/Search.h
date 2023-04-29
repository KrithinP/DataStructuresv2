#pragma once
	int binarySearch(int arr[],int n,  int key) 
	{
		

		int start = 0;
		int end = n - 1;


		while (start <= end)
		{
			int mid = (start + end) / 2;

			if (arr[mid] == key)
			{
				return mid;
			}
			else if (arr[mid] > key)
			{
				end = mid - 1;
			}
			else {

				start = mid + 1;
			}
		}

		return -1;
	}




	int linearSearch(int arr[], int n, int key)
	{
		for (int i = 0; i < n; i++)
		{
			if (key == arr[i ])
			{
				return i;
			}
		}
		return -1;
	}
