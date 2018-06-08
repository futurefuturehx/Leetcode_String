//
// Created by 联想 on 2018/6/8.
//
#include <stdio.h>
#include <set>
using namespace std;
int main(){
    set<int>st;
    for(int i=1;i<=3;i++){
        st.insert(i);
    }
    //find()得到内容地址
    //iterator传递地址
    //*it得到地址内容
    set<int>::iterator it=st.find(2);
    printf("%d\n",*it);
    return 0;
}
