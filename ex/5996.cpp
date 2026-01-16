#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //获取要输入的字符串个数
    int n;
    cin >> n ;
   
    //使用动态数组接收字符串
    vector<string> line(n);
    for(string &s : line){
        cin >> s;
    }
    
    //大循环遍历所有字符串
    for(string s : line){
        int s_len = s.length();
        int left,right;//使用左右指针将字符串进行区间划分
         // 初始化左右指针
        left = -1;
        right = s_len;
        for(int i = 0; i < s_len; i++){
            if(s[i] != 'l' && s[i] != 'q' && s[i] != 'b'){
                left = i - 1; //指向左边规定字符串的最后一个，如果左边没有，就为-1
                break;
            }
        }
        
        for(int i = s_len - 1; i >= 0; i--){
            if(s[i] != 'l' && s[i] != 'q' && s[i] != 'b'){
                right = i + 1; //指向右边规定字符串的最前面一个，如果右边没有，就为s_len
                break;
            }
        }


        //全部都是lqb
        if(left == s_len && right == -1){
            cout << "Yes" << endl;
            continue;
        }


      

        //提取三部分
        string s_left = "", s_right = "", s_mid = "";
        if(left != -1){
            s_left = s.substr(0,left+1);
        }
        if(right != s_len){
            s_right = s.substr(right);
        }
        s_mid = s.substr(left+1,right-left-1);
        string s_mid_reverse = s_mid;
        reverse(s_mid_reverse.begin(),s_mid_reverse.end());
        
        if(s_mid_reverse != s_mid){
            cout << "No" << endl;
            continue;
        }
        
        if(left == -1 || right == s_len){
            cout << "Yes" << endl;
            continue;
        }

        if(s_left.length() == s_right.length()){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
    
    return 0;
}