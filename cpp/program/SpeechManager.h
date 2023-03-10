#pragma once
#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>
#include "../Object/Speaker.h"

using namespace std;

//�ݽ�������
class SpeechManager
{
public:

    //���캯��
    SpeechManager();

    //��������
    ~SpeechManager();

    int SpeechManagerLaunch();

    void show_Menu();

    void exitSystem();

    //����ѡ�� ����  12��
    vector<int>v1;

    //��һ�ֽ�������  6��
    vector<int>v2;

    //ʤ��ǰ��������  3��
    vector<int>vVictory;

    //��ű�� �Լ���Ӧ�� ����ѡ�� ����
    map<int, Speaker> m_Speaker;

    //��ʼ������
    void initSpeech();

    int m_Index;

    //��ʼ������12��ѡ��
    void createSpeaker();

    //��ʼ���� - �������̿���
    void startSpeech();

    //��ǩ
    void speechDraw();

    //����
    void speechContest();

    //��ʾ�������
    void showScore();

    //�����¼
    void saveRecord();

    //��ȡ��¼
    void loadRecord();

    //�ļ�Ϊ�յı�־
    bool fileIsEmpty;

    //�����¼
    map<int, vector<string>> m_Record;

    //��ʾ����÷�
    void showRecord();

    //��ռ�¼
    void clearRecord();
};

