#include<stdio.h> #include<sys/wait.h> int main()
{
pid_t pid; int status;
pid=fork();
if(pid<0)
{
printf("Fork error\n"); }
else if(pid==0)
{
printf("Child process is terminated\n"); exit(0);
}
if(wait(&status)!=pid)
{
printf("Wait error");
}
else
{
printf("Parent is terminated permanently\n"); }
}