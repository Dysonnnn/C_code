#include<stdio.h>
#include<stdlib.h>
#include<winsock2.h>

#pragma comment(lib, "ws2_32.lib")

const int BACK_LOG = 5;

int main(int argc, char * argv[])
{
	//初始化套接字
	WSADATA wsaData;
	int ret = WSAStartup(MAKEWORD(2, 4), &wsaData);
	if (0 != ret){
		fputs("WSAStartup error\n", stderr);
		return 1;
	}

	//创建套接字
	SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (INVALID_SOCKET == sock) {
		fputs("socket() error\n", stderr);
		WSACleanup();
		return 1;
	}

	//绑定套接字
	SOCKADDR_IN sockAddr;
	memset(&sockAddr,0,sizeof(SOCKADDR_IN));
	sockAddr.sin_family = AF_INET;//协议簇，一般用AF_INET表示TCP/IP协议
	sockAddr.sin_addr.S_un.S_addr = htonl(ADDR_ANY);//表示IP地址
	sockAddr.sin_port = htons(7);//表示端口

	ret = bind(sock, (SOCKADDR*)&sockAddr, sizeof(sockAddr));
	if (SOCKET_ERROR == ret) {
		fputs("bind() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//侦听套接字
	ret = listen(sock, BACK_LOG);
	if (SOCKET_ERROR == ret) {
		fputs("listen() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//接收套接字
	SOCKADDR_IN clientAddr;
	int szClientAddr = sizeof(clientAddr);

	SOCKET clientSock = accept(sock, (SOCKADDR*)&clientAddr, &szClientAddr);

	if (INVALID_SOCKET == clientSock){
		fputs("accept() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//收发数据
	TCHAR buff[256];
	memset(&buff,0,sizeof(buff));

	recv(sock,buff,sizeof(buff),0);//recv()返回读入的字节数

	TCHAR buff2[] = "QUIT\n";
	send(sock, buff2, sizeof(buff2), 0);//成功则返回实际传送出去的字符数

	//回收资源
	closesocket(sock);
	closesocket(clientSock);
	WSACleanup();
	
	return 0;

}
