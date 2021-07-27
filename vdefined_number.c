#include <asm/linkage.h>

notrace int __vdso_defined_number(void)
{
    return 0xDEAD - 56339;
}