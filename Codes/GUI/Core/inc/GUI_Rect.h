#ifndef __GUI_RECT_H
#define __GUI_RECT_H

#include "GUI_Typedef.h"

GUI_BOOL GUI_Val2Rect(GUI_RECT *pDst,
    int x0, int y0, int xSize, int ySize);
GUI_BOOL GUI_RectOverlay(GUI_RECT *pDst, GUI_RECT *a, GUI_RECT *b);
void GUI_RectSum(GUI_RECT *pDst, GUI_RECT *a, GUI_RECT *b);
GUI_BOOL GUI_CheckPointAtRect(int x, int y, GUI_RECT *Rect);
GUI_BOOL GUI_CheckRectNull(GUI_RECT *Rect);
GUI_BOOL GUI_CheckRectIntersect(GUI_RECT *pRect1, GUI_RECT *pRect2);
GUI_BOOL GUI_RectInclude(GUI_RECT *pSrc, GUI_RECT *pDst);
void GUI_MoveRect(GUI_RECT *Rect, int dX, int dY);

#endif /* __GUI_RECT_H */
