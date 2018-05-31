//JudegSize函数用来判断一个int 类型的数字有多少位

#include <iostream>
#include <cmath>

using namespace std;

int JudgeSize(int num)
{
    num = abs(num);
    int i = 1;
    for (i = 1; pow(10, i) <= num; i++)
        ;
    return i;
}

int main(void)
{
    cout << JudgeSize(10);
    return 0;
}
