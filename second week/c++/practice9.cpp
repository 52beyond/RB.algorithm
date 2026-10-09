#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(((a%100!=0)&&(a%4==0))||a%400==0){
        if(b==2){
            cout<<"29"<<endl;
        }else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
            cout<<"31"<<endl;
        }else{
            cout<<"30"<<endl;
        }
    }else{
        if(b==2){
            cout<<"28"<<endl;
        }else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
            cout<<"31"<<endl;
        }else{
            cout<<"30"<<endl;
        }
    }
        return 0;
}