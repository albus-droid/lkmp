#include <linux/module.h>
#include <linux/kernel.h>

int int_module(void) {
   printk(KERN_ALERT "Hello ,World!");
   return 0;
}
