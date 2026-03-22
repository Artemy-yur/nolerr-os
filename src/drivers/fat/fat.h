#ifndef INCL_DRIVER_FAT
#define INCL_DRIVER_FAT

#include "../../libs/types.h"

extern struct dev_info;

// Прототипы функций
int fat_init(struct dev_info* device);
int fat_probe(struct dev_info* device);

struct vfs_functions {
    int (*read)(unsigned char* file_name, unsigned char* dst);
    int (*write)(unsigned char* file_name, unsigned char src);
    int (*readdir)(unsigned char* dst);
    int (*getpart)(unsigned int* dst);
};
extern void* fat_funcs[];
#endif
