#include "str_easy.h"

string itc_even_place(string str)
{
    int num1 = 0;
    if (itc_len(str) <= 1)
        return "-1";
    string res_str = "";
    while (num1 <= itc_len(str)) {
        if ((num1 + 1) % 2 == 0)
            res_str += str[num1];
        num1++;
    }
    return res_str;
}

double itc_percent_lower_uppercase(string str)
{
    double count_upper = 0;
    double count_lower = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= 65 && str[i] <= 90)
            count_upper++;
        else if (str[i] >= 97 && str[i] <= 122)
            count_lower++;
    }
    return count_lower / count_upper;
}

string itc_reverse_str(string str)
{
    string rev_str = "";
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        rev_str += str[i];
    }
    return rev_str;
}

string itc_slice_str(string str, int start, int end)
{
    string res_str = "";
    if (start > end) {
        return str;
    }
    if (end <= itc_len(str)) {
        for (int i = start; i <= end; i++) {
            res_str += str[i];
        }
    }
    else {
        for (int i = start; i < itc_len(str); i++) {
            res_str += str[i];
        }
    }
    return res_str;
}

bool itc_equal_reverse(string str)
{
    if (str == itc_reverse_str(str))
        return true;
    return false;
}
