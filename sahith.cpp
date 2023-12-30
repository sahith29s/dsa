// #include <iostream>
// using namespace std;

// int main()
// {
//     // if (2 < 10)
//     // {
//     //     cout << "sahith";
//     // }
//     // if("sahith"){
//     //     cout<<"sahith";
//     // }

//     int a;
//     cout << "Enter a number : ";
//     cin >> a;
//     if (a < 0)
//     {
//         cout << "A is negaveite" << endl;
//     }
//     else if (a > 0)
//     {
//         cout << "A is positive" << endl;
//     }
//     else
//     {
//         cout << "A is zero" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     // int i = 1;
//     // while (i <= n)
//     // {

//     //     int j = 1;
//     //     while (j <= n)
//     //     {
//     //         cout << i;
//     //         j++;
//     //     }
//     //     i++;
//     //     cout << endl;
//     // }
//     int i = 1;
//     while (i <= n){
//         i++;
//         int j = n;
//         while (j >= 1)
//         {
//             cout<<j;
//             j--;
//         }
//         cout<<endl;

//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int printNumber = 1;
//     while (i <= n)
//     {
//         i++;
//         int j = 1;
//         while (j <= n)
//         {
//             cout << printNumber;
//             printNumber++;
//             j++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = i;
//         // int printNumber = i;
//         while (j >= 1)
//         {
//             cout << j;

//             j--;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         char ch = 'A' + i - 1;
//         int j = 1;
//         while (j <= n)
//         {
//             cout << ch;
//             ch = ch + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int updateNumber = 0;
//     while (i <= n)
//     {
//         int j = 1;
//         // char ch = 'A' + i - 1;

//         while (j <= i)
//         {
//             cout << char('A' + i + j - 2);
//             j++;
//             updateNumber++;
//         }
//         i++;
//         cout<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char ch = ('A' + n - i);
//         while (j <= i)
//         {
//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             if ((n - j - i  )  > 0)
//             {
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int number = 0;
//         while (j <= n)
//         {
//             if ((i - j) > 0)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << (i + number);
//                 number++;
//             }
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int numberToBePrinted = 1;
//         int numbercheck = false;
//         while (j <= (2 * (n - 1) + 1))
//         {
//             if ((n - i - j + 1) > 0)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << numberToBePrinted;

//                 if (numbercheck)
//                 {
//                     numberToBePrinted--;
//                 }

//                 else if (numberToBePrinted < i)
//                 {
//                     numberToBePrinted++;
//                     if (numberToBePrinted == i)
//                     {
//                         numbercheck = true;
//                     }
//                 }
//             }

//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int numberToBePrinted = 1;
//         while ( ((2 * n) - 1) >= j)
//         {
//             if ((n - i - j) >= 0 || (n + i - j) <= 0)
//             {
//                 cout << " ";
//             }
//             else {
//                 cout << ((j >= n) ? numberToBePrinted-- : numberToBePrinted++);
//             }
//             j++;
//         }
//         i++;
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         // printing first numbers
//         int row1 = 1;
//         while (row1 <= n - i + 1)
//         {
//             cout << row1;
//             row1++;
//         }

//         // printing starts
//         int row2 = 1;
//         while (row2 <= (2 * (i - 1)))
//         {
//             cout << "*";
//             row2++;
//         }

//         // printing last numbers
//         int row3 = n - i + 1;
//         while (row3 >= 1)
//         {
//             cout << row3;
//             row3--;
//         }

//         cout << endl;

//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main()
// {
//     int a = 4;
//     int b = 6;
//     cout << (a & b) << endl;
//     cout << (a | b) << endl;
//     cout << ( ~a) << endl;
//     cout << (a ^ b) << endl;
//
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <cmath>

// int main()
// {
//     bool isPrime = true;

//     int n;
//     cin >> n;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             // cout << "it is not prime";
//             isPrime = !isPrime;
//             break;
//         }
//     }

//     cout << (isPrime ? "Yes" : "Not a prime");

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string>

// int main()
// {

// int x = -123, newNumber = 0;
// bool isNegative = false;
// if (x < 0)
// {
//     x = x * (-1);
//     isNegative = true;
// }

// int lengthOfInt = to_string(x).length();

// for (int i = 0; i < lengthOfInt; i++)
// {
//     newNumber = (newNumber * 10) + (x % 10);
//     x = x / 10;
// }
// cout << (isNegative ? (newNumber * (-1)) : newNumber);

// int x = -145;
// int ans = 0;
// while (x != 0) {
//     int digit = x % 10;
//     if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
//     {
//         return 0;
//     }
//     ans = (ans * 10) + digit;
//     x = x / 10;
// }
// cout << ans ;

// int x = 7;
// int com = 0;

// while (x != 0)
// {
//     if((x % 2) == 1 )
//     {
//         com++;
//     }

//     x = x / 2;
// }
// cout << com;

// #include <iostream>
// using namespace std;
//
// int main()
// {
//
//     int n = 11;
//     while (n > 1)
//     {
//         if ((n % 2) == 1)
//         {
//             cout <<  "yes" << endl;
//             break;
//         }
//     }
//     cout <<  "No " << endl;
//
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char name = 'd';
//     switch (name)
//     {
//     case 'a':
//         cout << "This is a" << endl;
//         break;
//     case 'd':
//         cout << "this is md vim" << endl;

//     default:
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b;
//     int oper;

//     cout << "Enter first  number" << endl;
//     cin >> a;

//     cout << "Enter second number" << endl;
//     cin >> b;

//     cout << endl;
//     cout << "Enter 1 to add " << endl;
//     cout << "Enter 2 to subtract" << endl;
//     cout << "Enter 3 to mul" << endl;
//     cout << "Enter 4 to div" << endl;
//     cout << endl;

//     cout << "Enter enter operator" << endl;
//     cin >> oper;

//     switch (2)
//     {
//     case 1:
//         cout << (a + b) << endl;
//         break;
//     case 2:
//         cout << (a - b)<< endl;
//         break;
//     case 3:
//         cout << (a * b)<< endl;
//         break;
//     case 4:
//         cout << (a / b)<< endl;
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int totalMoney = 1330;
//     int note100 = 0, note50 = 0, note20 = 0, note1 = 0;
//     while (totalMoney > 0)
//     {
//         if ((totalMoney >= 100))
//         {
//             note100 = totalMoney / 100;
//             totalMoney = totalMoney - ((totalMoney / 100) * 100);
//         }
//         else if ((totalMoney >= 50)) {
//             note50++;
//             totalMoney = totalMoney - 50;
//         }
//         else if ((totalMoney >= 20))
//         {
//             note20++;
//             totalMoney = totalMoney - 20;
//         }
//         else if ((totalMoney > 1))
//         {
//             note1 = totalMoney;
//             totalMoney = 0;
//         }
//     }

//     cout << note100 << endl;
//     cout << note50 << endl;
//     cout << note20 << endl;
//     cout << note1 << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int ncr(int n, int r)
// {
//     int nFac = 1, rFAc = 1, nMrFac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         nFac *= i;

//         if (i == r)
//         {
//             rFAc = nFac;
//             cout << "rfac" << rFAc << endl;
//         }

//         if (i == (n - r))
//         {
//             nMrFac = nFac;
//             cout << "nmr fac" << nMrFac << endl;
//         }
//     }

//     return (nFac / (rFAc * nMrFac));
// }

// int power(int a, int b)
// {
//     return 10;
//     const int mana = 10;
// }

// int main()
// {
//     cout << ncr(6, 3) << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #define Z 50
// using namespace std;

// vector<int> insertAtEnd(vector<int> arr, int e)
// {
//     arr.push_back(e);
//     return arr;
// }

// int main()
// {

//     vector<int> arr = {10, 20, 40};
//     // cout << arr[2] << endl;
//     insertAtEnd( arr, 50);
//     // arr.push_back(40);
//     cout<< arr[3] <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void minMax(int arr[] , int size )
// {
//     int min = arr[0], max = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout<< "Min is" << min <<endl;
//     cout<< "Max is" << max <<endl;
// }
// int main()
// {

//     int arr[] = {10, 20, 2, (5 * 5 * 5), 40, 32, 40, 50};
//     int size = sizeof(arr)/ sizeof(int);
//     minMax(arr , size);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool search(int arr[] , int size , int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }

//     return false;
// }

// int main(){

//     int arr[] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     cout << (search(arr , 10 , 11) ? "Yes" : "No") << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverseArr(int arr[], int size)
// {
//     int arr2[] = {};
//     for (int i = 0; i < size; i++)
//     {
//         arr2[i] = arr[(size - 1) - i];
//     }
//     cout<< arr2[2] <<endl;
// }

// int main()
// {
//     int arr[] = {2, 3, 5, 4, 10};
//     reverseArr(arr , 5);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swapAl(int arr[], int size)
// {
//     int start = 0, end = 1;
//     while (end <= (size - 1)) {
//         int before = arr[start] , after = arr[end];
//         arr[start] = after;
//         arr[end] = before;
//         start += 2;
//         end += 2;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout<< arr[i] <<endl;
//     }

// }
// int main()
// {

//     int arr[] = {2, 3, 5, 8 , 10};
//     swapAl(arr, 5);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << ((5 ^ 15) ^ 5) << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     // int arr[] = {1, 2, 3, 4, 5};

//     // vector<int> sahi {};

//     // // sort(sahi.begin(), sahi.end());
//     // for (int i = 0; i < sahi.size(); i++)
//     // {
//     //     cout << sahi[i];
//     // }

//     int left = 0;
//     int target = 7;
//     vector<int> nums{1, 3, 5, 6};
//     int right = nums.size();

//     while (left <= right)
//     {
//         int mid = (left + right) / 2;

//         if (nums[mid] == target)
//         {
//             cout<< mid <<endl;;
//         }
//         else if (nums[mid] < right)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }
//     return -1;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int firstO(int arr[], int size, int fin)
// {
//     int s = 0, e = size - 1, mid, ans = -1;
//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;
//         if (arr[mid] == fin)
//         {
//             ans = mid;
//             e = mid - 1;
//         }

//         else if (arr[mid] > fin)
//         {
//             e = mid - 1;
//         }
//         else if (arr[mid] < fin)
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// int firstOl(int arr[], int size, int fin)
// {
//     int s = 0, e = size - 1, mid, ans = -1;
//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;
//         if (arr[mid] == fin)
//         {
//             ans = mid;
//             s = mid + 1;
//         }

//         else if (arr[mid] > fin)
//         {
//             e = mid - 1;
//         }
//         else if (arr[mid] < fin)
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// #include <bits/stdc++.h>

// int main()
// {
//     int arr[] = {1, 2, 2, 3, 3, 5};
//     vector <int> a{1 , 3, 3, 3, 10};

//     // cout << firstO(arr, 6, 3) << endl;
//     // cout << firstOl(arr, 6, 3) << endl;
//     cout << *max_element(a.begin(), a.end()) << endl;

//     return 0;
// }

// int fin(int arr[] , int size ){
//     int s = 0, e = size -1, mid;

//     while (s <= e)
//     {
//         mid = s + (e - s)/2;
//         if(arr[mid] > arr[mid + 1] && arr[mid] < arr[mid -1]){
//             return mid;
//         }

//         else if(arr[mid] < arr[mid + 1]){
//             s = mid;
//         }

//         else if(arr[mid] > arr[mid + 1]){
//             e = mid;
//         }
//     }
//     return -1;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {1 , 5, 10 , 20 , 7 , 4, 3};
//     cout<< fin(arr, 7) <<endl;

//     return 0;
// }

// int peakBin(int arr[], int size)
// {
//     int s = 0, e = size - 1, mid;
//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;
//         if ((arr[mid] > arr[mid - 1]) && arr[mid] > arr[mid + 1])
//         {
//             return mid;
//         }

//         else if ((arr[mid] > arr[mid - 1]))
//         {
//             s = mid + 1;
//         }
//         else if (arr[mid] < arr[mid - 1])
//         {
//             e = mid - 1;
//         }
//     }
//     return -1;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 10 , 11 , 12 , 9, 8};
//     cout << peakBin(arr, 10) << endl;

//     return 0;
// }

// int getPivot(int arr[], int size , int find)
// {
//     int s = 0, e = size - 1, mid;
//     while(s <= e){
//         mid = s + (e - s)/2;

//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {9, 10 , 15,  1, 2, 4};
//     // cout<< getPivot(arr , 6) <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main(){
//
//     return 0;
// }

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int index = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[index])
//             {
//                 index = j;
//             }
//         }
//         // swap(arr[index], arr[i]);
//         int arrSto = arr[i];
//         arr[i] = arr[index];
//         arr[index] = arrSto;
//     }
//     // return arr;
// }

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n ; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {

//             if (arr[j] > arr[i])
//             {
//                 int arrSto = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = arrSto;
//             }
//         }
//     }
// }

// #include <vector>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 9, 6, 8, 7, 8};

//     bubbleSort(arr , 6);
//     cout << arr[0] << endl;

//     return 0;
// }

// void insert(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i;
//         while (j >= 0)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//             j--;
//         }
//         arr[j+1] = temp;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     return 0;
// }

// #include <iostream>
// #include<array>
// using namespace std;

// int main(){

//     array<int,4> a = {1, 2, 3, 4};
//     cout<< a.at(3) <<endl;

//     return 0;
// }

// #include <queue>
// #include <set>
// #include <vector>
// #include <map>
// #include <iostream>

// #include <algorithm>

// using namespace std;

// int main()
// {
//     vector<int> v = {10, 2, 5, 6, 7, 9, 5};

//     // // cout<< binary_search(v.begin() , v.end() , 5) <<endl;

//     // sort(v.begin() , v.end() );
//     // int size = v.size();
//     // for (int i : v)
//     // {
//     //     cout<< i <<endl;
//     // }

//     // vector<int> v = {10, 2, 5, 6, 7, 9, 5};

//     // reverse(v.begin() , v.end());

//     // reverse( v.begin() + 3, v.end());
//     // for (int i : v)
//     // {
//     //     cout<< i <<endl;
//     // }

//     reve()

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> merge(vector<int> nums1, vector<int> nums2)
// {

//     int fs = nums1.size(), ls = nums2.size();
//     int fc = 0, lc = 0;
//     // cout<< fs + ls <<endl;
//     vector<int> nums1;

//     for (int i = 0; i < fs + ls; i++)
//     {

//         if (fc == fs)
//         {
//             nums1.push_back(nums2[lc]);
//             lc++;
//         }
//         else if (lc == ls)
//         {
//             nums1.push_back(nums1[fc]);
//             fc++;
//         }

//         else if(nums1[fc] < nums2[lc])
//         {
//             nums1.push_back(nums1[fc]);
//             fc++;
//         }
//         else
//         {
//             nums1.push_back(nums2[lc]);
//             lc++;
//         }
//     }

//     int size = nums1.size();

//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout<< ans[i] <<endl;
//     // }

//     for (int i = 0; i <size ; i++)
//     {
//         cout<< ans[i] << " ";
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> v = {1, 5, 10, 40 , 50 , 60};
//     vector<int> v2 = {2, 3, 20};

//     merge(v, v2);
// }

// if (firstC == )
// {
//     nums1.push_back(nums2[secondC]);
//     secondC++;
// }
// else if (secondC == ls)
// {
//     nums1.push_back(nums1[firstC]);
//     firstC++;
// }

// else if (nums1[firstC] < nums2[secondC])
// {
//     nums1.push_back(nums1[firstC]);
//     firstC++;
// }
// else
// {
//     nums1.push_back(nums2[secondC]);
//     secondC++;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()

//     vector<int> v = {0 , 1 , 2 , 3, 4, 5 };
//     vector<int> v = {0, 1, 2, 3, 4, 5};
//     vector<int> copy;

//     int k = 2;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i + k < v.size())
//         {
//             copy[i] = v[k + i];
//         }

//     }

// #include <iostream>
// #include <vector>
// #include <math.h>
// #include <string.h>

// using namespace std;

// int main()
// {

//     // int first = 0, second = 0;

//     // vector<int> n = {1, 2, 3};

//     // for (int i = 0; i < n.size(); i++)
//     // {
//     //     first = first + (n[i] * pow(10, n.size() - i - 1));
//     // }

//     // cout<< to_string(first).length() <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // char name[10];
//     // cin >> name;

//     // cout<< name[0] <<endl;
//     // cout<< sizeof(name) <<endl;
//     // for (int i = 0; i < sizeof(name); i++)
//     // {
//     //     cout<< name[i] <<endl;
//     // }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     // string s;
//     // cin>>s;
//     // cout<< "sahith " <<  s <<endl;

//     // string s = "sahith";

//     // cout<< s.length() <<endl;

//     vector<char> ch = {'a', 'b', 'c'};
//     reverse(ch.begin(), ch.end());
//     for (int i = 0; i < ch.size(); i++)
//     {
//         cout<< ch[i] <<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){

//     string s = "sahith";

//     string man = s.reverse(s.begin() , s.end());

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     string s = " lks";
//     // cout<< s.length() <<endl;
//     // cout<< s.at(2) <<endl;

//     // int diff = 'A' - 'a';
//     // cout << 'A' + 'a' - 'A' + diff << endl;
//     // cout << 'A' + 1 - 1 << endl;
//     // cout<< 'x' + 1 - 1  <<endl;

//     cout<< ('z' <= 'a') <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     for (int i = 0; i <= 10; i++)
//     {
//         cout<< "sahith" << i <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

//     vector <char> v ;

//     v.push_back('a');
//     v.push_back('b');
//     v.push_back(' ');
//     v.push_back('t');
//     v.push_back('h');
//     v.push_back('e');

//     vector <char> completeReverse;

//     vector <char>
//     for (int i = 0; i < v.size(); i++)
//     {

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string s = "this is me inside the vim";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << "this is " << s << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     string s = "sahith";
//     s[0] = 'm';
//     cout<< s <<endl;

//     return 0;
// }

// string sub(string s , string part){
//     string ans = "";

// }

// #include <iostream>
// using namespace std;

// int main(){

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void rowSum(int arr[][3])
// {
//     int largest[] = {0 , 0};
//     for (int i = 0; i < 3; i++)
//     {
//         int temp = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             temp = temp + arr[i][j];
//         }

//         if (temp > largest[0])
//         {
//             largest[0] = temp;
//             largest[1] = i;
//         }

//     }
//     cout<< largest[0] <<endl;
//     cout<< largest[1] <<endl;
// }

// #include <iostream>
// using namespace std;

// void wave(int arr[][3])
// {

//     int k = 0;
//     for (int col = 0; col < 3; col++)
//     {

//     }
// }

// int main()
// {

//     int s[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     wave(s);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <math.h>
// using namespace std;

// int main()
// {

//     // cout << pow(10, (0.5)) << endl;
//     // int n = 10;
//     // int ans = 2;
//     // for (int i = 4; i < n; i++)
//     // {
//     //     bool is = true;
//     //     for (int j = 2; j < pow(i, (0.5)) + 1; j++)
//     //     {
//     //         if (i % j == 0)
//     //         {
//     //             is = false;
//     //             break;
//     //         }
//     //     }
//     //     if (is)
//     //     {
//     //         cout<< i <<endl;

//     //         ans++;
//     //     }
//     // }
//     // cout<< ans <<endl;

//     // vector<bool> prime(2+1 , true);
//     // for (int i = 0; i < prime.size(); i++)
//     // {
//     //     cout<< i <<endl;
//     // }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){

//     int first = 50 , second= 40;
//     int mini = ((first > second) ? second : first);
//     for (int i = 2; i < mini; i++)
//     {
//         if ((first % i == 0) && (second % i == 0)) {
//             cout<< i <<endl;
//         }
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // int num = 10;
//     // cout<< &num <<endl;
//     // int *ptr = &num;
//     // ptr++;
//     // cout<<  *ptr <<endl;

//     // int num = 5;
//     // int *p;
//     // p = &num;
//     // cout << p << endl;
//     // cout << *p << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 5;

//     int *p = &num;

//     num++;
//     cout<< *p <<endl;

//     // important concept

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // int arr[3] = {5 , 2 ,3 };
//     // int *p = arr;
//     // // cout<< &p <<endl;
//     // cout<< *&arr[1] <<endl;
//     // // cout<< &p <<endl;

//     // // cout<< arr[1] <<endl;
//     // // cout<< arr[2] <<endl;

//     // int arr[3] = {5 , 2 ,3 };
//     // int *p = arr;
//     // cout<< *arr  <<endl;
//     // cout<< *(arr+1) <<endl;
//     // for(int i = 0 ; i < 10 ; i++){
//     //     cout << i << endl;
//     // }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[3] = {5 , 2 ,3 };
//     int *p = arr;

//     // cout<< *(1 + arr) <<endl;
//     int i = 0;
//     cout<< 0[arr] <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3] = {1 , 2, 3};
//     int *p = &arr[0];
//     (*p) = (*p) + 10;
//     cout<< arr[0] <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3] = {1 , 2, 3 };
//     int *p = arr;

//     // cout<< sizeof(*p) <<endl;
//     // cout<< * <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     for (int i = 0; i < 10; i++) {
//         cout<< i <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         cout << i << endl;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int  arr[3] = { 1 , 2, 3 };
//     char ch[3] = {'a' , 'b' ,'c'};
//     char *pch = &*ch;
//     int *p = arr;
//     cout<< *ch <<endl;
//     cout<< *pch <<endl;
//     // cout<< arr[0] <<endl;
//     // cout<< *p <<endl;
//     // cout<< ch <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3] = {1 , 2, 3};
//     int *p = arr;
//     cout<< &p <<endl;
//     // print(p);
//     cout<< &p <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 10; i++) {
//         cout << i << endl;
//     };
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int value = 5;
//     int *ptr = &value;
//     int **pt = &ptr;
//     cout<< **pt <<endl;
//     cout<< *&value <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void update(int **p) {
//     (*p)++;
// }

// int main() {

//     // int value = 5;
//     // int *p1 = &value;
//     // int **p2 = &p1;

//     // cout<< "before update " << *p2 <<endl;
//     // update(p2);
//     // cout<< "after update "  << **p2 <<endl;

//     // int value = 5;
//     // int *p1 = &value;
//     // int *p2 = p1;
//     // cout<< p1 <<" " << p2 <<endl;
//     int *p = 0, first = 10;

//     cout<< p <<endl;
//     *p = 10;
//     // cout<< *p <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void update(int *p) {
//     (*p)++;
//     cout<< *p <<endl;
// }

// int main()
// {

//     // Why do we need reference variable
//     // int value = 5;
//     // int &j = value;
//     // cout << j << endl;
//     // int *p = &value;
//     // update(p);
//     // cout<< value <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // int **arr = new int*[n];
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     cout<< sizeof(arr) <<endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int factorial(int &a, int &fact)
// {
//     if (a != 1)
//     {
//         fact = fact * factorial(a, --fact);
//     }
//     return fact;
// }

// int powerFind(int &base , int &power ){
//     if(power != 1){
//         base = base * powerFind(base , --power);
//     }
//     return base;
// }
// void printNum(int a){
//     if (a != 0)
//     {
//         cout << a << endl;
//     }

// }

// int main()
// {
//     // int fact = 1;
//     // int value = 6;
//     // cout << factorial(value, fact) << endl;

//     int base = 4;
//     int power = 3;
//     cout<< powerFind(base , power) <<endl;
//     printNum(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fibonacci(int a ) {
//     // int ans = 0;
//     // if(a < 4){
//     //     return  1;
//     // }

//     // ans = fibonacci(--a ) + fibonacci(--a);
//     // return ans;
//     if(a == 0){
//         return 0;
//     }
//     else if(a ==1){
//         return 1;
//     }
//     int ans = 0;
//     ans = fibonacci(a - 1) + fibonacci(a - 2);

//     return ans;

// }

// int main() {
//     int ans = 0;
//     cout << fibonacci(5) << endl;
// }

// int nStairs(int n){
//     if (nStairs == 1)
//     {
//         return 1;
//     }
//     else if(nStairs =j= 2){
//         return 2;
//     }

//     int ans = 0;
//     ans = nStairs(nStairs -1 ) + nStairs(nStairs -2);
//     return ans;

// };

// #include <iostream>
// using namespace std;

// int main(){
//     cout<< nStairs(4) <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool binarySearch(int arr[], int start, int end, int key)
// {
//     if (start > end)
//         return false;

//     int mid = start + (end - start)/2;

//     if (arr[mid] == key)
//     {
//         return true;
//     }

//     else if  (key > arr[mid])
//     {
//         return binarySearch(arr, mid + 1, end, key);
//     }

//     else {
//         // return binarySearch
//         return binarySearch(arr, start, mid - 1, key);
//     }

//     // else if (key < arr[mid])
//     // {
//     //     return binarySearch(arr, start, mid - 1, key);
//     // }
// }

// int main()
// {

//     int arr[] = {2, 4, 10, 20 , 20 , 40 ,  50};
//     cout << binarySearch(arr, 0, 6, 10) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool reverse(string &s, int start = 0)
// {
//     // if (start >= s.length() - 1 - start)
//     // {
//     //     return s;
//     // }
//     // if (start >= s.length() - 1 - start)
//     // {
//     //     return true;
//     // }
//     // return (start >= s.length() - 1 - start) ? true : ;
//     if (start >= s.length() - 1  - start )
//     {
//         return true;
//     }

//     return (s[start] == s[s.length() - 1 - start]) ? (reverse(s, start + 1)): false;
//     // return (s[start] == s[s.length() - 1 - start]) ? true : false;
//     // reverse it;
//     // if (s[start] == s[s.length() - 1 - start])
//     // {
//     //     bool nextReturn = reverse(s, start + 1);
//     //     return nextReturn;
//     // }
//     // else
//     // {
//     //     return false;
//     // }
// }

// int main()
// {
//     string s = "malm";
//     bool str = reverse(s);
//     cout << str << endl;
// }

// #include <iostream>
// using namespace std;

// int powerOf(int base, int power)
// {

//     // base;
//     if (power == 0)
//     {
//         return 1;
//     }

//     if (power == 1)
//     {
//         return base;
//     }
//     int ans = powerOf(base, power / 2);
//     if (power % 2 == 0)
//     {
//         return ans * ans;
//     }

//     else
//     {
//         return (base * ans * ans);
//     }
// }

// int main()
// {
//     int first, second;
//     cout << "Enter first number:  " << endl;
//     cin >> first;
//     cout << "Enter second number:  " << endl;
//     cin >> second;
//     cout << powerOf(first, second) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *arr = new int();
//     bool yesOrNo = true;

//     int index = 0;
//     while (yesOrNo)
//     {
//         int input;
//         cout << "Enter the number : ";
//         cin >> input;
//         arr[index] = input;
//         index++;
//         char str;
//         cout << "Do you want to enter any other number: ";
//         cin >> str;
//         yesOrNo = (str == 'y') ? true : false;
//     }
//     int sum = 0;
//     for (int i = 0; i < index; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int* bubbleSort(int arr[], int size, int minus)
// {

//     if (size <= minus )
//     {
//         return arr;
//     }

//     for (int i = 0; i < size - minus; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             swap(arr[i] , arr[i + 1]);
//         }
//     }

//     return bubbleSort(arr , size , minus + 1 );

// }

// int main()
// {
//     int arr[] = {10, 1, 6, 8, 2, 3, 4, 5};
//     bubbleSort(arr, 8, 1);
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     for (int i = 0; i <  11; i++)
//     {
//         cout<< "sahith" <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Hero
// {
// private:
//     int level;

// public:
//     int health;

// public:

//     int level()
//     {
//         return level;
//     }

// };

// int main()
// {
//     Hero sahith;

//     cout << sahith.level() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Hero
// {

// private:
//     int value;

// public:
//     int getvalue()
//     {
//         return value;
//     }

//     void setValue(int a)
//     {
//         value = a;
//     }
// };

// int main()
// {
//     Hero sahith;
//     sahith.setValue(10);
//     cout << sahith.getvalue() << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Hero
// {
// private:
//     char level;
//     int health;

// public:
//     static int timeToCompelete;
//     Hero(int health)
//     {
//         this->health = health;
//     }

//     void getLevel()
//     {
//         cout << level << endl;
//     }

//     void getHealth()
//     {
//         cout << health << endl;
//     }

//     void setLevel(int a)
//     {
//         level = a;
//     }
// };
// int Hero::timeToCompelete = 5;

// int main()
// {
//     cout << Hero::timeToCompelete << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name = "sahith";

// private:
//     int num = 1;

// };

// class Mat : private Student
// {
// public:
//     void getNum()
//     {
//         cout << this->name << endl;
//     }
// };

// int main()
// {
//     Mat man;

//     man.getNum();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     int age;
//     int weight;

//     void speak(){
//         cout<< "speaking" <<endl;
//     }
// };

// int main()
// {

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // int *arr = new  int[]{};
//     // int *arr{new int[]{}};
//     int *arr = new int();
//     arr[0] = 1;
//     for (int i = 0; i < 4; i++)
//     {
//         cin >> i[arr];
//     }

//     for (int j = 0; j < 4; j++)
//     {
//         cout<< arr[j] <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void func()
//     {
//         cout << "sahith A" << endl;
//     }
// };
// class B
// {
// public:
//     void func()
//     {
//         cout << "sahith B" << endl;
//     }
// };

// class C : public A, public B
// {
// };

// int main()
// {

//     C obj;
//     obj.B::func();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < 11; i++)
//     {
//         cout<< i <<endl;
//     }

//     return 0;
// }

// Linked list is a linear data strcture which is made by the collections of nodes.

// #include <iostream>
// using namespace std;

// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node*&head , int d){
//     Node * temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// int main(){

//     Node *node1 = new Node(10);
//     cout<< node1->data <<endl;
//     cout<< node1->next <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node *&head, int val)
// {
//     Node *temp = new Node(val);

//     temp->next = head;
//     head = temp;
// };

// void insertAtTail(Node *&tail, int val)
// {
//     Node *temp = new Node(val);
//     tail->next = temp;
//     tail = temp;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// };

// void insertAtPosi(int posi, Node *&head, Node *&tail, int data)
// {
//     Node *temp = head;
//     Node *insertNode = new Node(data);
//     int number = 1;
//     if (posi == 1)
//     {
//         insertNode->next = temp;
//         head = insertNode;
//         return;
//     }

//     while (number < posi - 1)
//     {
//         temp = temp->next;
//         number++;
//     }
//     if (temp->next == NULL)
//     {
//         temp->next = insertNode;
//         tail = insertNode;
//         return;
//     }

//     insertNode->next = temp->next;
//     temp->next = insertNode;
// };

// int main()
// {

//     Node *node = new Node(10);
//     Node *tail = node;
//     Node *head = node;
//     insertAtTail(tail, 20);
//     insertAtTail(tail, 30);
//     insertAtTail(tail, 40);
//     insertAtTail(tail, 50);
//     insertAtPosi(3, head, tail, 234);
//     insertAtPosi(3, head, tail, 97);
//     insertAtPosi(1, head, tail, 1234234);
//     print(head);
//     cout<< head->data <<endl;
//     cout<< tail->data <<endl;

//     return 0;
// }

// #include <iostream> // this is for xyz purpose
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;

//     Node(int value)
//     {
//         this->data = value;
//     }
// };

// void insertAtTail(Node *&tail, int value)
// {
//     Node *temp = new Node(value);
//     tail->next = temp;
//     tail = temp;
// }

// void print(Node *head)
// {

//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// void deleteAtPosi(int posi, Node *&head)
// {
//     Node *temp = head;

//     int num = 1;
//     while (num < posi - 1)
//     {
//         head = head->next;
//         num++;
//     }

//     Node *p = head->next;
//     head->next = head->next->next;
//     p->data = NULL;
//     p->next = NULL;
//     delete p;
//     head = temp;

// }

// int main()
// {
//     Node *node = new Node(10);
//     Node *tail = node;
//     Node *head = node;

//     insertAtTail(tail, 20);
//     insertAtTail(tail, 30);
//     insertAtTail(tail, 40);
//     insertAtTail(tail, 50);
//     deleteAtPosi(3, head);
//     print(head);
//     cout<< "sahith" <<endl;

//     return 0;
// }

// #include <iostream>
// #include <map>
// #include <string>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void insertAtTail(Node *&tail, int data)
// {

//     Node *temp = new Node(data);
//     temp->prev = tail;
//     tail->next = temp;
//     tail = temp;
// }

// void insertAtPosi(Node *head, int posi, int data)
// {
//     Node *temp = new Node(data);
//     int i = 1;
//     while (i < posi - 1)
//     {
//         head = head->next;
//         i++;
//     }
//     Node *k = head->next;

//     head->next = temp;
//     temp->prev = head;
//     k->prev = temp;
//     temp->next = k;
// }

// void deleteAtPosi(Node *head, int posi){

// };

// void reverseByK(Node *&head, int k)
// {
//     while (head != NULL)
//     {
//         for (int i = 0; i < 11; i++)
//         {
//             cout << i << endl;
//         }
//     }
// }

// Node *loopInLinkedList(Node *head)
// {

//     Node *fast = head;
//     Node *slow = head;
//     Node *remove = head;

//     while (fast != NULL)
//     {
//         fast = fast->next;
//         if (fast->next != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if (fast == slow)
//         {
//             remove = fast;
//             slow = head->next;
//             fast = head->next;
//             break;
//         }
//     }
//     while (slow != fast)
//     {

//         fast = fast->next;
//         slow = slow->next;
//         remove = remove->next;
//     }
//     remove->next = NULL;
//     cout << slow->data << endl;
//     return slow;
// }

// Node *removeDup(Node *&head)
// {
//     Node *tempHead = head;
//     while (head->next != NULL)
//     {
//         if (head->data == head->next->data)
//         {
//             head->next = head->next->next;
//         }
//         else
//         {
//             head = head->next;
//         }
//     }
//     return tempHead;
// }

// Node *removeDupFromUnSort(Node *&head)
// {
//     Node *inside = head->next;
//     while (inside != NULL)
//     {
//         Node *insideNext = inside->next;

//         while (insideNext != NULL)
//         {
//             if (inside->data == insideNext->data)
//             {
//                 inside->next = inside->next->next;
//                 if (insideNext->next->next != NULL)
//                     insideNext = insideNext->next->next;
//             }
//             else{
//                 insideNext = insideNext->next;
//             }
//         }
//         head = head->next;
//     }
//     return head;

// }

// int main()
// {
//     Node *node = new Node(1);
//     Node *head = node;
//     Node *tail = node;
//     insertAtTail(tail, 2);
//     insertAtTail(tail, 3);
//     insertAtTail(tail, 2);
//     insertAtTail(tail, 2);
//     print(head);
//     removeDupFromUnSort(head);
//     print(head);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//             cout << "Stack Overflow" << endl;
//     }

//     void pop()
//     {
//         if (top >= 0)
//             top--;

//         else
//             cout << "Stack UnderFlow" << endl;
//     }

//     int peek()
//     {
//         if (top >= 0)
//             return arr[top];
//         else
//             return 0;
//     }

//     bool empty()
//     {
//         if (top == -1)
//             return true;
//         else
//             return false;
//     }
// };

// int main()
// {

//     // stack<int> s;
//     // s.push(5);
//     // s.push(3);
//     // cout<< s.empty() <<endl;
//     // cout << ((!s.empty()) ? "sahith" : "man") ;
//     // int cat = (s.empty() ? 10 : 40);
//     // cout<< cat <<endl;

//     // int *number = new int;
//     // cout<< "Enter the number : ";
//     // cin >> (*number);

//     // for (int i = 0; i < *number; i++)
//     // {
//     //     cout<< i <<endl;
//     // }

//     // stack st = stack(5);
//     // st.push(10);
//     // st.push(50);
//     // st.pop();
//     // cout << st.peek() << endl;

//     // int *arr = new int[10];
//     // arr[5]  = 10;
//     // arr[0] = 55;
//     // cout<< *arr <<endl;

//     // cout<< arr[1] <<endl;
//     // cout<< arr[5] <<endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {

//     string str = "sahith";
//     string reversedStr = "";
//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         s.push(str[i]);
//     }

//     for (size_t i = 0; i < str.length(); i++)
//     {
//         reversedStr = reversedStr + s.top();
//         s.pop();
//     }
//     cout << reversedStr << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){

//     string s = "[][]";
//     stack <char> st;
//     int i = 0;
//     while (i < s.length())
//     {
//         if (s[i] == ')')
//         {
//             if (st.top() == '(')
//             {
//                 st.pop();
//             }

//         }

//         else if(s[i] == '}'){
//             if (st.top() == '{')
//             {
//                 st.pop();
//             }

//         }

//         else if(s[i] == ']'){
//             if (st.top() == '[')
//             {
//                 st.pop();
//             }
//         }

//         else{
//             st.push(s[i]);
//         }

//         i++;

//     }
//     cout<< st.empty() <<endl;

//     return 0;
// }

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void addToLast(stack<int> &s, int number)
{
    // nBase case
    if (s.empty())
    {
        s.push(number);
        return;
    }

    int element = s.top();

    s.pop();
    addToLast(s, number);
    s.push(element);
}

void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    reverseStack(s);
    addToLast(s, num);
}

void placeOne(stack<int> &s, int num)
{
    // if (s.empty())
    // {
    //     s.push(num);
    //     return;
    // }

    if (s.empty() || s.top() < num)
    {
        s.push(num);
        return;
    }

    int lastElement = s.top();
    s.pop();

    placeOne(s, num);

    s.push(lastElement);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int lastElement = s.top();
    s.pop();

    sortStack(s);
    placeOne(s, lastElement);
}

void printStack(stack<int> &s)
{

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

// int main()
// {
//     stack<int> s;
//     s.push(234);
//     s.push(40);
//     s.push(230);
//     s.push(603);
//     s.push(590);
//     s.push(4010);
//     // placeOne(s, 25);

//     sortStack(s);
//     printStack(s);

//     // vector<int> ve = {1, 2, 3, 4};
//     // ve.push_back(10);
//     // cout << ve.at(0) << endl;
//     // vector<int> *s = new vector<int>;

//     // int num = 1000;
//     // addToLast(s , num);
//     // reverseStack(s);

//     // while (!s.empty())
//     // {
//     //     cout << s.top() << endl;
//     //     s.pop();
//     // }

//     return 0;
// }

// string mergeAlternately(string word1, string word2)
// {
//     bool word1True = true;
//     string ans = "";
//     int first = 0;
//     int second = 0;
//     while (word1[first] && word2[second])
//     {
//         if (word1True)
//         {
//             cout << word1[first] << endl;
//             ans = ans + word1[first++];
//             word1True = !word1True;
//         }
//         else
//         {
//             ans = ans + word2[second++];
//             word1True = !word1True;
//         }
//     }
//     while (word2[second])
//     {
//         ans = ans + word2[second++];
//     }
//     while(word1[first]){
//         ans = ans + word1[first++];
//     }
//     return ans;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     string ans = mergeAlternately("ab", "pqrs");
//     cout << ans << endl;
//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec;
//     vector<int> arr = {5 , 4, 3, 2, 1};
//     cout<< arr.size() <<endl;

//     // cout << arr[10] << endl;
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     int smallThan = 0;

//     //     for (int j = i + 1; j < arr.size(); j++)
//     //     {
//     //         if (arr[j] < smallThan)
//     //         {
//     //             smallThan++;
//     //         }
//     //     }

//     //     if (smallThan)
//     //     {
//     //         vec.push_back(-1);
//     //     }
//     //     else{
//     //         vec.push_back(smallThan);
//     //     }
//     // }

//     // for (int k = 0; k < vec.size(); k++)
//     // {

//     //     cout<< vec[k] << " " << k << endl;
//     // }

//     // int i = 0;
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     int small = arr[i];
//     //     int j = i + 1;
//     //     cout<< arr[i] <<endl;

//     //     while (arr[j] )
//     //     {
//     //         if ((arr[j] < small))
//     //         {
//     //             small = arr[j];
//     //         }
//     //         j++;
//     //     }

//     //     if (arr[i] == small)
//     //     {
//     //         vec.push_back(-1);
//     //     }
//     //     else
//     //     {
//     //         vec.push_back(small);
//     //     }
//     //     i++;
//     // }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     string str = "sahith" ;
//     cout<< str.length() <<endl;
//     if(str == NULL){
//         cout<< ;
//     }
//     vector<int> heights = {2 , 1, 5, 6, 2 , 3};
//     int large = 0;
//     int area = 0;
//     for (int i = 0; i < heights.size(); i++)
//     {
//         int insideI = i;
//         int width = 1;
//         while (insideI > 0 && heights[insideI - 1] > heights[i])
//         {
//             if (heights[i] == 6)
//             {
//                 cout<< heights[insideI - 1] <<endl;
//             }

//             width++;
//             insideI--;
//         }
//         insideI = i;
//         while (insideI < heights.size() && heights[insideI + 1] > heights[i])
//         {
//             width++;
//             insideI++;
//         }
//         area = width * heights[i];
//         // cout<< area << " " << heights[i] <<endl;
//         if (area > large)
//         {
//             large = area;
//         }
//     }
//     cout << large << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> heights = {2, 1, 5, 6, 2, 3};
//     int largest = 1;
//     if (heights.size() == 0)
//     {
//         return -1;
//     }

//     for (int i = 0; i < heights.size(); i++)
//     {
//         int width = 1;
//         int insideI = i;

//         while (insideI >0)
//         {
//             if (heights[--insideI] >= heights[i])
//             {
//                 width++;
//                 // insideI--;
//             }
//             else
//             {
//                 break;
//             }
//         }

//         insideI = i;

//         while (insideI < heights.size())
//         {
//             if (heights[++insideI] >= heights[i])
//             {
//                 width++;

//             }
//             else
//             {
//                 break;
//             }
//         }
//         int area = width * heights[i];
//         cout << heights[i] << " " << area << " " << width << endl;

//         if (largest < area)
//         {
//             largest = area;
//         }
//     }
//     cout << largest << endl;
//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;
// class MinStack
// {
// public:
//     int value;
//     stack<int> *s = new stack<int>;
//     MinStack()
//     {
//     }

//     void push(int val)
//     {
//     }
// };

// void getMinimum(stack<int> *s, int &min)
// {
//     if (s->empty())
//     {
//         return;
//     }

//     int top = s->top();
//     if (top < min)
//     {
//         min = top;
//     }

//     s->pop();
//     getMinimum(s , min);
//     s->push(top);
// }

// int main()
// {

//     stack<int> *a = new stack<int>;
//     a->push(10);
//     a->push(20);
//     a->push(30);
//     a->push(40);
//     int min = 10000;
//     getMinimum(a , min);
//     cout << a->top()<< endl;
//     cout<< min <<endl;
//     int cat = INT32_MAX;
//     cout<< cat <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class man
// {
//     man(int m)
//     {
//         int *arr = new int[m];
//     }

// };
// int main()
// {

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {

//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     cout << q.back() << endl;

//     if (q.empty())
//     {
//         cout << "Empty" << endl;
//     }
//     else
//     {
//         cout << "Not empty" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->next = NULL;
//     }
// };

// void pushInNodeAtTail(Node *&tail, int data, Node *&prevTail)
// {
//     if (!tail->data)
//     {
//         tail->data = data;
//         return;
//     }
//     else
//     {
//         Node *temp = new Node;
//         temp->data = data;
//         tail->next = temp;
//         prevTail = tail;
//         tail = tail->next;
//     }
// }

// void removeTailInNode(Node *&tail, Node *&prevTail)
// {
//     Node *temp = tail;
//     cout<< "Temp Data " << temp->data <<endl;
//     tail = prevTail;
//     delete temp;
// }

// class Stack
// {
// private:
//     Node *node = new Node;
//     Node *prevTail = node;

// public:
//     void push(int data)
//     {
//         pushInNodeAtTail(node, data, prevTail);
//     }

//     int top()
//     {
//         if (node->data)
//         {
//             return node->data;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     void pop()
//     {
//         removeTailInNode(node, prevTail);
//     }
// };

// int main()
// {

//     Node *node = new Node;
//     Stack *st = new Stack;
//     st->push(10);
//     st->push(20);
//     st->push(30);
//     cout << st->top() << endl;
//     st->pop();
//     st->pop();
//     cout<< st->top() <<endl;
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Queue
// {
// public:
//     Queue()
//     {
//         cout << "sahith" << endl;
//     }
// };

// int main()
// {
//     // queue<int> q;
//     // q.push(10);
//     // q.push(20);
//     // q.push(30);
//     // cout << "size of queue " << q.size() << endl;

//     // cout << q.front() << endl;

//     // queue<int> q;
//     // q.push(10);
//     // q.push(20);
//     // q.push(30);
//     // q.push(40);

//     // q.pop();
//     // cout<< q.front() <<endl;
//     // Queue *que = new Queue;
//     // Queue *que = new Queue;

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Queue
// {
// public:
//     int number;
//     Queue(int num)
//     {
//         this->number = num;
//     }
//     int *arr = new int[number];

//     void getLength()
//     {
//         // arr[0] = 10;
//         cout << number << endl;
//     }
// };

// int main()
// {
//     Queue *in = new Queue(1040);
//     in->getLength();
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     return 0;
// }

// #include <iostream>
// #include <queue>

// using namespace std;

// int main()
// {
//     queue<int> d1;
//     deque<int> d2;
//     d2.push_front(10);
//     d2.push_front(20);
//     cout<< d2.back() <<endl;
//     cout<< d2.front() <<endl;

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     // deque <int> d;
//     // d.push_front(10);
//     // d.push_front(20);
//     // d.pop_front();
//     // d.pop_front();

//     // int num;
//     // string st;
//     // d.empty() ? (st = "Emtpty") : (num = 10);
//     // cout << (d.empty() ? "Empty" : "Not empty");
//     return 0;
// }

// Tree is a non linear data structure
// It is like a linked list and stuff

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->right = null;
//         this->left = null;
//     }
// };

// node *buildtree(node *root)
// {
//     int data;
//     cout << "enter the data : ";
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//         return null;

//     cout << "enter data for intesting in the left of " << data << endl;
//     root->left = buildtree(root->left);
//     cout << "enter data for inseting in right of " << data << endl;
//     root->right = buildtree(root->right);
//     return root;
// }

// void levelordertraveral(){

// }

// int main()
// {
//     node *root = new node(10);
//     cout << root->data << endl;
//     root = buildtree(root);

//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree(Node *root)
// {
//     int data;
//     cout << "Enter the data : ";
//     cin >> data;
//     root = new Node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;
// }

// void levelOrderTraveral(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         if (q.front() == NULL)
//         {
//             q.pop();
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }

//         }
//         else
//         {
//             cout << temp->data << " ";
//             q.pop();
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// // void levelOrderTraveral(Node *root)
// // {
// //     queue<Node *> q;
// //     int num = 1;
// //     q.push(root);
// //     q.push(NULL);
// //     while (!q.empty())
// //     {
// //         Node *temp = q.front();
// //         q.pop();

// //         if (temp == NULL)
// //         {
// //             cout << num++;
// //             cout << endl;

// //             if (!q.empty())
// //             {
// //                 q.push(NULL);
// //             }
// //         }
// //         else
// //         {
// //             cout << temp->data << " ";
// //             if (temp->left)
// //             {
// //                 q.push(temp->left);
// //             }
// //             if (temp->right)
// //             {
// //                 q.push(temp->right);
// //             }
// //         }
// //     }
// // }

// int main()
// {
//     Node *root = NULL;
//     root = buildTree(root);
//     cout << endl;
//     levelOrderTraveral(root);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 11; i++)
//     {
//         cout << "Sahith" << i << endl;
//     }

//     return 0;
// }