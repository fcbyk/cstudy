#include "notes.h"
#include <stdio.h>  //��ͷ�ļ����������ļ�ģ����
#define PI 3.1415   //������ų���
#define E 2.71

//�ؼ���
//auto
//break
//case char const continue
//default do double
//else enum extern
//float for
//goto
//if int
//long
//register return
//short signed signed sizeof static struct switch
//typedef
//union unsigned
//void volatile
//while

//����
//���������������ֺͺ�����������
//������ʽ��[����ֵ����]+��������ʶ��([�β�]){ ������ }
function(){
    printf("hello world");
    /* ��Ȼֻ��һ��������Ҳ���Ա������� */
    /* ����������ֵ��Ĭ�Ϸ���int*/
}

//�����ͱ���
void var(){
    /**
     * �����Ķ���������
     * 1��Ԥ��������#defineָ�����ų���
     * 2��ʹ��const�ؼ��ֶ��峣����,���������ܱ����¸�ֵ
     */
    const int y = 2022;
    printf("%d\n",y);

    /**
     * �������������͸�ֵ����ʼ����������
     * ���ﲻ׸�������������������
     */
}

//��������-������������
//�������ͷֻ����������͡����顢�ṹ�塢�����塢ö�١������͡�ָ�롢����
void basicDataType(){
    /* ���� */
    short a1=32767;
    int a2=2147483647;
    long a3=2147483647;

    /* �������д�����������д���ʱִ��Ч����һ���� */
    signed short b1=32767;
    signed int b2=2147483647;
    signed long b3=2147483647;
    /* signed�ؼ������Σ���ʾ�з�������Ĭ��Ϊ�з����������Կ��Բ��ü�signed */

    unsigned short a4=65535;
    unsigned int a5=4294967295;
    unsigned long a6=4294967295;
    /* unsigned�ؼ������Σ���ʾ�޷������������ܴ洢���� */

    /* �ַ��� */
    char a7= "��";

    /* ʵ�ͣ������ͣ� */
    float a8= 43243.4234;
    double a9= 34234.4234;
    long double a10= 43244324.32432434;

    /* c�����л�������û�в����ͣ�Ҳû��String�ַ��� */
}

//��������-����
void arr(){
    int arr1[5];
    /* ��������ʱ��Ҫ�趨�����С */

    int arr2[5]={1,2,3,4,5};
    /* �������鲢��ʼ�� */

    /* ������� */
    int i,u;
    for ( i = 0; i < 5; i++){
        printf("%d\n",arr2[i]);
    }

    /* ��ά���� */
    printf("-----------------------");
    int arr3[2][3]={9,8,7,6,5,4};
    for ( i = 0; i < 2; i++){
        for(u=0;u<3;u++){
            printf("%d\n",arr3[i][u]);
        }
    }
}

//��������-�ṹ��
/**����ṹ��
 * ��ʽ1��
 * struct �ṹ��{
 *      ������ �ṹ��Ա1;
 *      ������ �ṹ��Ա2;
 *      .....
 *      ������ �ṹ��Աn;
 * }
 *
 * ��ʽ2��
 * struct �ṹ��{
 *      ������ �ṹ��Ա1;
 *      ������ �ṹ��Ա2;
 *      .....
 *      ������ �ṹ��Աn;
 * }�ṹ��������
 *
 * ��ʽ3��
 * struct{
 *      ������ �ṹ��Ա1;
 *      ������ �ṹ��Ա2;
 *      .....
 *      ������ �ṹ��Աn;
 * }�ṹ��������
 */

/* ����ṹ�� */
struct student
{
    int num;/* ѧ�� */
    char name[10];/* ���� */
    int computer,english,math;/* 3�ſγ̳ɼ� */
    double average;/* ����ƽ���ɼ� */
};

/* ����ṹ�岢�����ṹ���� */
struct student2
{
    int num;
    char name[10];
    int computer,english,math;
    double average;
}a3,a4;

/**
 * ����ṹ�岢�����ṹ����
 * �����治ͬ������ṹ��û������
 * �ڴ������޷��ڶ���������͵������ṹ�����
 */
struct{
    int num;
    char name[10];
    int computer,english,math;
    double average;
}a5,a6;


void stru(){
    struct student a1,a2;
    /* ����ṹ�����a1��a2�����������Ͷ�Ϊstruct student */

    struct student a7 = {101,"����",78,87,85};
    /* �ṹ���ʼ�� */

    a1.num=100;
    /* �ṹ�嵥����ֵ */

    printf("%s\n",a7.name);
    printf("%d\n",a1.num);
    /* �ṹ����� */
}

//��������-������
/**����������ͬ�ṹ������һ���������ڹ�������
 * ���ڶ�������ṹ������ʮ������
 * �ṹ��(struct)��������(union)�������������ڴ�����
 * ��ʽ1��
 * union ��������{
 *      ������ ��Ա1;
 *      ������ ��Ա2;
 *      .....
 *      ������ ��Աn;
 * }
 * ��ʽ2��
 * union ��������{
 *      ������ ��Ա1;
 *      ������ ��Ա2;
 *      .....
 *      ������ ��Աn;
 * }�������������
 * ��ʽ3��
 * union{
 *      ������ ��Ա1;
 *      ������ ��Ա2;
 *      .....
 *      ������ ��Աn;
 * }�������������
 */
void uni(){

    /* �ȶ��干�������ͣ��ٶ��干������� */
    union data{
        int m;
        float x;
        char c;
    };
    union data a1, a2;

    /* ���干�������͵�ͬʱ���干������� */
    union data2{
        int m;
        float x;
        char c;
    }a3, a4;

    /* ֱ�Ӷ��干�������,���������ٶ��� */
    union {
        int m;
        float x;
        char c;
    }a5, a6;

    a6.m=10086;
    printf("%d\n",a6.m);
}

//��������-ö��
/**
 * ���һ������ֻ�м��ֿ��ܵ�ֵ������Զ���Ϊ"ö������"
 * ��ν"ö��"���ǰѿ��ܵ�ֵһһ���оٳ�����������ֵֻ�����оٳ�����ֵ�ķ�Χ
 *
 * ��ʽ��
 * enum ö������{
 *    ö�ٳ�Ա�б�(�Զ��ŷָ�)
 * }
 *
 */
enum Spectrum{
    red,black,yellow,blue,white
}i1;

void enu(){
    i1 = black;

    switch (i1)
    {
        case red:printf("red");break;
        case black:printf("black");break;
        case yellow:printf("yellow");break;
        default:printf("blue");
    }
}


//��������-ָ��
/**
 * ��ŵ�ַ�ı���Ϊָ�����
 * ������ʽ�������� *ָ�������ʶ��
 */
void pointer(){
    int i=100;
    int *p;/* ����һ��ָ����� */
    p = &i;/* &Ϊ��ַ���������i�����ĵ�ַ��ֵ��ָ�����p */

    printf("%d\n%d\n",i,*p);
    /**
     * ����i��*p�������ֵ��һ����
     * "*"�������ڶ���ָ������⣬�������ڷ���ָ����ָ��ı���
     * ��Ҳ��Ϊ��ӷ��������
     */
    printf("%p\n",p);

    struct student
    {
        int num;
        char name[10];
        int computer,english,math;
        double average;
    };

    struct student stu = {101,"zhang",78,87,85},*pa;
    pa=&stu;

    /* ����������䣬Ч��һ�� */
    stu.num =200;
    (*pa).num = 200;
    pa->num = 200;
    /* ->Ϊָ�������������ָ��ָ��Ľṹ��Ա�������Ա */

    printf("%d\n", stu.num);


    /* ָ�����飺��һ�����飬����Ԫ��Ϊָ�� */
    long* pe[10];
    long pi[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int w = 0; w < 10; w++)
    {
        pe[w] = &pi[w];
        printf("%p\n", pe[w]);
    }

    printf("-------------------------------------\n");
    /* ����ָ�룺��һ��ָ�룬ָ�������ָ�� */

    //һά����
    int app[5] = { 1, 2, 3, 4, 5 };
    //����Ϊ5������ָ�룬����������5��Ԫ��
    int(*ppp)[5];
    //������app�ĵ�ַ����ppp����pppΪ����app�ĵ�ַ����*ppp��ʾ����a����
    ppp = &app;

    printf("%p\n", *ppp); //*ppp��ʾ����app����һ�����������Ԫ�ص�ַ����ʶһ������
    printf("%p\n", &app[0]); //������Ԫ�صĵ�ַ

    //�������д���Ч��һ��
    printf("%d\n", *ppp[0]);    /* ͨ����ӷ��������ȥ����ָ��ָ�������Ԫ�� */
    printf("%d\n", app[0]);
}