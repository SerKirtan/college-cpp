#include<iostream>
#include<string>
class Account
{
private:
    long int account_id , balance ;
    std::string name;
public:
    Account() : account_id(0) , balance(0) , name("Unknown") {}
    void input()
    {
        fflush(stdin);
        std::cout << "Enter name : ";
        getline( std::cin , name );
        std::cout << "Enter account id and balance : ";
        std::cin >> account_id >> balance ;
    }
    inline void print()
    {
        std::cout << "Account name : " << name << "\nID           : " << account_id << "\nBalance      : " << balance << "\n";
    }
};

int main()
{
    int size;
    std::cout << "Enter how many account details you want to store : ";
    std::cin >> size ;
    Account *acc_obj = new Account[size];
    Account *ptrTemp = acc_obj;
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Account-" << i+1 << " details\n";
        acc_obj->input();
        acc_obj ++ ;
    }
    acc_obj = ptrTemp;
    for (int i = 0; i < size; i++)
    {
        std::cout << "\n\nAccount-" << i+1 << " details\n";
        acc_obj->print();
        acc_obj ++ ;
    }
}
