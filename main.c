#include <linux/module.h>

static int __init helloworld_init(void)
{
	pr_info("hello_world\n");
	return 0;
}

static void __exit helloworld_cleanup(void)
{
	pr_info("GoodBye_world\n");

}



module_init(helloworld_init);
module_exit(helloworld_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ME");
MODULE_DESCRIPTION("A simple hello world kernel");
MODULE_INFO(board,"bbb REV_A5");

