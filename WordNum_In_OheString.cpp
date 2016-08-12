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
