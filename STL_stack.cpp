//
// Created by 联想 on 2018/6/8.
//
#include <stdio.h>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    //将数据压入栈
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    //从最上方弹出
    for(int i=1;i<=3;i++){
        st.pop();
    }
    //显示最上方元素
    printf("%d\n",st.top());
    return 0;
}
