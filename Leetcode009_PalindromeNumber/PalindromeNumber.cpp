#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || ((x%10) == 0 && x != 0))
        {
            return false;
        }

        int reverseNum = 0;
        while (x > reverseNum)
        {
            reverseNum = reverseNum * 10 + x % 10;
            x /= 10;
        }

        return x == reverseNum || x == (reverseNum / 10);
    }
protected:
private:
};

//测试回文数字
void test1()
{
    int testNumber = 121;
    Solution solution;
    bool result = solution.isPalindrome(testNumber);
    if (result)
    {
        cout << "the number is a palindromic number......" << endl;
    }
    else
    {
        cout << "the number is not a palindromic number......" << endl;
    }
}

//测试负数
void test2()
{
    int testNumber = -121;
    Solution solution;
    bool result = solution.isPalindrome(testNumber);
    if (result)
    {
        cout << "the number is a palindromic number......" << endl;
    }
    else
    {
        cout << "the number is not a palindromic number......" << endl;
    }
}

//注意：0是回文数
void test3()
{
    int testNumber = 0;  
    Solution solution;
    bool result = solution.isPalindrome(testNumber);
    if (result)
    {
        cout << "the number is a palindromic number......" << endl;
    }
    else
    {
        cout << "the number is not a palindromic number......" << endl;
    }
}

int main(int argc, char** argv)
{
    test1();
    test2();
    test3();
    getchar();
    return 0;
}