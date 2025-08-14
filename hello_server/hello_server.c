//���� ���α׷�(���� �ִ� ��)
//Ŭ���̾�Ʈ�� �����Ͽ� "Hello World!" �޽����� ������ ����
#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>	//�߿� : ���� ���α׷��� ���� �������
void ErrorHandling(char* message); //����ó���ϴ� �Լ�

int main(int argc, char* argv[])
{
	WSADATA   wsaData;	//��������� �ʱ�ȭ������ ������ ���� ����
	SOCKET hServSock, hClntSock;	// ���� ���ϰ� Ŭ���̾�Ʈ ������ ���� ����
	SOCKADDR_IN servAddr, clntAddr;	//������ Ŭ���̾�Ʈ�� �ּ� ������
												//������ ����ü(���� �ٸ� Ÿ���� ������ ����)

	int szClntAddr;		//Ŭ���̾�Ʈ �ּ��� ũ��(������)�� ������ ����
	char message[] = "Hello World!";	//���ڿ�, Ŭ���̾�Ʈ ������ �޽���

	if (argc != 2)	//�����ų �� ������ڸ� 2�� ����ؾ� �ϴµ� �װ��� �߸����� ���
	{
		printf("�ùٸ� ���� : %s <port>\n", argv[0]);	//�ùٸ� ��� ���
		exit(1);	// ���α׷� ����
	}	// ex) hello_server -> ���ϸ� 9190 -> ��Ʈ��ȣ
	// 1) WSAStartup() : Windows ���� �ʱ�ȭ�� ���� �Լ� (**����)
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)		// �����ϸ� 0
		//2.2�� ���� ���̺귯���� ������ �ǹ�, 2.2 ������ ����ϰڴٴ� �ǹ�
		ErrorHandling("WSAStartup() error!");	//2.2�� �ƴϸ� ���� �Լ��� �̵�


	// 2) socket() : ���� ����(�����׼���) ����, �� ��ȭ�� ����
	hServSock = socket(PF_INET, SOCK_STREAM, 0);
	//���ο� ������ ����, PF_INET�� IPv4 ���������� ����ϰڴٴ� �ǹ�
	//SOCK_STREAM�� TCP ������ �ǹ�   
   //0: �������� �μ��Դϴ�. SOCK_STREAM ������ ��� ���������� �Ϲ������� TCP�� �⺻ ���������� �����ϱ� ���� 0���� ����
	if (hServSock == INVALID_SOCKET)	// ���� ���� �ȵ�?
		ErrorHandling("socket() error");		// ���� �Լ��� �̵�

	// 3) memset() :�ּ����� �ʱ�ȭ
	memset(&servAddr, 0, sizeof(servAddr));	//servAddr ����ü�� �ʱ�ȭ
	servAddr.sin_family = AF_INET;	//ipv4 (���ͳ�) �ּ�ü�� ����
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);	// ������ �ּ� ����
		//INADDR_ANY : ��� ip �ǹ�(�ip�� �ǵ� �����ϵ��� ����)
	servAddr.sin_port = htons(atoi(argv[1]));	// ��Ʈ��ȣ ����
	// addr -> ip �ּ� �ǹ�(32��Ʈ), port -> ��Ʈ��ȣ(16��Ʈ)

	// 4) bind() : ���Ͽ� �ּ����� �Ҵ�(IP�� PORT��ȣ�� �Ҵ�), ��ȭ��ȣ �ο�
	if (bind(hServSock, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR)
		ErrorHandling("bind() error");

	// 5) listen() : �����û�� ������ ������ ����(�����û ���ɻ��·� ����)
					// ��ȭ�� ��ٸ��� ����
	if (listen(hServSock, 5) == SOCKET_ERROR)
		ErrorHandling("listen() error");


	// 6) accept() : �����û�� �����Ǿ�� �������� �ۼ����� ����
					// ��ȭ�� �ɷ���
	szClntAddr = sizeof(clntAddr);	// Ŭ���̾�Ʈ �ּ��� ũ�⸦ ����
	hClntSock = accept(hServSock, (SOCKADDR*)&clntAddr, &szClntAddr);
	if (hClntSock == INVALID_SOCKET)
		ErrorHandling("accept() error");


	// 7) send() : ������ ���� Ŭ���̾�Ʈ���� �޽��� ����, ��ȭ�� ���� ��.
	send(hClntSock, message, sizeof(message), 0);
	//send() �Լ��� Ŭ���̾�Ʈ ������ ���� "Hello World!" �޽����� ����


	// 8) closesocket() : ���� ���� ����, ��ȭ ����
	closesocket(hClntSock); // Ŭ���̾�Ʈ ����
	closesocket(hServSock);	 // ���� ����

	// 9) WSACleanup() : ������ ���� ���̺귯�� ����(����)
	WSACleanup();
	return 0;
}


//������ �߻��� �����޽����� ����ϰ� �����ϴ� �Լ�
void ErrorHandling(char* message)
{
	fputs(message, stderr);	// �����޽��� ���
	fputc('\n', stderr);	// �� �ٲ�
	exit(1);	// ���α׷� ����
}