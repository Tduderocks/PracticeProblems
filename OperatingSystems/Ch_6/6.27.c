
#include <windows.h>
#define MAX_RESOURCES 5
int available_resoureces = MAX_RESOURCES;
/*decrease available _resources by count resources 
return 0 if sufficient resources available
otherwise return -1*/
int decrease_count(int count){
    wait();
    if(available_resoureces < count){
        return -1;

    }
    else {
        available_resoureces -=count;
        signal();
        return 0;
    }
    
}
/*increase available_resources by count*/
int increase_count(int count) {

    available_resoureces += count;
    return 0;
}
//race condition: if two differnant process return and/or want a resource at the same time
//location: line 
//add a semafore to fix it
//wait. signal
//part a: the available resources . line 11
