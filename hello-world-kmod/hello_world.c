#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void) {
   printk(KERN_ALERT "Hello, World!");
   return 0;
}

static void __exit bye_exit(void) {
  printk(KERN_ALERT "Bye, World!");
}

module_init(hello_init);
module_exit(bye_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A module that prints Hello, World!");
