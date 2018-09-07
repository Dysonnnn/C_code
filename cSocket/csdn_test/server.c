#include<stdio.h>
#include<stdlib.h>
#include<winsock2.h>

#pragma comment(lib, "ws2_32.lib")

const int BACK_LOG = 5;

int main(int argc, char * argv[])
{
	//��ʼ���׽���
	WSADATA wsaData;
	int ret = WSAStartup(MAKEWORD(2, 4), &wsaData);
	if (0 != ret){
		fputs("WSAStartup error\n", stderr);
		return 1;
	}

	//�����׽���
	SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (INVALID_SOCKET == sock) {
		fputs("socket() error\n", stderr);
		WSACleanup();
		return 1;
	}

	//���׽���
	SOCKADDR_IN sockAddr;
	memset(&sockAddr,0,sizeof(SOCKADDR_IN));
	sockAddr.sin_family = AF_INET;//Э��أ�һ����AF_INET��ʾTCP/IPЭ��
	sockAddr.sin_addr.S_un.S_addr = htonl(ADDR_ANY);//��ʾIP��ַ
	sockAddr.sin_port = htons(7);//��ʾ�˿�

	ret = bind(sock, (SOCKADDR*)&sockAddr, sizeof(sockAddr));
	if (SOCKET_ERROR == ret) {
		fputs("bind() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//�����׽���
	ret = listen(sock, BACK_LOG);
	if (SOCKET_ERROR == ret) {
		fputs("listen() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//�����׽���
	SOCKADDR_IN clientAddr;
	int szClientAddr = sizeof(clientAddr);

	SOCKET clientSock = accept(sock, (SOCKADDR*)&clientAddr, &szClientAddr);

	if (INVALID_SOCKET == clientSock){
		fputs("accept() error\n", stderr);
		closesocket(sock);
		WSACleanup();
		return 1;
	}

	//�շ�����
	TCHAR buff[256];
	memset(&buff,0,sizeof(buff));

	recv(sock,buff,sizeof(buff),0);//recv()���ض�����ֽ���

	TCHAR buff2[] = "QUIT\n";
	send(sock, buff2, sizeof(buff2), 0);//�ɹ��򷵻�ʵ�ʴ��ͳ�ȥ���ַ���

	//������Դ
	closesocket(sock);
	closesocket(clientSock);
	WSACleanup();
	
	return 0;

}
