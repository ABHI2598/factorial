#include<bits/stdc++.h>

using namespace std;
int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }else{
        return 1;
    }
    //method -2 simple without recursion
    // int f=1,i;
    // for(i=2;i<=n;i++){
    //     f  *= i;
    // }
    // return f;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<< n <<" is: "<<fact(n);
    return 0;

}
