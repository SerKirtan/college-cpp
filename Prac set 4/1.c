// class player:  name, age, runs, highest , lowest, no of tests, avg
#include<iostream>
#include<string>
class Player
{
    private:
        std::string name;
        int age,highest,lowest,no_of_tests;
        float average;
    public:
    class Runs
    {
        private:
            int runs;
        public:
            inline void setRuns(int &refTotalRuns)
            {
                std::cin>>runs;
                refTotalRuns+=runs;
            }
    };
        void readData()
        {
            int total_runs=0;
            fflush(stdin);
            std::cout<<"Enter Player name : ";
            getline(std::cin,name);
            std::cout<<"Enter player's highest and lowest runs and no of tests played : ";
            std::cin>>highest>>lowest>>no_of_tests;
            Runs runs[no_of_tests];
            for(int i=0;i<no_of_tests;i++)
            {
                std::cout<<"Enter match-"<<i+1<<" runs : ";
                runs[i].setRuns(total_runs);
            }
            average=total_runs/no_of_tests;
        }
        void display()
        {
            std::cout<<"Player name         : "<<name<<"\n";
            std::cout<<"No. of tests played : "<<no_of_tests<<"\n";
            std::cout<<"Highest runs        : "<<highest<<"\n";
            std::cout<<"Lowest runs         : "<<lowest<<"\n";
            std::cout<<"Average runs        : "<<average<<"\n";
        }
};
int main()
{
    int size;
    std::cout<<"How many players information you want to enter : ";
    std::cin>>size;
    Player player[size];
    for(int i=0;i<size;i++)
    {
        std::cout<<"--------------------\n";
        std::cout<<"Enter Player-"<<i+1<<" details\n";
        player[i].readData();
    }
    for(int i=0;i<size;i++)
    {
        std::cout<<"--------------------\n";
        std::cout<<"Enter Player-"<<i+1<<" details\n";
        player[i].display();
    }
}
