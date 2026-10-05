#include <iostream>
#include <winsock2.h>
void printInfo(const char* info)
{
    std::cout << info << std::endl;
}

int main()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (wsadata!=0)
    {
        printInfo("winsock starup failed");
    }
    else
    {
        printInfo("Winsock initialized");
    }
    WSACleanup();
    return 0;
} 