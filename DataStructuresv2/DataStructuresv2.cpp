using namespace std;

#include <iostream>
#include <vector>
#include "Search.h"
#include "Sort.h"

#include "GraphdistanceProg.h"
#include "StringCompressionProg2.h"
#include "Sorted2dArraySearch.h"
#include "MangoTrees.h"

int *arr;
class Vector
{
    int* a;
    int cs;
    int ms;

public:
    Vector()
    {
        
        cs = 0;
        ms = 1;
        a = new int[ms];
    }

    void push_back(int d)
    {
        if (cs = ms)
        {
            int* oldarr = a;
            ms = 2 * ms;
            a = new int[ms];

            for (int i = 0; i < cs; i++)
            {
                a[i] = oldarr[i];
            }
            delete [] oldarr;
        }
        a[cs] = d;
        cs++;
    }

    void pop_back()
    {
        cs--;
    }

    bool isEmpty()
    {
        return cs == 0;
    }
};

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

int main()
{
    //arrays(int)

    /*arrays
  //  linear();
   
    //vector<int> myvector1{ 22,28,22, 40,30,29 };
    //cout << myvector1.size();
    //vector<int> myvectors = sortingWithComparator(myvector1, true);
    //for (int i = 0; i < myvectors.capacity(); ++i) {
    //   
    //        cout << myvectors[i];
    //        cout << " ";
    //    
    //}
    
  //  binary();
  */

    // character array
    
    //character arrays
  //  shortestRoute();
    //string s1 = "aaabbccddee";
    //cout << compressString(s1) << endl;
    //string s2 = "abcd";
    //cout << compressString(s2) << endl;
    
    //2d arrays
    
    //2darraysearch(staircase Search)
    //int a[][4] =    { 
    //                  {10, 20, 30, 40},
    //                  {15, 25, 35, 45},
    //                  {27, 29, 37, 48},
    //                  {32, 33, 39, 50} 
    //                };
    //int n = 4, m = 4;
    //pair<int, int> coords = staircaseSearch(a, n, m, 39);
    //cout << coords.first << " " << coords.second << endl;


    //// mango trees
    //int ar[][6] =
    //{
    //    {'.','#', '#','.','.','.'},
    //    {'#','.', '.','#','#','.'},
    //    {'.','#', '.','.','.','.'},
    //    {'.','#', '#','.','.','.'},
    //    {'#','.', '.','#','#','.'},
    //    {'.','#', '.','.','.','.'},
    //};
    // quadrants(ar, 6, 6);

    //VECTORS

    Vector v;

}
// reference
/*
Reference 

size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its sizeand destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
https://www.w3schools.com/c/c_strings_functions.php - string functions

     vector<int> arr = { 1,4,6,8,3,1,3,4 };
     arr.pop_back();
     arr.push_back(15);
     cout<<arr.size()<<endl;
     cout << arr.capacity() << endl;
*/
