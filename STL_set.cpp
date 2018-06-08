//
// Created by 联想 on 2018/6/8.
//
#include <stdio.h>
#include<set>
using namespace std;
int main(){
    //set的好处是 自动排序 自动去重
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf("%d\t",*it);
    }
    return 0;
}
