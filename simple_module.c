#include <linux/init.h>
#include <linux/module.h>

static int my_init(void){
    int i;
    for(i=0;i<100;i++){
        printk(KERN_INFO "module cycle %d",i+1);
    }
    return 0;
}

static void my_exit(void){
    printk(KERN_INFO "module unloaded");
    return;
}

MODULE_AUTHOR("chaosman97");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A simple module with iterative printk statements");
module_init(my_init);
module_exit(my_exit);