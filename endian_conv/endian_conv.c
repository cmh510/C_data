#include <stdio.h>
#include <winsock2.h> //** �߿�(����=������ ����)
void ErrorHandling(char* message); //���� ó���ϴ� �Լ�

int main(int argc, char* argv[])
{
    WSADATA   wsaData;
    unsigned short host_port = 0x1234;  //unsigned : �����(������ x) -> �ּ��̱� ����
        // cpu�� �ִ� ��ǻ�� -> ȣ��Ʈ
    unsigned short net_port; //��Ʈ��ũ    ��Ʈ��ȣ(16��Ʈ, 4����Ʈ) -> short
    unsigned long host_addr = 0x12345678; // addr -> ip�ּ�(32��Ʈ, 8����Ʈ) -> long
    unsigned long net_addr;

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) 
        ErrorHandling("WSAStartup() error!");

    net_port = htons(host_port);//htons => ȣ��Ʈ -> ��Ʈ��ũ ��Ʈ ��ȯ
    net_addr = htonl(host_addr);//htonl => ȣ��Ʈ -> ��Ʈ��ũ ip �ּ� ��ȯ
    // ȣ��Ʈ�� ��Ʋ�ص��, ��Ʈ��ũ�� ��ص��
    // ��Ʋ�ص�� => ��ص��

    printf("Host ordered port: %#x \n", host_port);   //Host ordered port: 0x1234
    printf("Network ordered port: %#x \n", net_port);   //Network ordered port: 0x3412
    printf("Host ordered address: %#lx \n", host_addr);   //Host ordered address: 0x12345678
    printf("Network ordered address: %#lx \n", net_addr);  //Network ordered address: 0x78563412
    WSACleanup();
    return 0;
}

void ErrorHandling(char* message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}