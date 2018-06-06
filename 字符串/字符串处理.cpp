#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ls = s.size();
    int sensitive;
    cin >> sensitive;
    int n;
    cin >> n;
    cin.get();
    vector<string> v;//用来存储包含s的字符串
    for (int i = 0; i < n; i++){
        string tem;
        getline(cin, tem);//getline丢弃末尾的换行符
        int lt = tem.size();
        int m = 0, n = 0;
        while (m<ls&&n<lt){
            int start = n;
            if (sensitive == 1){
                while (m < ls&&n < lt && (s[m] == tem[n])){
                    n++;
                    m++;
                }
            }//若大小写敏感则直接比较字符是否相等
            else{
                int d = int('a' - 'A');
                while (m < ls&&n < lt && (s[m] == tem[n] || s[m] == char(tem[n] - d) || s[m] == char(tem[n] + d))){
                    n++;
                    m++;
                }
            }//若大小写不敏感，考虑三种情况：字符相等；主串中为大写，子串中为小写的同一个字符；子串中为大写，子串中为小写的同一个字符。

            if (m == ls){
                v.push_back(tem);
                break;
            }//如果匹配成功，将输入的字符串tem压入数组v中
            else{
                n = start+1;
                m = 0;
            }//若匹配不成功，则子串向后移动一位，重新匹配
        }
    }
    int vl = v.size();
    for (int i = 0; i < vl; i++)
        cout << v[i] << endl;
    return 0;
}