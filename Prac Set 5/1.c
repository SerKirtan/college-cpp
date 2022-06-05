//Player,name, Team name, Batting average of 10 players
#include<iostream>
#include<string>
class Player
{
private:
    std::string player_name;
    std::string team_name;
    float batting_avg;
public:
    Player() : player_name("Unknown") , team_name("Unknown") , batting_avg(0) {}
    void readData()
    {
        fflush(stdin);
        std::cout<<"Enter player name : ";
        getline(std::cin,player_name);
        std::cout<<"Enter team name   : ";
        getline(std::cin,team_name);
        std::cout<<"Batting average   : ";
        std::cin>>batting_avg;
    }
    inline void displayData()
    {
        std::cout<<team_name<<"\t\t"<<player_name<<"\t"<<batting_avg<<"\n";
    }
    void sort(Player p[])
    {
        Player temp;
        for(int j=0;j<5;j++)
        {
            for(int k=j+1;k<5;k++)
            {
                if(p[j].batting_avg<p[k].batting_avg)
                {
                    temp=p[j];
                    p[j]=p[k];
                    p[k]=temp;
                }
            }
        }
    }
    void teamWiseSort(Player p[])
    {
        Player temp;
        for(int j=0;j<4;j++)
        {
            for(int k=j+1;k<5;k++)
            {
                if(!(p[j].team_name.compare(p[k].team_name)))
                {
                    temp=p[j+1];
                    p[j+1]=p[k];
                    p[k]=temp;
                }
            }
        }
    }
};
int main()
{
    int size=5;
    Player p[size];

    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter player-"<<i+1<<" data\n";
        p[i].readData();
    }
    
    for(int i=0;i<size;i++)
        p[i].sort(p);

    std::cout<<"Team name\t Player name\t Batting average\n";
    for(int i=0;i<size;i++)
        p[i].displayData();

    for(int i=0;i<size;i++)
        p[i].teamWiseSort(p);
    
    std::cout<<"\n\nTeam name\t Player name\t Batting average\n";
    for(int i=0;i<size;i++)
        p[i].displayData();
}
