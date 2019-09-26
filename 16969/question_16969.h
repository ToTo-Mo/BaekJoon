#include <iostream>
using namespace std;

void question_16969()
{
    string str;
    cin>>str;

    unsigned long long  numberOfcases = 1;
    int countd = 10;
    int countc = 26;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'd')
        {
            numberOfcases = numberOfcases * countd % 1000000009;
            countd = countd > 9 ? --countd : countd;
            countc = 26;
        }
        else if(str[i] == 'c')
        {
            numberOfcases = numberOfcases * countc % 1000000009;
            countc = countc > 25 ? --countc : countc;
            countd = 10;
        }
    }
    cout<<numberOfcases<<endl;
}