#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char plain[50],ceaser[40];
	int key,i,j,h;
	printf("enter the plain text : ");
	scanf("%s",&plain);
	printf("enter the key : ");
	scanf("%d",&key);
	h=strlen(plain);
	printf("Encrypted form : ");
	for(i=0;i<h;i++){
		if(isupper(plain[i])){
		int ch=plain[i];
		ch=ch+key;
		printf("%c",ch);}
	else if(islower(plain[i])){
		plain[i]=toupper(plain[i]);
		int ch=plain[i];
		ch=ch+key+32;
		printf("%c",ch);}	
	}		
}
