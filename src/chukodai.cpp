#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int a, b;
    cin >> a >> b;
    char s1 = S[a - 1];
    string str1(1, s1);
    char s2 = S[b - 1];
    string str2(1, s2);
    S.replace(b - 1, 1, str1);
    cout << S.replace(a - 1, 1, str2) << endl;
}