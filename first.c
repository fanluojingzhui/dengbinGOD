#include <stdio.h>

struct man
{
       char name;
       char n;
       char b;
       int age[20];
} pd;

int main()
{
    struct man a1 = {"邓佬，惊为天人，才智过人",18};
    struct man* pd = &a1;
    printf("姓名: %c\n", pd->name);
    printf("外貌: %c\n", pd->n);
    printf("智商: %c\n", pd->b);
    printf("年龄: %c\n", pd->age);
    return 0;
}