//Convert sec into  h,m,s
#include<iostream>
using namespace std;
class time{
    private:
        int h,m,s,sec;
    public:
        time() : h(0), m(0), s(0), sec(0) {}
        inline int read(){
            cin>>sec;
        }
        int convert(){
            s=sec%60;
            m=sec/60;
            while(m>=60){
                m=m-60;
                h++;
            }
        }
        int print(){
            cout<<"----------------------------------"<<endl;
            cout<<"Entered Time : "<<sec<<endl;
            cout<<"Conversion [hours:mins:seconds] : "<<h<<":"<<m<<":"<<s<<endl;
        }
};
int main(){
    int i=0,n;
    cout<<"Enter how many times you want to convert time : ";
    cin>>n;
    class time t[n];
    for(;i<n;i++){
        cout<<"----------------------------------"<<endl;
        cout<<"Enter the time in seconds : ";
        t[i].read();
    }
    for(i=0;i<n;i++){
        t[i].convert();
        t[i].print();
    }
}
