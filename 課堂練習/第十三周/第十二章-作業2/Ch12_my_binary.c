/* 程式範例: Ch13_my_binary.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record { /* 記錄結構宣告 */
    char  A[30];
	char  name[50];
    int   G;
    float M;
    int E ;
};
typedef struct record student;

/* 主程式 */ 
int main(void) 
{
    FILE  *fpin,  *fpout;    
    char  finname[20]  = "hw12_input.dat";
    char  foutname[20] = "hw12_binary.dat";
    student temp;

    fpin  = fopen(finname, "r");     /* 開啟文字檔案(讀) */
    fpout = fopen(foutname, "wb");   /* 開啟二進位檔案(寫) */

    if (fpin != NULL) {
    	while (fscanf(fpin, "%s  %s %d %f %d",temp.A ,temp.name, &temp.G , &temp.M , &temp.E) != EOF) {    
    	    printf("%s  %s %d %.2f %d\n",temp.A ,temp.name, temp.G , temp.M , temp.E);      /*測試讀檔是否成功 */ 
    	    
       		/* 寫入記錄資料 */ 
            fwrite(&temp, sizeof(temp), 1, fpout);  /* 寫入檔案 */       		
    	}
    	printf("%s 建檔完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    	fclose(fpout);                    /* 關閉檔案 */

    	fpin = fopen(foutname, "rb");     /* 開啟二進位檔案(讀) */

    	while (fread(&temp, sizeof(temp), 1, fpin) == 1) {    /* fread會回傳所讀到單位長度的數量 藉此判斷檔案是否結束 */ 
       		printf("%s  %s %d %.2f %d\n",temp.A ,temp.name, temp.G , temp.M , temp.E); 
    	}
    	printf("%s 讀檔測試完成\n\n", foutname);

    	fclose(fpin);                     /* 關閉檔案 */ 
    } else {
    	printf("%s 開檔失敗\n", finname);
	}
        
    //system("PAUSE");
    return 0;
}

