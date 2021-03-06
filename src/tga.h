#ifndef __TGA_FILE_FORMAT__
#define __TGA_FILE_FORMAT__
#include <stdint.h>

struct tga_header {
    uint8_t id_length;
    uint8_t cmap_type;
    uint8_t img_type;
    uint8_t cmap_spec[5];
    uint8_t img_spec[10];
};

void construct_header(struct tga_header *);
bool write_file (char * name, uint8_t * pic);
#endif