#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/linkage.h>


notrace int __vdso_user_input(int value)
{	
	
	return value+1;
}



int user_input(int value)
    __attribute__((weak, alias("__vdso_user_input")));
 
