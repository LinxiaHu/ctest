#include <iostream>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h> //open()
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
//驱动设备头文件
//驱动设备头文件，在/usr/src中，暂时无法加入include路径
//#include <linux/module.h>
//#include <linux/mm.h>
//#include <linux/init.h>
//#include <linux/cdev.h>
//#include <asm/io.h>
//#include <asm/system.h>
//#include <asm/uaccess.h>

using namespace std;

//全局函数声明及相关结构体开始
void *xmalloc(size_t size); //封装内存分配函数

typedef struct LNode{// 用于约瑟夫环
    int data;
    struct LNode *link;
}LNode, *LinkList;

//约瑟夫环，参数依次是：环的总人数，第一个开始报数的人，出列者喊的数
void JOSEPHUS(int, int, int);
void justForTest();


//全局函数声明及相关结构体结束


class LinuxSystemDemo {
public:
	LinuxSystemDemo(){};
	~LinuxSystemDemo(){};
	int fileSys();// file stat测试
	void forkT();// fork()测试
	int getPageSize();// 返回操作系统页面大小
	int pipeTest();// IPC管道
	void memoryMap();// mmap使用
};
