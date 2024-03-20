#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class CurAFN
{
    private:
        float afn;
    public:
        void set_afn(float afn){
            this->afn = afn;
        }
        float get_afn(){
            return afn;
        }
      void  friend compare();
        /*variables and methods*/
};
class CurCNY
{
    private:
        float cny;
    public:
        void set_cny(float cny){
            this->cny = cny;
        }
        float get_cny(){
            return cny;
        }
        void  friend compare();
};
void compare(float CNY , float AFG){
    CNY = CNY * 13.45;
    if(CNY > AFG){
        cout<<"Chinese amount is greater than Afghani currency."<<endl;
    }
    else if(CNY < AFG){
        cout<<"Afghani Currency is greater than Chinese Currency."<<endl;
    }
    else{
        cout<<"Both currencies are equal."<<endl;
    }
}


int main() {
    CurAFN a;
    CurCNY b;
    float i ,j;
    cin >> j;
    cin >> i;
    a.set_afn(i);
    b.set_cny(j);
    compare(j , i);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
