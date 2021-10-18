#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string text = "";
    text += itc_slice_str(str1, 1, num);
    text += itc_slice_str(str2, 1, itc_len(str2));
    text += itc_slice_str(str1, num + 1, itc_len(str1));
    return text;
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
    string res1_str = "";
    if (itc_find_str(str1, str2) == -1) {
        return str1;
    }
    while (itc_find_str(str1, str2) != -1) {
        res_str += itc_slice_str(str1, 0, itc_find_str(str1, str2) - 1);
        res_str += str3;
        res_str += itc_slice_str(str1, itc_find_str(str1, str2) + itc_len(str2), itc_len(str1));
        str1 = res_str;
        res1_str = res_str;
        res_str = "";
    }
    return res1_str;
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
