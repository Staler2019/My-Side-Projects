#pragma once

#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#pragma comment(lib, "WINMM.lib")// �ޤJwinmm.lib�A�s����windows�h�C�骺�sĶ

BOOL Open_MCImidi(void);
void gm_reset(void);
void Write_MCImidi(int num, unsigned char *buf);
void change_Timbre(int number);