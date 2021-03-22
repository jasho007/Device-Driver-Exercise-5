#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/kthread.h>
#include<linux/sched.h>
#include<linux/time.h>

int init_module(void)
{
int x,y,z;
x=2;
y=3;

z = x * y ;

printk(KERN_INFO "the muntipllication of x and y is  %d  \n",z);
return 0;
}

void cleanup_module(void){
printk(KERN_INFO "Thank You\n");
}
