//
// Created by 联想 on 2018/6/8.
//
#include <stdio.h>
#include<set>
using namespace std;
int main(){
    set<int> st;
    for(int i=1;i<=6;i++){
        st.insert(i);
    }
    //按照位置删除元素 位置是唯一的
    st.erase(st.find(1));
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf("%d\t",*it);
    }
    printf("\n");
    //按照内容删除元素 内容可以重复
    st.erase(4);
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf("%d\t",*it);
    }
    printf("\n");
    return 0;
}
