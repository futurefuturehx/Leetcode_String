//
// Created by 联想 on 2018/6/7.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<map>
using namespace std;
string unitDigit[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string tenDigit[13]={"tret","tam","hel","maa","huh","tou","kes","hel","elo","syy","lok","mer","jou"};
//要建立两张表 因为键值只有一个 一个从字符串映射到数字 一个从数字映射到字符串
string numToStr[170];
map<string,int>strToNum;
//分类处理 第一类处理个位数是0的或者十位数是0的 第二类处理个位与十位都不是0的映射问题
void init(){
    for(int i=0;i<13;i++){
        numToStr[i]=unitDigit[i];
        strToNum[unitDigit[i]]=i;
        numToStr[i*13]=tenDigit[i];
        strToNum[tenDigit[i]]=i*13;
    }
    for(int i=1;i<13;i++){
        for(int j=1;j<13;j++){
            string str=tenDigit[i]+" "+unitDigit[j];
            numToStr[i*13+j]=str;
            strToNum[str]=i*13+j;
        }
    }
}
//首先是输入个数 然后依次输入
//首先统一作为字符 就好比干细胞 然后用if<'9'分化处理 好比细胞分化
int main(){
    init();
    int T;
    scanf("%d%*c",&T);
    while(T--){
        string str;
        getline(cin,str);
        if(str[0]>='0'&&str[0]<='9'){
            int num=0;
            for(int i=0;i<str.length();i++){
                num=num*10+(str[i]-'0');
            }
            cout<<numToStr[num]<<endl;
        }else{
            cout<<strToNum[str]<<endl;
        }
    }
    return 0;
}