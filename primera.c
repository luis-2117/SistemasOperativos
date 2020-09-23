#include<unistd.h>
#include<stdio.h>
int main(void)
{
pid_t procid;
//printf("My current process id is %d \n",getpid());
procid=fork();
//printf("Fork ID%d\n",procid);
//printf("Calling fork%d \n",getpid());
if(procid ==0){
printf("Soy el proceso del hijo del proceso actual ");
}else{
printf("soy el proceso padre");
}
return 0;
}




