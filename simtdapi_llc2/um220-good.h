//------------------------------------------------------------------------------
// Copyright (c) 2017 SCUT Sensor network laboratory
//------------------------------------------------------------------------------
#ifndef __UM220_GOOD_H__
#define __UM220_GOOD_H__

typedef struct RMCmsg
{
    //UTCʱ��
    int   time_hh;     //Сʱ
    int   time_mm;     //����
    double time_ss;     //��
    //λ����Ч��ʶ,V��Ч,A��Ч
    char  status; 
    //γ��
    int   lat_du;      //��
    double lat_fen;     //��
    char  clat;        //γ��ָʾ,N��γ,S��γ
    //����
    int   lon_du;      //��
    double lon_fen;     //��
    char  clon;        //����ָʾ,E����,W����
    //����
    float spd;         //��
    float cog;         //��
    //UTC����
    int   date_dd;     //��
    int   date_mm;     //��
    int   date_yy;     //��
    //��ƫ��
    char  mv;           //��
    //��ƫ�Ƿ���           
    char  mvE;          //�̶�ΪE
    //��λģʽ
    char  mode;         //Nδ����,A���㶨λ
}stRMCmsg, *pstRMCmsg;

typedef struct tmpMsg
{
    char time[11];//UTCʱ��
    char status;//��Ч���
    char lat[12];//γ��
    char clat;//��γ������γ
    char lon[13];//����
    char clon;//��������
    char spd[10];//�������ʣ���
    char cog[10];//���溽�򣬵�λΪ�ȣ��ӱ�����˳ʱ�����
    char date[7];//UTC���ڣ�������
    char mode;//��λģʽ
}stTmpMsg, *pstTmpMsg;


/*  ָ�����,1���ӷ����ִ��һ�λ᲻��������*/
void parseData(char *buf, pstRMCmsg result);

/* 	������ڷ����ļ��������ͺ��� 	*/
/* 	����ļ����������ڶ�ȡGPS����	*/
int um220_init();

#endif 