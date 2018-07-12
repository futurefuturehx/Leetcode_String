//
// Created by 联想 on 2018/7/12.
//
//题意：给一个字符串 以及一组小字符串 判断这小字符串有几个是字符串的子序列
//分析:一般思想为依次匹配 找到小字符串第一个字母对应位置后 继续从下一个位置开始找
//Take:其实可以先预处理一下 先把大字符串的所有字母对应的位置都先保存下来(index列表)
//Take:找的话只需要符合两个条件:对应字母的index列表存在这样的表示位置的数大于前一个匹配位置

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<string,bool> mm;//Take:map会自动排序 而使用unordered_map需要引入unordered_map
//Take:传入字母未使用位置列表 和小字符串 传出是否可以凑成
bool isMatch(const string& word,vector<vector<int>>& pos){
    if(mm.count(word))
        return mm[word];
    int last_index=-1;
    for(const char c:word){//对于小字符串中的每一个字母
        const vector<int> &p=pos[c];//对于每一个字符获得他对应的索引列表的引用
        const auto it=lower_bound(p.begin(),p.end(),last_index+1);//找到第一个大于等于last_index+1的位置
        if(it == p.end())return  mm[word]=false;//找到最后也没找到就返回false
        last_index=*it;
    }//每次调用isMatch中的每个字符找到之后last_index都要跳到下一个位置 比如a[1,4] 得从1跳到4
    return mm[word]=true;//只有子序列中的每一个字符都找到之后才返回true
}
//匹配函数
int numMatch(const string& S,vector<string>& words){
    vector<vector<int>>pos(128);//预备一个二维动态数组 因为a储存的位置也不止一个
    for (int i = 0; i <S.length() ; ++i) {
        pos[S[i]].push_back(i);//Take:将每一个字母对应的几个索引存入
    }
    int ans=0;//计数器
    for(const string& word:words){
        ans+=isMatch(word,pos);//每当找到一个子序列 计数器加一
    }
    return ans;
}
int main(){
    string string1="helloworld";
    vector<string> input={"he","hello","a","abc","rld"};
    cout<<numMatch(string1,input);
}
//Take:更重要的是层次分解 不是物质分解
