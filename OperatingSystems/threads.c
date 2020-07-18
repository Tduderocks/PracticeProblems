#include <windows.h>
#include<stdio.h>
DWORD Sum; //data is hsared by the threads
//the thread runs in htis seperater functino
DWORD WINAPI Summation(LPVOID Param)
{
    DWORD Upper = *(DWORD*)Param;
    for (DWORD i = 0; i<=Upper; i++)
        Sum +=i;
    return 0;
}
int main(int argc, char *argv[])
{
    DWORD ThreadId;
    HANDLE ThreadHandle;
    int Param;
    // perform some basic error checking
    //if (argc !=2){
       // fprintf(stderr, "An integer parameter is requred\n");
        //return -1;
    //}
    Param = atoi(argv[1]);
    //if (Param < 0){
       // fprintf(stderr, "An integer >=0 is required\n");
       // return -1;
    //}
    // create the thread
    ThreadHandle = CreateThread(
        NULL, //default security attrigutea
        0, //default stack sizw
        Summation, //thread function
        &Param, //parameter to thread functino
        0, //defaulst creatino flasgs
        &ThreadId); //returns the threaD IDENTIFIER
    //if (ThreadHandle !=NULL){
        //now wait for the thread to finish
    WaitForSingleObject(ThreadHandle, INFINITE);
        //close the thread handle
    CloseHandle(ThreadHandle);
    printf("sum = %d\n", Sum);
    //}
}
//prints "an int parameter is required"
//new version prints sum=0