using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

#include "Vector.h"
#include "Search.h"
#include "Sort.h"

#include "GraphdistanceProg.h"
#include "StringCompressionProg2.h"
#include "Sorted2dArraySearch.h"
#include "MangoTrees.h"

#include "Topper.h"
#include "OddEven.h"
#include "VectorFunc.h"

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

    //VECTORS Func

    //Vector v(5);
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
    //v.push_back(15);
    //v.push_back(6);
    //v.pop_back();
    //cout << v.front() << endl;
    //cout << v.back() << endl;
    //cout << v.at(2) << endl;
    //cout << v.size() << endl; //5
    //cout << v.capacity() << endl; //8

    // Find Topper with marks and return rank
    
    //int lv = 0;
    //vector<pair<string, vector<int> > >  student_marks = 
    //{
    //        {"Devansh", {91,90,96}},
    //        {"Yoyo",{95,93,92}},
    //        {"Chattagoonga",{17,19,32}},
    //        {"Rithvik",{97,98,99}},
    //        {"Sujji", {101,105,109}}
    //};
    //sort(student_marks.begin(), student_marks.end(), compare);
    //for (auto it : student_marks) {
    //    cout << " Air "<<lv << " " << it.first << " " << calcTotalMarks(it.second) << endl;
    //    lv++;
    //}

    // Bitwise operations

    //Find if number is odd/even
    //cout<<isEven(6);

    /* Replace Bits in N by M
    You are given two 32-bit numbers, N and M, and two bit positions i and j.
    Write a method to set all bits between i and j in N equal to M.
    M (becomes a substring of N locationed at and starting at j)

    Example:
    N = 10000000000;
    M = 10101;
    i = 2, j = 6
    Output : 1001010100 */
    //int N = 15;
    //int M = 2;
    //int i = 1, j = 3;

    //replaceBitsinRange(N, M, i, j);
    //cout << N;




    return 0;
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
