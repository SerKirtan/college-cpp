#include<iostream>
using namespace std;
class Player
{
    public:
        int x,y,speed;
        void move(int xa,int yb)
        {
            x+=xa*speed;
            y+=yb*speed;
            cout<<"New position is ("<<x<<","<<y<<")"<<endl;
        }
};
int main()
{
    Player p;
    p.x=5;
    p.y=7;
    p.speed=1;
    p.move(0,0);
    p.move(1,2);
    p.move(1,2);
}
