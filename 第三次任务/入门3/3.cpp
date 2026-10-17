#include <iostream>
using namespace std;
int main(){
    int n=0;
    double s;
    double sum=0.0,t;
    cin>>s;
    for(t=2.0;s>sum ;t=t*0.98){
        sum=t+sum;
        n++;
    }
    cout<<n<<endl;
    return 0;
}