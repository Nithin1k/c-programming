
#include <stdio.h>

int main(void) 
{
	char str[10];

	int i,l;

	scanf("%s",str);
	l=strlen(str);
	
	for(i=l;i>=0;i--)
  {
		printf("%c",str[i]);
    }
}
