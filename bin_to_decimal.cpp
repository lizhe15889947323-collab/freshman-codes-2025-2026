#include <iostream>
using namespace std;

int main(){
    int i;
    cout <<"输入一个十进制整数："; cin>>i;
    
    if (i == 0){
        printf("转换为二进制：0");
    }

    if (i > 0){
        int j[32];
        int g = i;
        int u=0;
        int k = 0;
        for (;g != 0 ; k++){
            j[k]= g % 2;
            g = g / 2;
        }
        printf("转换为二进制："); for(int u=0; u < k; u++){printf("%d", j[k-1-u]);}
    }

    if (i < 0)
    {
        i = -i;
        int j[32];
        int g = i;
        int u=0;
        int k = 0;
        for (;g != 0 ; k++){
            j[k]= g % 2;
            g = g / 2;
        }
        printf("转换为二进制：-"); for(int u=0; u < k; u++){printf("%d", j[k-1-u]);}
    }
    return 0;
}