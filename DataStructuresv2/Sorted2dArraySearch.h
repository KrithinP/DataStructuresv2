#pragma once

pair<int, int> staircaseSearch(int arr[][4], int n, int m, int key)
{
    if (key < arr[0][0] or key>arr[n - 1][m - 1]) 
    {
        return { -1,-1 };
    }

    //staircase search
    int i = 0;
    int j = m - 1;

    while (i <= n - 1 and j >= 0) 
    {

        if (arr[i][j] == key)
        {
            return { i,j };
        }
        else if (arr[i][j] > key) 
        {
            j--;
        }
        else {
            i++;
        }
    }

    return { -1,-1 };
}