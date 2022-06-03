//Student class : rollno, name, marks[6] ,per class
#include<iostream>
#include<string>
using namespace std;
class Class{
    public:
    class Student{
        private:
            string name;
            int rollno,nos;
            float marks[6],percentage;
        public:
            Student() : name("Unknown"), rollno(0), nos(0), percentage(0) {}
            void read(int rn){
                percentage=0;
                fflush(stdin);
                rollno=rn+1;
                getline(cin,name);
                for(int it=0;it<6;it++){
                    cout<<"Enter marks of Sub-"<<it+1<<" : ";
                    cin>>marks[it];
                }
            }
            void print(){
                cout<<"-----------------"<<endl<<"Name : "<<name<<endl;
                cout<<"Roll No : "<<rollno<<endl;
                for(int it = 0;it<6;it++)
                {
                    cout<<"Subject-"<<it+1<<" marks : "<<marks[it]<<endl;
                    percentage+=marks[it];
                }
                cout<<"Percentage="<<percentage/6<<endl;
            }
    }s[100];
};
int main()
{
    int i,j,n;
    cout<<"Enter number of class : ";
    cin>>n;
    class Class c[n];
    int nos[n];
    for(i=0;i<n;i++){
        cout<<"---------------------------------------"<<endl;
        cout<<"Enter num of student in Class-"<<i+1<<" : ";
        cin>>nos[i];
        for(j=0;j<nos[i];j++){
            cout<<"Enter name of Roll number-"<<j+1<<" : ";
            c[i].s[j].read(j);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"----------------"<<endl<<"Class-"<<i+1<<" Information"<<endl<<"----------------"<<endl;
        for(j=0;j<nos[i];j++)
            c[i].s[j].print();
    }
}
