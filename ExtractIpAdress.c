#include <stdio.h>
#include <stdlib.h>

void extractIpAddress(const char *sourceString, short *ipAddress)
{
    int octetCount = 0;
    const char *token = strtok(sourceString, ".");
    
    while (token != NULL && octetCount < 4)
    {
        ipAddress[octetCount++] = atoi(token);
        token = strtok(NULL, ".");
    }
}

void printIpAddress(const short *ipAddress)
{
    printf("Ip Address: %03d. %03d. %03d. %03d\n", ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3]);
}

void printIpClass(const short *ipAddress)
{
    if (ipAddress[0] >= 0 && ipAddress[0] <= 127)
        printf("Class A Ip Address.\n");
    else if (ipAddress[0] > 127 && ipAddress[0] < 191)
        printf("Class B Ip Address.\n");
    else if (ipAddress[0] > 191 && ipAddress[0] < 224)
        printf("Class C Ip Address.\n");
    else if (ipAddress[0] > 224 && ipAddress[0] <= 239)
        printf("Class D Ip Address.\n");
    else if (ipAddress[0] > 239)
        printf("Class E Ip Address.\n");
}

int main()
{
    char ip[20];
    short ipAddress[4];

    printf("Enter IP Address (xxx.xxx.xxx.xxx format): ");
    scanf("%s", ip);

    extractIpAddress(ip, ipAddress);
    printIpAddress(ipAddress);
    printIpClass(ipAddress);

    return 0;
}