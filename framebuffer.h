#include "io.h"

/* ------------------------------------------------------------------------- */
/* ----------------------  Framebuffer --------------------------------------*/
/* ------------------------------------------------------------------------- */

#define FB_COMMAND_PORT         0x3D4
#define FB_DATA_PORT            0x3D5

/* The I/O port commands */
#define FB_HIGH_BYTE_COMMAND    14
#define FB_LOW_BYTE_COMMAND     15

#define FB_GREEN 		2
#define FB_DARK_GREY		8
#define FRAMEBUFFER_ADDRESS	0x000B8000

void fb_move_cursor(unsigned short pos);

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg);

int fb_write(char* buf, unsigned int len);

