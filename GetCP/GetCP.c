#include <WinNls.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    if (argv[1] == "acp") {
        printf("%d", GetACP());
    }
    else if (argv[1] == "oemcp") {
        printf("%d", GetOEMCP());
    }
    else {
        print("Usage:\n%s (acp|oemcp)", argv[0]);
    }
    return 0;
}
