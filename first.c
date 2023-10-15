#include <stdio.h>
#include <string.h>
struct man
{
    char name[50];
    char face[50];
    char iq[15];
    int age;
};

void printMan();

int main()
{
    struct man p1;
    strcpy(p1.name, "邓彬");
    strcpy(p1.face, "惊为天人");
    strcpy(p1.iq, "114514");
    p1.age = 17;
    printMan(&p1);
    return 0;
}

void printMan(struct man *pd)
{
    printf("姓名: %s\n", pd->name);
    printf("外貌: %s\n", pd->face);
    printf("智商: %s\n", pd->iq);
    printf("年龄: %d\n", pd->age);
}