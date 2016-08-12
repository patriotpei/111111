#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str[1000];
    gets(str);

    char word[1];
    cin >> word[0];
    int len = strlen(str);
    int count = 0;
    for (int i = len - 1; i >= 0; i--){
        if (tolower(str[i]) == tolower(word[0]))
            count++;
        else
            continue;
    }

    cout << count << endl;

    return 0;
}
//计算字符串最后一个单词的长度，单词以空格隔开。
