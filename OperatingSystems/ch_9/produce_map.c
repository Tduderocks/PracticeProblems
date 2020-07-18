#include <windows.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    HANDLE hFile, hMapFile;
    LPVOID lpMapAddress;
    hFile = CreateFile("temp.txt", //fiel name
    GENERIC_READ | GENERIC_WRITE, //read write access
    0, //no sharing of the file
    NULL, //default security
    OPEN_ALWAYS, //open new or existing file
    FILE_ATTRIBUTE_NORMAL, //routine file attributes
    NULL); //no file template
    hMapFile = CreateFileMapping(hFile, //file ahndle
    NULL, //defalult security
    PAGE_READWRITE, //read wirte access to mapped pages
    0, //map enitre file (otherwise would have specified offset &size)
    0,
    TEXT("SharedObject")); //name shared memory object
    lpMapAddress = MapViewOfFile(hMapFile, //mapped object handle
    FILE_MAP_ALL_ACCESS, //read write accesss
    0, //mapped viwew of entire file
    0,
    0);
    //write to shared memory
    sprintf(lpMapAddress, "Shared Memory Message");
    UnmapViewOfFile(lpMapAddress);
    CloseHandle(hFile);
    CloseHandle(hMapFile);

}