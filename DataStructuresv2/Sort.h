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

