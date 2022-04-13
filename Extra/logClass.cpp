#include<iostream>
using namespace std;
class Log{
    public:
    enum Level
        {
            logError = 0 ,logWarn,logInfo
        };

    private:
        int m_logLevel=logInfo;
    public:
        int setLevel()
        {
            cout<<"Set your log to 0]Warns, 1]Warns & Errors Warns, 2]Errors & Info [input : 0,1,2]"<<endl;
            cin>>m_logLevel;
        }
    int Info(const char* msg)
    {
        if(m_logLevel>=logInfo)
        cout<< "[INFO]: "<<msg<<endl;
    }
    int Warn(const char* msg)
    {
        if(m_logLevel>=logWarn)
        cout<< "[WARNING]: "<<msg<<endl;
    }
    int Error(const char* msg)
    {
        if(m_logLevel>=logError)
        cout<< "[ERROR]: "<<msg<<endl;
    }
};
int main()
{
    Log log;
    log.setLevel();
    log.Info("Hello!");
    log.Warn("Hello!");
    log.Error("Hello!");
}
