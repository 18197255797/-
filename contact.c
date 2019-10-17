#define _CRT_SECURE_NO_WARNINGS  1
#include"Contact.h"


void InitContact(Contact*pCon);
{
	assert(pCon != Null);
	pCon->capticty = DEFAULT_SIZE;
	pCon->usedSize = 0;
	pCon->per = (PersonInfo *)malloc(sizeof(PersonInfo) * pCon->capticty);
	assert(pCon->per != NULL);
	memset(pCon->per, 0, sizeof(PersonInfo) * pCon->capticty);
}
//0;代表增容失败  1代表增容成功
static int CheckFull(Contact*Pcon)
{
	if (pCon->usedSizev == pCon->capticty)
	{
		PersonInfo*ptr = (PersonInfo*)realloc(pCon->per, pCon->capticty) * sizeof(PersonInfo) * 2);
	}
}

