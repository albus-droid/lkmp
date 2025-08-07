#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>

static int repeat = 3;
static char *msg = "Hello, World!";

module_param(repeat, int, S_IRUSR | S_IWUSR);
MODULE_PARM_DESC(repeat, "count for message");
module_param(msg, charp, 0000);
MODULE_PARM_DESC(msg, "message");

static int __int hello_init(void)
{
   int i;
   for (i = 0; i < repeat; i++)
	   printk(KERN_INFO "%s (%d/%d)\n", msg, i+1, repeat);
   return 0;
}

static void __exit hello_exit(void)
{
   printk(KERN_INFO "Goodbye, World!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Albin Babu Varghese");
MODULE_DESCRIPTION("A Hello World module with params");
