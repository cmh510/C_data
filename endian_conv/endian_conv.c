#include <stdio.h>
#include <winsock2.h> //** 중요(윈속=윈도우 소켓)
void ErrorHandling(char* message); //에러 처리하는 함수

int main(int argc, char* argv[])
{
    WSADATA   wsaData;
    unsigned short host_port = 0x1234;  //unsigned : 양수만(음수는 x) -> 주소이기 때문
        // cpu가 있는 컴퓨터 -> 호스트
    unsigned short net_port; //네트워크    포트번호(16비트, 4바이트) -> short
    unsigned long host_addr = 0x12345678; // addr -> ip주소(32비트, 8바이트) -> long
    unsigned long net_addr;

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) 
        ErrorHandling("WSAStartup() error!");

    net_port = htons(host_port);//htons => 호스트 -> 네트워크 포트 변환
    net_addr = htonl(host_addr);//htonl => 호스트 -> 네트워크 ip 주소 변환
    // 호스트는 리틀앤디안, 네트워크는 빅앤디안
    // 리틀앤디안 => 빅앤디안

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