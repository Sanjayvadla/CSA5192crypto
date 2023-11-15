 #include<stdio.h>
#include<string.h>
int main(){
	char key[30],plain[30],cipher[30];
	int l1,i,j,l=0,k,d=97;
	printf("Enter the plain text : ");
	scanf("%s",&plain);
	printf("Enter the key : ");
	scanf("%s",&key);
	if((strlen(plain)/strlen(key))*strlen(key) == strlen(plain))
	    l1=(strlen(plain)/strlen(key));
	else
	    l1=(strlen(plain)/strlen(key))+1;

	
	char mat[l1][strlen(key)];
	for(i=0;i<l1;i++){
		for(j=0;j<strlen(key);j++){
			mat[i][j]=plain[l];
			l=l+1;
		}
	}
		for(i=0;i<l1;i++){
		for(j=0;j<strlen(key);j++){
			if(!isalpha(mat[i][j])){
			mat[i][j]=(char)d;
			d=d+1;
		}
		}
	}
	
	if(l1*strlen(key)>strlen(plain)){
		k=l1-strlen(plain);
	}
		for(i=0;i<l1;i++){
		for(j=0;j<strlen(key);j++){
    		printf("%c ",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Encrypted form : ");
		for(i=0;i<l1;i++){
		for(j=0;j<strlen(key);j++){
    		printf("%c",mat[j][i-1]);
	}
	printf("\n");
	}
}
