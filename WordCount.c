#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)
int main(int argc,char*argv[])
{
	FILE *fp;
	int num1 = 0,num2 = 0;

    if(argc==3)
	{
    	
		fp = fopen(argv[2],"r");        //��ȡ�ļ�������
		 
		if(fp == NULL)
		{
			printf("�����޷���\n");
			return 0;
		}
       if(!strcmp(argv[1],"-c"))	
		{
	        char ch;
			while((ch=fgetc(fp))!=EOF)
			{
				num1++;
			}
			rewind(fp);
	     	printf("�ַ���Ϊ��%d\n",num1);
	    }else if(!strcmp(argv[1],"-w")){
		    char ch=fgetc(fp);
		    while((ch=fgetc(fp))!=EOF)
			{
			 if (ch == ' ' || ch == ','){
				num2++;
			}
			}
			fclose(fp);
		printf("������Ϊ��%d\n",num2); 
		}
	}
	else 
	{
		printf("���󣺲��������������������\n");
	}
	return 0;
}
