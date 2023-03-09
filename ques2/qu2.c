//Write a c program to copy the content of a file(file1.txt) into another file(file2.txt). Content of file1:C programming Language.

#include<stdio.h>
int main(int argc,char *argv[])

{
	if(argc<3)
	{
		printf("not valid");
	}
	else
	{
		char c[50];
		FILE *fp1;
		fp1=fopen(argv[1],"r");

		FILE *fp2;
		fp2=fopen(argv[2],"r");
		FILE *fpc;
		fpc=fopen("file1.txt","w");

		if(fpc==NULL)
		{
			perror("error");

			return -1;
		}

		while(fgets(c,50,fp1)!=NULL)
		{
			fprintf(fpc,"%s",c);
			fprintf(stdout,"%s",c);
		}
		fclose(fp1);

		while(fgets(c,50,fp2)!=NULL)
		{
			fprintf(fpc,"%s",c);
			fprintf(stdout,"%s",c);
		}

		fclose(fp2);
		fclose(fpc);
	}
	return 0;
}
