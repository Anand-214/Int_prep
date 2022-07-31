#include<stdio.h>
void my_strcat(char* str1, char* str2)
{
    int len = 0, j = 0;
    while ( str1[len] != '\0')
	len++;
    //  printf("%d",i);
    for (int i = len; str2[j] != '\0'; i++, j++)
	str1[i] = str2[j];
    printf("%s", str1);
}
int main()
{
    char str1[100] = "Anand ";
    char str2[] = "Kulkarni";
    my_strcat(str1, str2);

}
