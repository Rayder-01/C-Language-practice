#include <stdio.h>
#include <stdlib.h> 
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

#define NUM 3
 
int main(void)
{
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
    student t;

    fpin  = fopen(finname, "r");     /* �}�Ҥ�r�ɮ�(Ū) */
    fpout = fopen(foutname, "wb");   /* �}�ҤG�i���ɮ�(�g) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%d  %s %d %f ",t.ID ,t.name, &t.sex , &t.score ) != EOF) {    
    	    printf("%d  %s %d %f \n",t.ID ,t.name, t.sex , t.score);      /*����Ū�ɬO�_���\ */ 
    	    
       		/* �g�J�O����� */ 
            fwrite(&temp, sizeof(temp), 1, fpout);  /* �g�J�ɮ� */       		
    	}
    	printf("%s ���ɧ���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    	fclose(fpout);                    /* �����ɮ� */

    	fpin = fopen(foutname, "rb");     /* �}�ҤG�i���ɮ�(Ū) */

    	while (fread(&temp, sizeof(temp), 1, fpin) == 1) {    /* fread�|�^�ǩ�Ū������ת��ƶq �Ǧ��P�_�ɮ׬O�_���� */ 
       		printf("%d  %s %d %f \n",t.ID ,t.name, t.sex , t.score); 
    	}
    	printf("%s Ū�ɴ��է���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    } else {
    	printf("%s �}�ɥ���\n", finname);
	}
        
    //system("PAUSE");
    return 0;
}
