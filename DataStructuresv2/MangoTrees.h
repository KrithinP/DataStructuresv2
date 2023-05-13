#pragma once
// ref
//i,j is point of intersection
//r = no. of row
// c = no. of column

int sumF(int arr[][6], int x, int y, char quadrantNum, int r, int c)
{
	int sum = 0;
	switch (quadrantNum)
	{
	case '1':
		for (int i = x + 1; i < c; i++)
		{
			for (int j = 0; j <= y; j++)
			{
				if (arr[j][i] == '#')
				{
					sum++;
				}
			}
		}
		return sum;
	case '2':
		for (int i = 0; i <= x; i++)
		{
			for (int j = 0; j <= y; j++)
			{
				if (arr[j][i] == '#')
				{
					sum++;
				}
			}
		}
		return sum;

	case '3':
		for (int i = 0; i <= x; i++)
		{
			for (int j = y + 1; j < r; j++)
			{
				if (arr[j][i] == '#')
				{
					sum++;
				}
			}
		}
		return sum;

	case '4':
		for (int i = x + 1; i < c; i++)
		{
			for (int j = y + 1; j < r; j++)
			{
				if (arr[j][i] == '#')
				{
					sum++;
				}
			}

		}
		return sum;

	default: 
		return 0;
	}
}

int countTrees(int arr[][6], int r, int c)
{
	int tt = 0;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if (arr[i][j] == '#')
			{
				tt++;
			}
		}

	}
	return tt;

}
/*pair<int, int> */ void quadrants(int arr[][6], int r, int c)
{
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
	int totalTrees = countTrees(arr,r,c);

	double averageTrees = totalTrees / 4.0;
	// (x,y) is the   point of intersection with the lowest error
	int x = 0, y = 0;
	int lowestError = 0;

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			x = i;
			y = j;

			if (x != 0 && y != 0 && x != c && y != r)
			{
				q1 = sumF(arr, i, j, '1',r,c);
				q2 = sumF(arr, i, j, '2',r,c);
				q3 = sumF(arr, i, j, '3',r,c);
				q4 = sumF(arr, i, j, '4',r,c);
				cout << " | q1 :" <<q1 << " | q2 :" << q2 <<" |  q3 :" << q3 <<" | q4 :" << q4<< endl;
			}



			/*
			if ((q1 == q2) == (q3 == q4))
			{
				return { i,j };
				cout << "reached" + i + j << endl;
			}*/
		}
	}
}

