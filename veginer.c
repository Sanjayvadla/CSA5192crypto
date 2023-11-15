#include<stdio.h>
#include<string.h>
int main(){
	char plain[30],key[30];
	int i,j;
	printf("enter the plain text : ");
	scanf("%s",&plain);
	printf("Enter the key : ");
	scanf("%s",&key);

	printf("Encrypted form : ");
	for(i=0;i<strlen(plain);i++){
		int ch=plain[i];
		ch=ch-97;
		int ky=key[i];
		ky=ky-97;
		int g=((ch+ky)%26)+65;
		printf("%c",g);
	}

}
