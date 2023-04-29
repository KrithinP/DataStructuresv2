using namespace std;

#include <iostream>
#include <vector>
#include "Search.h"
#include "Sort.h"

int *arr;

int arrIn()
{
    int n = 0;
    cout << "Enter the number of elements of the array";
    cin >> n;
    arr = new int[n];
    cout << "Enter the elements of the array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return n;
}

void linear()
{

    int key;

    int n = arrIn();
    cout << "Enter the element you are searching for";
    cin >> key;
    int x = linearSearch(arr, n, key);
    if (x != -1)
        cout << " The element lies at" << x;
    else
        cout << "The element does not exist";
    
}

void binary()
{
    
    int key;
 
    int n = arrIn();
    cout << "Enter the element you are searching for";
    cin >> key;
    int x = binarySearch(arr, n, key);

    if (x != -1)
        cout << " The element lies at" << x;
    else
        cout << "The element does not exist";
}

vector<int> sortingWithComparator(vector<int> a, bool flag) {

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

}

int main()
{
  //  linear();
    vector<int> myvector1{ 22,28,22, 40,30,29 };
    cout << myvector1.size();
    vector<int> myvectors = sortingWithComparator(myvector1, true);

    for (int i = 0; i < myvectors.capacity(); ++i) {
       
            cout << myvectors[i];
            cout << " ";
        
    }
  //  binary();
}

/*
Reference 
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its sizeand destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.*/
