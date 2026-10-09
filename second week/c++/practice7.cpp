#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b<=c)||(a+c<=b)||(b+c<=a)){
        cout<<"Not triangle"<<endl;
    return 0;
        };
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
        cout<<"Right triangle"<<endl;
    else if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
        cout<<"Obtuse triangle"<<endl;
    else if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a))
        cout<<"Acute triangle"<<endl;
    if((a==b)||(a==c)||(c==b))
        cout<<"Isosceles triangle"<<endl;
    if(a==b&&b==c)
        cout<<"Equilateral triangle"<<endl;
    return 0;
}