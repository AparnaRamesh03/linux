#include<stdio.h> #include<fcntl.h> #include<errno.h> #include<string.h> int main()
{
int fd=open("/home/sony/statt.txt",O_RDWR); if(fd==-1)
{
printf("\nOpen error\n");
}
else
{
printf("File opened\n");
}
char c[100];
int sz=read(fd,c,100*sizeof(char));
if(sz==-1)
{
printf("Read error\n");
}
else
{
printf("Read success\n");
}
char w[11]="Hello World";
int qw=write(fd,w,11*sizeof(char)); if(qw==-1)
{
printf("Write error\n");
}
else
{
LAB-6
17MIS1065 Aparna.R
 
printf("Write success\n");
} read(fd,c,100*sizeof(char)); printf("%s",c);
printf("\n"); return 0;
}