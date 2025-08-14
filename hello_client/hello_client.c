//Ŭ���̾�Ʈ ���α׷�
//IP�ּҿ� ��Ʈ��ȣ�� ����Ͽ� ������ �����ϰ�, �����κ��� �޽����� �޾� ����ϴ� ���� ����
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>	// ������ ���� �̿� �������

void ErrorHandling(char* message); // ���� ó�� �Լ� ����

int main(int argc, char* argv[])
{
	WSADATA wsaData;		// ������ ���� ����ϱ� ���� ����ü ����
	SOCKET hSocket;	// ������ ������ ����
	SOCKADDR_IN servAddr;	// ���� �ּ� ��� ����

	char message[30];	// �޽��� ���� �迭 ũ��(30)
	int strLen;	// ���ڿ� ������ ���

	if (argc != 3)	// ����� ���ڰ� 3�� ���;� ��
	{
		printf("�ùٸ� ���� : %s <IP> <port>\n", argv[0]);	// 3���� �� ������ �ùٸ� ����� �˷��ְ�
		exit(1);	// ���α׷� ����
	}	// ex) hello_client(���ϸ�) -> 127.0.0.1(ip �ּ�) -> 9190(��Ʈ��ȣ)

	// 1) WSAStartup() : Windows ���� �ʱ�ȭ�� ���� �Լ�
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		ErrorHandling("WSAStartup() error!");

	//�� ��ȭ�� �常
   //���� ����(�����׼���) ����
	// 2) socket()
	hSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hSocket == INVALID_SOCKET)
		ErrorHandling("socket() error");

	// 3) memset() : �ּ����� �ʱ�ȭ
	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr(argv[1]);
	servAddr.sin_port = htons(atoi(argv[2]));


	// 4) connect() :  ������ IP �ּҿ� ��Ʈ ��ȣ�� ������ �õ�, ��ȭ�� �Ǵ�.
	if (connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR)
		//SOCKADDR ����ü�� ����Ͽ� ������ �ּ� ������ ����
		ErrorHandling("connect() error!");


	// 5) receive() : �������κ��� �����͸� ����
	strLen = recv(hSocket, message, sizeof(message) - 1, 0);
					// �����κ��� �޽����� ���� ����
	if (strLen == -1)
		ErrorHandling("read() error!");	// ���� ���� �� ���� �Լ� ȣ���Ͽ� �̵�
	printf("������ ���� �� �޽���: %s \n", message); // �޽��� ���


	// 6) closesocket() : ���� ���� ����
	closesocket(hSocket);

	// 7) WSACleanup() : ���� ���̺귯���� ����
	WSACleanup();
	return 0;
}


// ���� ó�� �Լ�
void ErrorHandling(char* message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}