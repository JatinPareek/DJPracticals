#include <stdio.h>
void ipclassify(char *ip)
{
    unsigned int firstbyte, secondbyte, thirdbyte, fourthbyte;
    sscanf(ip, "%u.%u.%u.%u", &firstbyte, &secondbyte, &thirdbyte, &fourthbyte);

    if (firstbyte >= 0 && firstbyte <= 127)
    {
        printf("Class A\n");
        printf("255.0.0.0\n");
    }
    else if (secondbyte >= 128 && secondbyte <= 191)
    {
        printf("Class B\n");
        printf("255.255.0.0\n");
    }
    else if ()
}

/*#include <stdio.h>

// Function to classify the IPv4 address based on subnet
void classifyIP(const char* ip) {
    unsigned int firstByte, secondByte, thirdByte, fourthByte;
    sscanf(ip, "%u.%u.%u.%u", &firstByte, &secondByte, &thirdByte, &fourthByte);

    if (firstByte >= 1 && firstByte <= 127) {
        printf("Class A\n");
        printf("Default Subnet Mask: 255.0.0.0\n");
    } else if (firstByte >= 128 && firstByte <= 191) {
        printf("Class B\n");
        printf("Default Subnet Mask: 255.255.0.0\n");
    } else if (firstByte >= 192 && firstByte <= 223) {
        printf("Class C\n");
        printf("Default Subnet Mask: 255.255.255.0\n");
    } else if (firstByte >= 224 && firstByte <= 239) {
        printf("Class D (Multicast)\n");
    } else if (firstByte >= 240 && firstByte <= 255) {
        printf("Class E (Experimental)\n");
    } else {
        printf("Invalid IP address!\n");
        return;
    }

    printf("IPv4 Address: %s\n", ip);
}

int main() {
    char ip[16];

    printf("Enter an IPv4 address: ");
    scanf("%15s", ip);

    classifyIP(ip);

    return 0;
}
*/