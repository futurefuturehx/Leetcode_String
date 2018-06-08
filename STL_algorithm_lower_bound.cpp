//
// Created by 联想 on 2018/6/8.
//

#include<stdio.h>
#include<algorithm>
#include <iostream>

using namespace std;
int main(){
    int a[10]={1,2,2,3,3,4,5,5,5,5};
    //lower_bound是在这个区间找到第一个等于这个数字的位置
    //upper_bound是在这个区间找到第一个大于这个数字的位置
    int *lowerPos=lower_bound(a,a+10,2);
    int *upperPos=upper_bound(a,a+10,2);
    //获取的是绝对位置 减去a才是相对位置
    //print可以控制输出格式 cout不知道怎么控制
    printf("%d,%d\n",lowerPos-a,upperPos-a);
}