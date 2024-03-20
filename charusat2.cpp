#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Event
{
    private:
        int roolnumber;
        string name , gender;
    public:
    static int e_male  , e_female;
    void getdata(){
        l1:
        cin >> roolnumber;
        if (roolnumber > 50)
        {
            goto l1;
        }

        cin >> name;
        cin >> gender;
        l2:
        if (gender != "male" && gender != "female"){
            goto l2;
        }
        if (gender == "male"){
            e_male++;
        }
        if (gender == "female"){
            e_female++;
        }
    }
     static void getcount(){
        cout << "Female: "<< e_female << "\nMale: " << e_male;
     }   /*variables and methods*/
}e[5];
int Event :: e_female = 0;
int Event :: e_male = 0;

int main() {
    int i;
    cin>>i;
    for(int j = 0; j < i; j++){
        Event e[j];
        e[j].getdata();
    }
    cout<<"Number of students\n";
   Event:: getcount();
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
