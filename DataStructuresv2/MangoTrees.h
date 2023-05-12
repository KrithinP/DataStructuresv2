#pragma once
//n = number of 
pair<int, int> quadrants(int arr[][6], int r, int c)
{
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			q1 = sum(arr, i, j, '1',r,c);
			q2 = sum(arr, i, j, '2',r,c);
			q3 = sum(arr, i, j, '3',r,c);
			q4 = sum(arr, i, j, '4',r,c);
		}
	}
}

int sum(int arr[][6], int x, int y, char quadrantNum,int r, int c)
{
	int sum = 0;
	switch (quadrantNum)
	{
		case 1:
			for (int i = c; )
		case 2:
		case 3:
		case 4:
	}
}