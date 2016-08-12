#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str[5000];
    gets(str);
    int count = 0;
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
            count++;
        else
        {
            break;
        }
    }
    cout << count << endl;

    //system("pause");
    return 0;
}
//写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
