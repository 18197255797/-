#ifndef _CONTACT_H_
#define _CONTACT_H_
#include<assert.h>
#include<stdio.h>

#define  MAX_NAME 20
#define  MAX_TEL 11
#define  MAX_ADDR 15
#define  MAX_SEX 3
#define  MAX_NUMPERSON 1000
//printf("*********1.add*******2.search*************\n");
//printf("*********3.del*******4.clear**************\n");
//printf("*********5.show******6.sot****************\n");
//printf("*********0.exit***************************\n");


enum option
{
	ADD,
	SEARCH,
	DEL,
	CLEAR,
	SHOW,
	CLEAR,
	EXIT,
	DES
};





//个人信息
typedef struct  personlnfo
{
	//name  age tele addr sex 
	char name[MAX_NAME];
	short age;
	char tele[MAX_TEL];
	char tele[MAX_ADDR];
	char tele[MAX_SEX];
}personlnfo;
//通讯录
typedef struct  Contact
{
	personlnfo per[MAX_NUMPERSON];//相当于一个数组
	int usedSize;//被使用的个数，放入一个count++
}Contact;

void InitContact(Contact*con);




#endif//_CONTACT_H_