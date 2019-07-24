#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char a;
  scanf("%s",&a);
if(isalpha(a))
{
if(a=='A'|| a=='a' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U' )
printf("Vowel");
else
printf("Consonant");
}
else
printf("Invalid");
return 0;
}


