#pragma once

#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#pragma comment(lib, "WINMM.lib")// 引入winmm.lib，連結到windows多媒體的編譯

BOOL Open_MCImidi(void);
void gm_reset(void);
void Write_MCImidi(int num, unsigned char *buf);
void change_Timbre(int number);