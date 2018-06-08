//
// Created by 联想 on 2018/6/8.
//
#include <stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int a[10]={1,2,3};
    //next_permutation进行下一次全排列操作
    //返回true表示能够有下一次排序
    do{
        printf("%d%d%d\n",a[0],a[1],a[2]);
    }while(next_permutation(a,a+3));
    return 0;
}
