//WAP to implement Simple queue
#include <iostream>
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert()
{
    int temp;
    if(rear == n-1)
        std::cout << "Queue is full";
    else
    {
        if(front == -1)
            front = 0;
        std::cout << "Enter a value : ";
        std::cin >> temp;
        rear++;
        queue[rear] = temp;
    }
}
void Delete()
{
    if( front == -1 || rear < front )
        std::cout << "Queue is empty\n" ;
    else
    {
        std::cout << "Deleted element-" << front +1 << " : " << queue[front] << "\n";
        front++; 
    }
}
void Display()
{
    if(front == -1 || rear < front )
        std::cout << "Queue is empty\n" ;
    else
    {
        for(int i = front ; i <= rear ; i++)
            std::cout << queue[i] << " ";
        std::cout << "\n" ;
    }
}
int main()
{
    int check = 0;
    std::cout << "1] Insert an element to queue\n2] Delete an element from queue\n3] Display queue\n4] Exit\n";
    do
    {
        std::cout << "Enter your choice : ";
        std::cin >> check ;
        switch (check)
        {
        case 1: Insert();
            break;
        case 2: Delete();
            break;
        case 3: Display();
            break;
        case 4: break;
        default:
            std::cout << "Invalid input\n";
        }
    }while(check != 4);
}