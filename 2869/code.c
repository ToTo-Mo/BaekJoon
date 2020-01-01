#include "stdio.h"

main(a,b,v){
    scanf("%d%d%d",&a,&b,&v);
    printf("%d",(v-b-1)/(a-b) + 1);
    // system("pause");
    // (v-b-1)/(a-b) + 1 = x
    //  (x-1)(a-b) + b + 1= v
} 