#ifndef __SIMULATE_LCD_H
#define __SIMULATE_LCD_H

#include "Windows.h"

/* ģ���豸�ṹ�� */
typedef struct {
    HWND hwnd;
    HDC hdc, hFrame;
    HBITMAP hBmp;
    COLORREF *PixBuf;
    int win_w, win_h, BufSize;
    POINT tPad;
    char padStatus;
} SIM_DEVICE;

void simulate_lcd_start(void);
void sim_lcd_init(void);
int sim_getWidth(void);
int sim_getHeight(void);
void sim_drawPix(int x, int y, COLORREF Color);
COLORREF sim_readPix(int x, int y);
void sim_dispArea(int x, int y, int Width, int Height, COLORREF *Buffer, int rowlen);
void sim_updata(void);
void sim_pad_cleck(void);
void sim_pad_removed(void);

#endif