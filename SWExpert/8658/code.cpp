#include <iostream>
using namespace std;

int main(){
    int line;
    cin>>line;
    int elem[10];
    for(int i =1; i<=line; i++){
        for(int j = 0;j<10; j++){
            cin>>elem[j];
        }


        for(int j = 0; j<10; j++){
            int sum = 0;
            while(elem[j] > 0){
                sum += elem[j] % 10;
                elem[j] /= 10;
            }
            elem[j] = sum;
        }   

        int max = elem[0], min = elem[0];
        for(int j=0; j<10; j++){
            if(max <= elem[j])
                max = elem[j];
            if(min >= elem[j])
                min = elem[j];
        }

        cout<<"#"<<i<<" "<<max<<" "<<min<<endl;
    }

    system("pause");
    return 0;
}