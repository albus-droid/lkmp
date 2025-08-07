#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init panic_init(void) {
   panic("intentional panic from albin")
   return 0;
}

static void __exit panic_exit(void) {
	// never reached
}

module_init(panic_init);
module_exit(panic_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A module that panics everytime");
MODULE_AUTHOR("Albin Babu Varghese");
