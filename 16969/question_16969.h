#include <iostream>
using namespace std;

void question_16969()
{
    string str;
    cin>>str;

    int numberOfcases = 1;
    int countd = 10;
    int countc = 26;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'd')
        {
            numberOfcases *= countd;
            countd = countd >= 9 ? --countd : 10;
            countc = 26;
        }
        else if(str[i] == 'c')
        {
            numberOfcases *= countc;
            countc = countc >= 25 ? --countc : 26;
            countd = 10;
        }
    }
    
    cout<<numberOfcases<<endl;
}