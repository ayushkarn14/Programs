#include <bits/stdc++.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 8192
int main(int argc,char *argv[]){
    int fd1,fd2,n;
    char buf[BUF_SIZE];
    if(argc !=3) exit(-1);
    fd1=open(argv[1],O_RDONLY);
    if(fd1<0) exit(-1);
    fd2=open(argv[2],O_CREAT|O_WRONLY,S_IRUSR);
    if(fd2<0) exit(-1);
    while(n=read(fd1,buf,BUF_SIZE))
        write(fd2,buf,n);
    close(fd1);
    close(fd2);
}