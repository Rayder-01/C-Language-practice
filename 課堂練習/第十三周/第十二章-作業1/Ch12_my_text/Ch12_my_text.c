/* �{���d��: Ch13_my_text.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record { /* �O�����c�ŧi */
    char  A[30];
	char  name[50];
    int   G;
    float M;
    int E ;
};
typedef struct record student;

/* �D�{�� */ 
int main(void) 
{
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "hw12_input.dat";
    char  foutname[20] = "hw12_text.dat";
    student temp;

    fpin  = fopen(finname,  "r");     /* �}�Ҥ�r�ɮ�(Ū) */
    fpout = fopen(foutname, "w");     /* �}�Ҥ�r�ɮ�(�g) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%s  %s %d %f %d",temp.A ,temp.name, &temp.G , &temp.M , &temp.E) != EOF) {    
    	    printf("%s  %s %d %.2f %d\n",temp.A ,temp.name, temp.G , temp.M , temp.E);      /*����Ū�ɬO�_���\ */
			 
    	    /* �g�J�O����� */
       		fprintf(fpout, "%s  %s %d %.2f %d\n",temp.A ,temp.name, temp.G , temp.M , temp.E);
    	}
    	printf("%s ���ɧ���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    	fclose(fpout);                    /* �����ɮ� */

    	fpin = fopen(foutname, "r");     /* �}�Ҥ�r�ɮ�(Ū) */

    	while (fscanf(fpin, "%s  %s %d %f %d",temp.A ,temp.name, &temp.G , &temp.M , &temp.E) != EOF) {    
    	    printf("%s  %s %d %.2f %d\n",temp.A ,temp.name, temp.G , temp.M , temp.E);      /*����Ū�ɬO�_���\ */
		}
    	printf("%s Ū�ɴ��է���\n\n", foutname);

    	fclose(fpin);                     /* �����ɮ� */ 
    } else {
    	printf("%s �}�ɥ���\n", finname);
	}
     
    //system("PAUSE");
    return 0;
}
