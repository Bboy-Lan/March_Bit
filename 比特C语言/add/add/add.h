#define _CRT_SECURE_NO_WARNINGS

//#pragma once 

//这两种写法都是一样的 
//都是为了防止多个文件（函数）等调用时防止相同头文件一次次的调用


#ifndef __ADD_H__
#define __ADD_H__

extern int ADD(int x, int y);

#endif