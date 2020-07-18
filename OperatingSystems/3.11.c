//identifier of the shared memory segment
int segment_id;
shm_ds shmbuffer;
shmctl(segment_id, IPC_STAT, &shmbuffer);
