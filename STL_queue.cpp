//
// Created by 联想 on 2018/6/8.
//

#include <stdio.h>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    //压入队列
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    //从最前方弹出
    for(int i=1;i<=3;i++){
        q.pop();
    }
    //然后从最后方或者最前方取值
    printf("%d\n",q.front());
}