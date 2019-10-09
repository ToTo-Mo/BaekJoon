#include <iostream>
using namespace std;

int main(){
    int fixed_cost;
    int variable_cost;
    int selling_price;

    cin>>fixed_cost>>variable_cost>>selling_price;


    int result = -1;
    if(selling_price <= variable_cost){
        cout<<-1<<endl;
        return 0;
    }

    result = selling_price != variable_cost ? fixed_cost / (selling_price - variable_cost) + 1 : -1;

    cout<<result<<endl;
    system("pause");
    return 0;
}