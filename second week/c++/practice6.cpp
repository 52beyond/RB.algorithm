#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i,x=0,all=0,n;
    for(i=0;i<11;i++){
        if(a[i]=='-'){
            continue;
        }else{
            x++;
            n=a[i]-'0';
            all=all+n*x;
        }
    }
    int m,h,j;
    m=all%11;
    if(a[12]=='X'){
       h=10;
    }else{
        h=a[12]-'0';
    }

    if(m==h){
        cout<<"Right"<<endl;
    }else if(m==10){
        a[12]='X';
        cout<<a<<endl;
    }else{
        a[12]=m+'0';
        cout<<a<<endl;
    }
    return 0;
}