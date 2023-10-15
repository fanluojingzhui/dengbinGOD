#include <stdio.h>

struct man
{
       char name[50];
       char n[50];
       char b[50];
       int age;
};

int main()
{
    struct man a1 = {"邓佬", "惊为天人", "才智过人",18};
    struct man* pd = &a1;
    printf("姓名: %s\n", pd->name);
    printf("外貌: %s\n", pd->n);
    printf("智商: %s\n", pd->b);
    printf("年龄: %d\n", pd->age);
    return 0;
}