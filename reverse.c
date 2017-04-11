#include <stdio.h>

#include<string.h>

int main() {

char a[50];

int j;
//
printf("enter the charcater");

gets(a);

j=strlen(a);

j-=1;

while(j>=0)
	{

printf("%c",a[j]);

j--;
	}

return 0;
}
