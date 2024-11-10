#include <stdio.h>
#include <string.h>
#include <time.h>

//结构体存储月份信息
typedef struct {
    const char *name;
    const char *short_name;
    int number;
} MonthInfo;

MonthInfo months[] = {
    {"January", "Jan", 1},
    {"February", "Feb", 2},
    {"March", "Mar", 3},
    {"April", "Apr", 4},
    {"May", "May", 5},
    {"June", "Jun", 6},
    {"July", "Jul", 7},
    {"August", "Aug", 8},
    {"September", "Sep", 9},
    {"October", "Oct", 10},
    {"November", "Nov", 11},
    {"December", "Dec", 12}
};

// 根据输入的月份字符串查找对应的月份号
int monthnumber(const char *input) {
    for (int i = 0; i < 12; i++) {
        if (strcmp(input, months[i].name) == 0 || strcmp(input, months[i].short_name) == 0) {
            return months[i].number;
        }
    }
    // 如果不是有效的月份名或缩写，尝试解析为数字
    return atoi(input);
}

int main() {
    int day, year, month_number;
    char month[10]; 

    printf("请输入日：");
    scanf("%d", &day);
    printf("请输入月（可以是数字、全称或缩写）：");
    scanf("%s", month); 
    printf("请输入年：");
    scanf("%d", &year);

    // 解析月份号
    month_number = get_month_number(month);
    if (month_number < 1 || month_number > 12) {
        printf("输入的月份无效，请检查后重新输入！\n");
        return 1;
    }

    // 创建tm结构体
    struct tm date = {0};
    date.tm_mday = day;
    date.tm_mon = month_number - 1; // tm_mon是从0开始的
    date.tm_year = year - 1900; // tm_year是从1900年开始的

    // 计算从年初到指定日期的天数
    mktime(&date); // 必须先调用mktime更新tm_wday和tm_yday字段
    int days_since_year_start = date.tm_yday + 1; // tm_yday是从0开始的

    // 输出结果
    printf("从%d年的开始到%d/%d/%d共有 %d 天。\n", year, day, month_number, year, days_since_year_start);

    return 0;
}