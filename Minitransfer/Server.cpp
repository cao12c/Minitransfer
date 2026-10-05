#include <iostream>
#include <winsock2.h>
void printInfo(const char* info)
{
    std::cout << info << std::endl;
}

int main()
{
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0)
    {
        printInfo("winsock starup failed");
    }
    else
    {
        printInfo("Winsock initialized");
    }
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (serverSocket == INVALID_SOCKET)
    {
        printInfo("socket creation failed");
        WSACleanup();
        return 1;
    }
    else
    {
        printInfo("socket created successfully");
    }
    closesocket(serverSocket);
    WSACleanup();
    return 0;
} 