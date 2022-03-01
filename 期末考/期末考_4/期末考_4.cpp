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

/* 主程式 */ 
int main(void) 
{
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "testin.txt";
    char  foutname[20] = "stud_bin.out";
    student t;

    fpin  = fopen(finname, "r");     /* 開啟文字檔案(讀) */
    fpout = fopen(foutname, "wb");   /* 開啟二進位檔案(寫) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%d  %s %d %f ",t.ID ,t.name, &t.sex , &t.score ) != EOF) {    
    	    printf("%d  %s %d %f \n",t.ID ,t.name, t.sex , t.score);      /*測試讀檔是否成功 */ 
    	    
       		/* 寫入記錄資料 */ 
            fwrite(&temp, sizeof(temp), 1, fpout);  /* 寫入檔案 */       		
    	}
    	printf("%s 建檔完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    	fclose(fpout);                    /* 關閉檔案 */

    	fpin = fopen(foutname, "rb");     /* 開啟二進位檔案(讀) */

    	while (fread(&temp, sizeof(temp), 1, fpin) == 1) {    /* fread會回傳所讀到單位長度的數量 藉此判斷檔案是否結束 */ 
       		printf("%d  %s %d %f \n",t.ID ,t.name, t.sex , t.score); 
    	}
    	printf("%s 讀檔測試完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    } else {
    	printf("%s 開檔失敗\n", finname);
	}
        
    //system("PAUSE");
    return 0;
}
