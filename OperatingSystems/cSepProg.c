# include <windows.h>
#include <stdio.h>
int main(VOID)
//works
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
        //alloate memory
        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);
        ZeroMemory(&pi, sizeof(pi));
        //crates child process
        if(!CreateProcess (NULL, //use command line
        "C:\\WINDOWS\\system32\\mspaint.exe", //command line
        NULL, //dont inherit process handle
        NULL, //dont inherit thread handle
        FALSE, //disable thread inheritance
        0, //no creation flags
        NULL, //use parents enviornment block
        NULL, //use parents existing directory
        &si, 
        &pi))
        {
            fprintf(stderr, "Create Process failed");
            return (-1);
        }
        //parent will wait for the child to complete 
        WaitForSingleObject(pi.hProcess, INFINITE);
        printf("Child complete");
        //close handlers
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
}

  