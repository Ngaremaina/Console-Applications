#include <stdio.h>
#include <string.h>
#include "KnockKnockProtocol.c"

int main(char *argv[])
{
    char hostname;
    if (argv.length!=2){
        printf("Usage:java EchoClient <host name> <port number>");
        exit;
    }
    hostname=argv[0];
    int portnumber=int(args[1]);

    try(Socket kkSocket=Socket(hostname, portnumber));
    printWriter out=new PrintWriter(kkSocket);


}
