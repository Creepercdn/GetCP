#include <WinNls.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    if (strcmp(argv[1],"acp")==0) {
        printf("%d", GetACP());
    }
    else if (strcmp(argv[1], "oemcp") == 0) {
        printf("%d", GetOEMCP());
    }
    else {
        printf("Usage:\n%s (acp|oemcp)", argv[0]);
    }
    return 0;
}
