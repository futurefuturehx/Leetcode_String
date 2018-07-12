//
// Created by 联想 on 2018/7/11.
//
//题意：给一个英文字符串,再给一个数组,数组第n个的数字s表示字符串第n位
//之前的字符串位置上的字符都得往后移动s位(z字母之后再到a字母) 输出正确结果

//分析:先简化 先把每一位上的移动位数算出来
//算出每一位上的字母需要移动的位数后 再通过如下进行各自位置上的字符转换
//S[i]=(S[i]-'a'+shift)%26+'a'

//Take:S[i]-'a'+shift获得初步相对位置(可能大于26）
//Take:%26是因为26个字母循环 得到最终相对位置(26之内)
//Take:最终相对位置加上'a'便是最终的该位置上字母结果

//Take：没有using namespace string会报错
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string shiftingLetters(string S,vector<int>& shifts){
    int c=0;
    for(int i=0;i<shifts.size();i++){
        c+=(shifts[i]%26);
        S[i]=(S[i]-'a'+c)%26+'a';
    }
    return S;
}
using namespace std;
int main(){
    vector<int>shift={1,2,4};
    string result=shiftingLetters("abc",shift);
    cout<<result;
}
