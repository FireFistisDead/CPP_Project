// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);



// int main()
// {
//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));
//     if (n == 0){
//         cout << "zero" << endl;
//     } else if (n == 1){
//         cout << "one" << endl;
//     } else if (n == 2){
//         cout << "two" << endl;
//     } else if (n == 3){
//         cout << "three" << endl;
//     } else if (n == 4){
//         cout << "four" << endl;
//     } else if (n == 5){
//         cout << "five" << endl;
//     } else if (n == 6){
//         cout << "six" << endl;
//     } else if (n == 7){
//         cout << "seven" << endl;
//     } else if (n == 8){
//         cout << "eight" << endl;
//     } else if (n == 9){
//         cout << "nine" << endl;}
//     else {
//         cout << "Greater than 9" << endl;}
//     // Write your code here

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
