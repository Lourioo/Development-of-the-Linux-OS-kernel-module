#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Laura, Beibars, Zhanibek and Diana");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("0.01");

static int __init hello_init(void) {
    printk(KERN_INFO "Hello Arailym!\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye teacher.\n");
}

module_init(hello_init);
module_exit(hello_exit);
