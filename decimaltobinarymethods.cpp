#include <iostream>
#include <cmath>
using namespace std;

int decimaltobinarymethod1(int n)
{
    //division method
    int binaryno=0;
    int i=0;
    while(n>0)
    {
        int bit=n%2;
        binaryno=bit*pow(10,i++)+binaryno;
        n=n/2;

    }
    return binaryno;
}

int decimaltobinarymethod2(int n){
    //bitwise method
    int binarynumber=0;
    int i=0;
    while (n>0)
    {
        int bit=(n&1);
        binarynumber=bit*pow(10,i++)+binarynumber;
        n=n>>1;
    }
    return binarynumber ;
}
int main(){
    int n;
    cin>>n;
    int binary=decimaltobinarymethod1(n);
    int binary1=decimaltobinarymethod2(n);
    cout<<binary<<endl<<endl<<binary1<<endl;

}