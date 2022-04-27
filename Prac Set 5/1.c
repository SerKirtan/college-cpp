//Player,name, Team name, Batting average of 5 players
#include<iostream>
#include<string>
using namespace std;
class Team{
    private:
        class Player{
            public:
                string name;
                float bAvg;
    }p[5];
    public:
        string Tname;
        inline void teamInput(){
            getline(cin,Tname);
        }
        void input(){
            for(int j=0;j<5;j++){
                fflush(stdin);
                cout<<"Enter player-"<<j+1<<" name and batting average"<<endl;
                getline(cin,p[j].name);
                cin>>p[j].bAvg;
            }
        }
        void print(){
            for(int j=0;j<5;j++){
                cout<<"Player-"<<j+1<<" details\n";
                cout<<"Name : "<<p[j].name<<"\n Batting average : "<<p[j].bAvg<<endl;
            }
        }
        void sort(){
            for(int j=0;j<5;j++){
                for(int k=j+1;k<5;k++)
                {
                    if(p[j].bAvg<p[k].bAvg){
                        float temp=p[j].bAvg;
                        p[j].bAvg=p[k].bAvg;
                        p[k].bAvg=temp;
                        string tmp=p[j].name;
                        p[j].name=p[k].name;
                        p[k].name=tmp;
                    }
                }
            }
        }
        
        inline int printMax(float &mm,string mname){
            cout<<mname<<"'s Batting average is "<<mm<<endl;
        }
        int sortBYmax(){
            float &max=p[0].bAvg;
            string mname;
            for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(p[j].bAvg>max){
                    max=p[j].bAvg;
                    mname=p[j].name;
                }
            }
            printMax(max,mname);
            max=-1;
        }
        }
};
int main(){
    int n,i,j;
    cout<<"Enter number of teams : ";
    cin>>n;
    class Team t[n];
    for(i=0;i<n;i++){
        cout<<"Enter team-"<<i+1<<" name\n";
        fflush(stdin);
        t[i].teamInput();
    }
    for(i=0;i<n;i++){
        cout<<"--------------------\nTeam-"<<i+1<<" details \n";
            t[i].input();
    }
    for(i=0;i<n;i++){
        cout<<"--------------------\nTeam-"<<i+1<<" details \n";
        t[i].print();
    }
    for(i=0;i<n;i++)
        t[i].sort();
    for(i=0;i<n;i++){
        cout<<"--------------------\n Sorted Team-"<<i+1<<" details \n";
        t[i].print();
    }
    cout<<"All players sorted : \n";
    for(i=0;i<n;i++){
        t[i].sortBYmax();
    }
}
