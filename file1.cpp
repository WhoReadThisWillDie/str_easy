#include "str_easy.h"

string itc_hello_str(string name)
{
    return "Hello, " + name;
}

long long itc_len(string str)
{
    long long len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void itc_print_copy_str(string str, int number)
{
    while (number > 0) {
        cout << str;
        number--;
    }
}

void itc_first_end_three(string str)
{
    int len = itc_len(str);
    int num1 = 0;
    if (len > 5) {
        while (num1 < 3) {
            cout << str[num1];
            num1++;
        }
        num1 = len - num1;
        while (num1 < len) {
            cout << str[num1];
            num1++;
        }
    }
    else {
        while (len > 0) {
            cout << str[0];
            len--;
        }
    }
}

int itc_count_char_in_str(char ch, string str)
{
    int num = 0;
    int num_count = 0;
    while (str[num] != '\0') {
        if (str[num] == ch)
            num_count++;
        num++;
    }
    return num_count;
}
