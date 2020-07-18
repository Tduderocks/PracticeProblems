#include <windows.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    HANDLE hMapFile;
    LPVOID lpMapAddress;
    hMapFile = OpenFileMapping(FILE_MAP_ALL_ACCESS, // read wirte acceess
    FALSE, //no inheritance
    TEXT("SharedObject")); //name of mapped file object
    lpMapAddress = MapViewOfFile(hMapFile, //mapped obect handle
    FILE_MAP_ALL_ACCESS, //read wirte access
    0, //mapped view of entire file
    0,
    0);
    //read from shared memory
    printf("Read Message %s", lpMapAddress);
    UnmapViewOfFile(lpMapAddress);
    CloseHandle(hMapFile);
}