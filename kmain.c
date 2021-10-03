#include "io.h"
#include "serial.h"
#include "framebuffer.h"

extern int fb_write(char* buf, unsigned int len);

/**************************************************************************/

int sum_of_three(int arg1, int arg2, int arg3)
{
	return arg1 + arg2 + arg3;
}

/***************************************************************************/

char myname[] = "Test";
unsigned int size = 4;

void kmain()
{
	fb_write(myname, size);
}
