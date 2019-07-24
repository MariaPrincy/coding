#include<stdio.h>
#include<stdlib.h>
int main()
{
char a;
  scanf("%d",&a);
if(isalpha(a))
{
if(a==A|| a=='a' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U' )
printf("vowel");
else
printf("consonant");
}
else
printf("invalid")
return(0);
}


