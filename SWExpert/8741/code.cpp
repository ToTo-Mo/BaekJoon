#include <iostream>
using namespace std;

void main(){
    int line;
    string a,b,c;
    cin>>line;
    for(int i=1;i<=line;i++){
        cin>>a>>b>>c;
        cout<<"#"<<i<<" "<<char(a[0]-32)<<char(b[0]-32)<<char(c[0]-32)<<"\n";
    }

    system("pause");
}