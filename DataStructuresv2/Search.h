

#pragma once

	int arr[] = { 1,45, 67, 90, 999, 19282,283847 };

	int binarySearch(  int key) 
	{
		int n = sizeof(arr) / sizeof(int);

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




	int linearSSearch(int arr[], int n, int key)
	{
		for (int i = 1; i <= n; i++)
		{
			if (key == arr[i - 1])
			{
				return i;
			}
		}
		return 0;
	}
