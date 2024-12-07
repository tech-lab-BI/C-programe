#include<stdio.h>
void main(){
	char name[20],i,len=0;
	puts("Enter a name:");
	gets(name);
	for(i=1;name[i];i++){
		if(name[i]==' ')
			len++;
	}
	printf("%c.",name[0]);
	for(i=0;name[i];i++){
		if(name[i]==' ')
			printf("%c.",name[i+1]);
	}
}
