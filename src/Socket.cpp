/******************************
*   author: yuesong-feng
*   客户端、服务器共用
*   accept，connect都支持非阻塞式IO，但只是简单处理，如果情况太复杂可能会有意料之外的bug
*
******************************/
#include "Socket.h"
#include "tools.hpp"
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

Socket::Socket():fd(-1)
{
    fd=socket(AF_INET,SOCK_STREAM,0);   
    tools::assert(fd==-1,"socket error");
}

Socket::Socket(int _fd):fd(_fd)
{
    tools::assert(fd==-1,"socket error");
}