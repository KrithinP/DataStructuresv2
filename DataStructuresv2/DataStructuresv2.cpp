using namespace std;

#include <iostream>
#include "Search.h"
#include "Sort.h"

int arr[];

int main()
{
    linear();
     binary();
}

void linear()
{

    int key;

    int n = arrIn();
    cout << "Enter the element you are searching for";
    cin >> key;
    int x = linearSearch(arr, n, key);
    if (x != 0)
        cout << " The element lies at" + x;
    else
        cout << "The element does not exist";
    
}

void binary()
{
    
    int key;
 
    int n = arrIn();
    cout << "Enter the element you are searching for";
    cin >> key;

    cout << binarySearch(arr, n, key);
}



int arrIn()
{
    int n = 0;
    cout << "Enter the number of elements of the array";
    cin >> n ;
    cout << "Enter the elements of the array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return n;
}

