#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string res_str = "";
    if (num < 0)
        return "";
    if (itc_len(str1) < num + 1)
        return str1;
    for (int i = 0; i < num; i++) {
        res_str += str1[i];
    }
    for (int i = 0; i < itc_len(str2); i++) {
        res_str += str2[i];
    }
    int num1 = itc_len(res_str);
    for (int i = num1; i < itc_len(str1); i++) {
        res_str += str1[i];
    }
    return res_str;
}

int itc_find_str(string str1, string str2)
{
    int num = 0;
    int count_num = 0;
    int res_num = 0;
    for (int i = 0; i < itc_len(str1); i++) {
        if (str1[i] == str2[num]) {
            if (num == 0)
                res_num = i;
            num++;
            count_num++;
            if (count_num == itc_len(str2))
                return res_num;
        }
        else {
            num = 0;
            count_num = 0;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    string res_str = "";
    string res_str1 = "";
    if (itc_find_str(str1, str2) == -1) {
        return str1;
    }
    while (itc_find_str(str1, str2) != -1) {
        int num = itc_find_str(str1, str2);
        for (int i = 0; i < num; i++) {
            res_str += str1[i];
        }
        for (int i = itc_len(str2) + num; i <= itc_len(str1); i++) {
            res_str1 += str1[i];
        }
        str1 = res_str + str3 + res_str1;
        res_str = "";
        res_str1 = "";
    }
    return str1;
}

int itc_max_char_on_end(string str)
{
    int num_count = 0;
    int res_num = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num_count++;
        }
        else {
            num_count = 0;
        }
        if (num_count > res_num)
            res_num = num_count;
    }
    return res_num;
}
