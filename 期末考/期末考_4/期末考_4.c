#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define NUM 3
 
int f1;
struct data
{
	int ID;
	char name[9];
	char sex;
	float score;
}student[NUM];


/* �D�{�� */ 
int main(void) 
{
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "testin.txt";
    char  foutname[20] = "stud_bin.out";
  

    fpin  = fopen(finname, "r");     /* �}�Ҥ�r�ɮ�(Ū) */
    fpout = fopen(foutname, "wb");   /* �}�ҤG�i���ɮ�(�g) */

    if (fpin != NULL) {
       		/* �g�J�O����� */ 
        fwrite(&student, sizeof(student), 1, fpout);  /* �g�J�ɮ� */       		
    
    	printf("%s ���ɧ���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    	fclose(fpout);                    /* �����ɮ� */

    	fpin = fopen(foutname, "rb");     /* �}�ҤG�i���ɮ�(Ū) */

    	while (fread(&student, sizeof(student), 1, fpin) == 1) {    /* fread�|�^�ǩ�Ū������ת��ƶq �Ǧ��P�_�ɮ׬O�_���� */ 
       		printf("%d  %s %d %f \n",student[0].ID ,student[0].name, student[0].sex , student[0].score); 
    	}
    	printf("%s Ū�ɴ��է���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    } else {
    	printf("%s �}�ɥ���\n", finname);
	}
        
    //system("PAUSE");
    return 0;
}
