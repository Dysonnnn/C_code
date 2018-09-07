#ifndef __MY_SOCKET_H
#define __MY_SOCKET_H
#define MYPORT 1499
//#define MYSERVER "192.168.11.1"
#define MYSERVER "119.29.185.92"
#define BUFFER_SIZE 1024

extern unsigned char sendbuf[BUFFER_SIZE];
extern unsigned char recvbuf[BUFFER_SIZE];

char serconnect(void);
char sercommu(void);

#endif
