
#include<sys/types.h> #include<sys/stat.h> #include<fcntl.h> #include<stdio.h> #include<errno.h>
int main()
{
int fd,errno,len;
ssize_t ret;
char word[100];
char w[10]="Helloworld";
ssize_t nr; fd=open("/home/sony/statt.txt",O_RDWR);
 
if(fd==-1)
{
fprintf(stdout,"\nOpen error\n");
}
else
{
fprintf(stdout,"File opened\n"); start: nr=read(fd,word,100*sizeof(char)); if(nr==-1)
{
if(errno==EINTR)
goto start;
if(errno ==EAGAIN)
{
fprintf(stdout,"resubmit");
}
else
fprintf(stdout,"error");
}else
{
fprintf(stdout,"before writing"); fprintf("%s",word);
}
write(fd,w,10*sizeof(char)); fprintf(stdout,"afterwriting"); printf("%s",word);
}
}