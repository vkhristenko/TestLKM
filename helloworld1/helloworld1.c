#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int data __initdata = 10;

static int __init mod_init(void) {
    printk(KERN_INFO "Hello World! data = %d\n", data);

    return 0;
}

static void __exit mod_exit(void) {
    printk(KERN_INFO "Goodbye world!\n");
}

// macros to specify which functions are to replace init_module/cleanup_module
module_init(mod_init);
module_exit(mod_exit);
