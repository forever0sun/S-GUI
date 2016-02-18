#ifndef __GUI_QUEUE_H
#define __GUI_QUEUE_H

#include "GUI_Config.h"
#include "GUI_Typedef.h"

typedef u_32 GUI_PARAM;

/* ��Ϣ�ṹ�嶨�� */
typedef struct {
    u_16 MsgId;       /* ��Ϣ��� */
    GUI_hWin hWin;    /* Ŀ�괰�ھ�� */
    GUI_hWin hWinSrc; /* Դ���ھ��  */
    GUI_PARAM Param;  /* ���� */
} GUI_MESSAGE;

/* ���нṹ���� */
typedef struct {
    GUI_MESSAGE *pArray; /* ����ָ�� */
    u_16 Capacity;       /* ������������ */
    u_16 size;           /* ����Ŀǰ���ݵ�Ԫ���� */
    u_16 front;          /* ��ͷ */
    u_16 rear;           /* ��β */
} GUI_QUEUE;

GUI_QUEUE * GUI_QueueInit(u_16 Capacity);
void GUI_QueueDelete(GUI_QUEUE *pQue);
GUI_RESULT GUI_GetMessageQueue(GUI_QUEUE *pQue, GUI_MESSAGE *pMsg);
GUI_RESULT GUI_PostMessageQueue(GUI_QUEUE *pQue, GUI_MESSAGE *pMsg);

#endif /* __GUI_QUEUE_H */