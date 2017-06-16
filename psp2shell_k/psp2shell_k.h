#ifndef _PSP2SHELL_K_H_
#define _PSP2SHELL_K_H_

#include <libk/stdbool.h>

#define P2S_KMSG_SIZE    0x1000

void kpsp2shell_set_ready(bool ready);

SceSize kpsp2shell_wait_buffer(char *buffers);

int kpsp2shell_get_module_info(SceUID pid, SceUID uid, SceKernelModuleInfo *info);

int kpsp2shell_get_module_list(SceUID pid, int flags1, int flags2, SceUID *modids, size_t *num);

#endif //_PSP2SHELL_K_H_