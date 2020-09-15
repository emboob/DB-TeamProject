
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[33];
};
static const struct sqlcxp sqlfpn =
{
    32,
    "C:\\MoveMove\\MoveMove\\MoveMove.pc"
};


static unsigned int sqlctx = 1195614403;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[7];
   unsigned int   sqhstl[7];
            int   sqhsts[7];
            void  *sqindv[7];
            int   sqinds[7];
   unsigned int   sqharm[7];
   unsigned int   *sqharc[7];
   unsigned short  sqadto[7];
   unsigned short  sqtdso[7];
} sqlstm = {13,7};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

 static const char *sq0003 = 
"select distinct movie_genre  from movie            ";

 static const char *sq0004 = 
"select distinct user_transportation  from users            ";

 static const char *sq0005 = 
"select distinct location_name  from location            ";

 static const char *sq0010 = 
"select MOVIE_TITLE ,MOVIE_GENRE ,MOVIE_RATING ,MOVIE_SCORE ,MOVIE_AGE ,MOVI\
E_ACTOR ,MOVIE_RUNNINGTIME  from movie where (MOVIE_GENRE=:b0 and MOVIE_RUNNI\
NGTIME between (:b1-50) and (:b1+50))           ";

 static const char *sq0012 = 
"select user_id ,p.PAYMENT_DATE ,(p.PAYMENT_DATE+p.PAYMENT_PERIOD) ,p.PAYMEN\
T_PERIOD ,b.PAYMENT_PRICE ,((p.payment_date+p.PAYMENT_PERIOD)-sysdate)  from \
payment p ,BILLINGHISTORY b where (user_id=:b0 and p.PAYMENT_DATE=b.PAYMENT_D\
ATE)           ";

 static const char *sq0025 = 
"select YOUTUBE_TITLE ,YOUTUBE_VIEWS ,YOUTUBE_GENRE ,YOUTUBE_RATING ,YOUTUBE\
_CHANNEL  from youtube  order by youtube_views desc             ";

 static const char *sq0026 = 
"select distinct YOUTUBE_GENRE  from youtube            ";

 static const char *sq0027 = 
"select YOUTUBE_TITLE ,YOUTUBE_VIEWS ,YOUTUBE_GENRE ,YOUTUBE_RATING ,YOUTUBE\
_CHANNEL  from youtube where youtube_genre=:b0           ";

 static const char *sq0028 = 
"select distinct YOUTUBE_CHANNEL  from youtube            ";

 static const char *sq0029 = 
"select YOUTUBE_TITLE ,YOUTUBE_VIEWS ,YOUTUBE_GENRE ,YOUTUBE_RATING ,YOUTUBE\
_CHANNEL  from youtube where youtube_channel=:b0           ";

 static const char *sq0030 = 
"select YOUTUBE_TITLE ,YOUTUBE_VIEWS ,YOUTUBE_GENRE ,YOUTUBE_RATING ,YOUTUBE\
_CHANNEL  from youtube            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,840,0,0,
5,0,0,1,92,0,4,78,0,0,4,2,0,1,0,2,97,0,0,2,97,0,0,1,97,0,0,1,97,0,0,
36,0,0,2,55,0,4,139,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
59,0,0,3,51,0,9,156,0,0,0,0,0,1,0,
74,0,0,3,0,0,13,162,0,0,1,0,0,1,0,2,97,0,0,
93,0,0,3,0,0,15,167,0,0,0,0,0,1,0,
108,0,0,4,59,0,9,179,0,0,0,0,0,1,0,
123,0,0,4,0,0,13,185,0,0,1,0,0,1,0,2,97,0,0,
142,0,0,4,0,0,15,190,0,0,0,0,0,1,0,
157,0,0,5,56,0,9,202,0,0,0,0,0,1,0,
172,0,0,5,0,0,13,208,0,0,1,0,0,1,0,2,97,0,0,
191,0,0,5,0,0,15,213,0,0,0,0,0,1,0,
206,0,0,6,77,0,5,219,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
233,0,0,7,0,0,29,225,0,0,0,0,0,1,0,
248,0,0,8,99,0,4,228,0,0,2,0,0,1,0,2,3,0,0,2,3,0,0,
271,0,0,9,96,0,4,233,0,0,3,1,0,1,0,2,3,0,0,2,3,0,0,1,97,0,0,
298,0,0,10,200,0,9,258,0,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,
325,0,0,10,0,0,13,264,0,0,7,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,97,0,0,2,3,0,0,
368,0,0,10,0,0,15,279,0,0,0,0,0,1,0,
383,0,0,11,55,0,4,294,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
406,0,0,12,244,0,9,316,0,0,1,1,0,1,0,1,97,0,0,
425,0,0,12,0,0,13,320,0,0,6,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,3,0,0,
464,0,0,12,0,0,15,332,0,0,0,0,0,1,0,
479,0,0,13,35,0,4,374,0,0,1,0,0,1,0,2,97,0,0,
498,0,0,14,70,0,4,378,0,0,1,0,0,1,0,2,3,0,0,
517,0,0,15,55,0,4,388,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
540,0,0,16,91,0,3,398,0,0,3,3,0,1,0,1,97,0,0,1,3,0,0,1,3,0,0,
567,0,0,17,0,0,29,407,0,0,0,0,0,1,0,
582,0,0,18,98,0,3,409,0,0,4,4,0,1,0,1,3,0,0,1,97,0,0,1,97,0,0,1,3,0,0,
613,0,0,19,0,0,29,420,0,0,0,0,0,1,0,
628,0,0,20,53,0,4,450,0,0,2,1,0,1,0,2,97,0,0,1,97,0,0,
651,0,0,21,69,0,3,465,0,0,3,3,0,1,0,1,97,0,0,1,97,0,0,1,97,0,0,
678,0,0,22,0,0,29,468,0,0,0,0,0,1,0,
693,0,0,0,0,0,27,497,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
724,0,0,24,0,0,31,572,0,0,0,0,0,1,0,
739,0,0,25,139,0,9,627,0,0,0,0,0,1,0,
754,0,0,25,0,0,13,634,0,0,5,0,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,
789,0,0,25,0,0,15,647,0,0,0,0,0,1,0,
804,0,0,26,55,0,9,657,0,0,0,0,0,1,0,
819,0,0,26,0,0,13,663,0,0,1,0,0,1,0,2,97,0,0,
838,0,0,26,0,0,15,668,0,0,0,0,0,1,0,
853,0,0,27,132,0,9,681,0,0,1,1,0,1,0,1,97,0,0,
872,0,0,27,0,0,13,687,0,0,5,0,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,
907,0,0,27,0,0,15,701,0,0,0,0,0,1,0,
922,0,0,28,57,0,9,711,0,0,0,0,0,1,0,
937,0,0,28,0,0,13,717,0,0,1,0,0,1,0,2,97,0,0,
956,0,0,28,0,0,15,722,0,0,0,0,0,1,0,
971,0,0,29,134,0,9,735,0,0,1,1,0,1,0,1,97,0,0,
990,0,0,29,0,0,13,741,0,0,5,0,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,
1025,0,0,29,0,0,15,755,0,0,0,0,0,1,0,
1040,0,0,30,109,0,9,763,0,0,0,0,0,1,0,
1055,0,0,30,0,0,13,769,0,0,5,0,0,1,0,2,97,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,
0,
1090,0,0,30,0,0,15,783,0,0,0,0,0,1,0,
};


// win32 Visual C ÄÄÆÄÀÏ½Ã Ãß°¡
// ÇÁ·Î±×·¥ °¡Àå Ã¹ ÁÙ¿¡ Ãß°¡ÇÒ °Í
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <memory.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

void DB_connect();
void firstPage();
void menu();
void sql_error(char *msg) ;
void youtubeVideo();
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

	/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 


// win32 Visual C ÄÄÆÄÀÏ½Ã Ãß°¡
#define getch() _getch()

void main()
{
	int choice;

	DB_connect();

	do
	{
		system("cls");
		firstPage();
		menu();
		scanf("%d", &choice);
		printf("\n");
		
		// 1~4°¡ ¾Æ´Ñ ¼ýÀÚ¸¦ »ç¿ëÀÚ°¡ ÀÔ·ÂÇßÀ» ½Ã, ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
		if (choice != 1 && choice != 2 && choice != 3)
		{
			choice = 4;
		}

		// ¼ýÀÚ°¡ ¾Æ´Ñ ¹®ÀÚ°¡ ÀÔ·ÂµÇ¾úÀ» °æ¿ì ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
		while(getchar()!='\n')
		{
			choice = 4;
		};

		/* EXEC SQL BEGIN DECLARE SECTION; */ 

			char u_uid[20]= {""};
			char u_id_check[20] = {""};
			char u_id_payment_check[20] = {""};
			char u_pw_check[20] = {""};
			char u_check[20]={""};
			char u_upd[20];
			char u_uage[10];
		/* EXEC SQL END DECLARE SECTION; */ 


		// »ç¿ëÀÚÀÇ ÀÔ·Â¿¡ µû¶ó ½ÇÇàµÇµµ·Ï ÇÔ.
		switch(choice)
		{
		case 1:
			int login_choice;
			printf("					    ¾ÆÀÌµð¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
			scanf("%s", u_uid);
			printf("					    ºñ¹Ð¹øÈ£¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
			scanf("%s", u_upd);
			printf("\n");

			/* EXEC SQL SELECT USER_ID, USER_PASSWD
					 into :u_id_check, :u_pw_check
					from users
					where USER_ID = :u_uid and USER_PASSWD = :u_upd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select USER_ID ,USER_PASSWD into :b0,:b1  from users wher\
e (USER_ID=:b2 and USER_PASSWD=:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)u_id_check;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)u_pw_check;
   sqlstm.sqhstl[1] = (unsigned int  )20;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)u_uid;
   sqlstm.sqhstl[2] = (unsigned int  )20;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)u_upd;
   sqlstm.sqhstl[3] = (unsigned int  )20;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



			if (strcmp(u_id_check, u_uid) == 1 && strcmp(u_pw_check, u_upd) == 1)
			{
				printf("·Î±×ÀÎ¿¡ ¼º°øÇÏ¿´½À´Ï´Ù!\n\n");
				printf("%s´Ô È¯¿µÇÕ´Ï´Ù.\n\n", u_uid);
			}							
			else
			{
				printf("¾ÆÀÌµð ¶Ç´Â ºñ¹Ð¹øÈ£°¡ Àß¸øµÇ¾ú½À´Ï´Ù. ´Ù½Ã µé¾î¿Í ÁÖ½Ê½Ã¿À.\n");
				getch();
				continue;
			}

			do {
				printf("\n¸Þ´º¸¦ ¼±ÅÃÇØ ÁÖ¼¼¿ä.\n");
				printf("\n1. ¿µÈ­ ÃßÃµ 2. À¯Æ©ºê ÃßÃµ 3. °áÁ¦Á¤º¸ È®ÀÎ 4. °áÁ¦ÇÏ±â 5. ·Î±×¾Æ¿ô\n");
				printf("\n¼± ÅÃ : ");
				
				scanf("%d", &login_choice);

				// 1~4°¡ ¾Æ´Ñ ¼ýÀÚ¸¦ »ç¿ëÀÚ°¡ ÀÔ·ÂÇßÀ» ½Ã, ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
				if (login_choice != 1 && login_choice != 2 && login_choice != 3 && login_choice != 4)
				{
					login_choice = 5;
				}

				// ¼ýÀÚ°¡ ¾Æ´Ñ ¹®ÀÚ°¡ ÀÔ·ÂµÇ¾úÀ» °æ¿ì ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
				while(getchar()!='\n')
				{
					login_choice = 5;
				};

				switch(login_choice)
				{
				case 1: // ¿µÈ­ ÃßÃµ
					/* EXEC SQL BEGIN DECLARE SECTION; */ 
								
						char u_id_payment_movie[20];
						char u_favorite[20];
						char u_transportation[20];
						char loc_end[20];
						char m_title[20];
						char m_genre[10];
						char m_rating[20];
						char m_actor[50];
						int m_score;
						int m_age;
						int m_runningtime;
						int start_lat;
						int start_long;
						int end_lat;
						int end_long;
						int distance;

					/* EXEC SQL END DECLARE SECTION; */ 


					/* EXEC SQL WHENEVER NOT FOUND goto movie_start; */ 


					/* EXEC SQL SELECT USER_ID
							into :u_id_payment_movie
							from payment
							where USER_ID = :u_uid; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select USER_ID into :b0  from payment where USER_ID=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )36;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.sqlpfmem = (unsigned int  )0;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)u_id_payment_movie;
     sqlstm.sqhstl[0] = (unsigned int  )20;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)u_uid;
     sqlstm.sqhstl[1] = (unsigned int  )20;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) goto movie_start;
}



					movie_start:

					if (strlen(u_id_payment_movie) == 19){ // °áÁ¦°¡ µÇ¾îÀÖ±â¿¡ ´ÙÀ½À¸·Î ÁøÇà		
											

						printf("»çÀü Á¤º¸ ¼öÁýÀÔ´Ï´Ù.\n\n");
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("Àå¸£ Á¾·ù: ");
						/* EXEC SQL DECLARE m_genre_cursor CURSOR FOR
							SELECT DISTINCT movie_genre 
							from movie; */ 


						/* EXEC SQL OPEN m_genre_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0003;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )59;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH m_genre_cursor INTO
							:m_genre; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 4;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )74;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)m_genre;
       sqlstm.sqhstl[0] = (unsigned int  )10;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("%s ", m_genre);
						}
						/* EXEC SQL CLOSE m_genre_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )93;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


						printf("\n¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("\n\n¼±È£ Àå¸£:");
						scanf("%s", u_favorite);
						printf("\n");
						//---------------------------------------------
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("ÀÌµ¿¼ö´Ü Á¾·ù: ");
						/* EXEC SQL DECLARE m_transportation_cursor CURSOR FOR
							SELECT DISTINCT user_transportation
							from users; */ 


						/* EXEC SQL OPEN m_transportation_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0004;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )108;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH m_transportation_cursor INTO
							:m_genre; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 4;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )123;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)m_genre;
       sqlstm.sqhstl[0] = (unsigned int  )10;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("%s ", m_genre);
						}
						/* EXEC SQL CLOSE m_transportation_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )142;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


						printf("\n¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("\n\nÀÌµ¿¼ö´Ü:");
						scanf("%s", u_transportation);
						printf("\n");
						//---------------------------------------------
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("ÀÌµ¿°¡´ÉÇÑ µµÂøÁö: ");
						/* EXEC SQL DECLARE m_location_cursor CURSOR FOR
							SELECT DISTINCT location_name
							from location; */ 


						/* EXEC SQL OPEN m_location_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0005;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )157;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH m_location_cursor INTO
							:m_genre; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 4;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )172;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)m_genre;
       sqlstm.sqhstl[0] = (unsigned int  )10;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("%s ", m_genre);
						}
						/* EXEC SQL CLOSE m_location_cursor; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )191;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


						printf("\n¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("\n\nµµÂøÁö:");
						scanf("%s", loc_end);						
						printf("\n");

						/* EXEC SQL UPDATE USERS
							SET
								USER_TRANSPORTATION = :u_transportation,
								USER_FAVORITE = :u_favorite
							WHERE
								USER_ID = :u_uid; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update USERS  set USER_TRANSPORTATION=:b0,USER_FAVORIT\
E=:b1 where USER_ID=:b2";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )206;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)u_transportation;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)u_favorite;
      sqlstm.sqhstl[1] = (unsigned int  )20;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)u_uid;
      sqlstm.sqhstl[2] = (unsigned int  )20;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}


						/* EXEC SQL COMMIT WORK; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )233;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


					

						/* EXEC SQL SELECT LOCATION_LATITUDE, LOCATION_LONGITUDE
									into :start_lat, :start_long
									from location 
									where LOCATION_NAME = 'ºÎ»ê'; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select LOCATION_LATITUDE ,LOCATION_LONGITUDE into :b0,\
:b1  from location where LOCATION_NAME='ºÎ»ê'";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )248;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&start_lat;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&start_long;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}


						
						/* EXEC SQL SELECT LOCATION_LATITUDE, LOCATION_LONGITUDE
									into :end_lat, :end_long
									from location 
									where LOCATION_NAME = :loc_end; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select LOCATION_LATITUDE ,LOCATION_LONGITUDE into :b0,\
:b1  from location where LOCATION_NAME=:b2";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )271;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&end_lat;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&end_long;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)loc_end;
      sqlstm.sqhstl[2] = (unsigned int  )20;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
}



						// ¾Ë°í¸®Áò
						start_lat -= end_lat;
						start_long -= end_long;

						if(start_lat <0) start_lat = -start_lat;
						if(start_long <0) start_long = -start_long;

						distance = start_lat*111 + start_long*89;

						if(u_transportation == "¹ö½º" || strcmp(u_transportation, "¹ö½º") == 0) distance = distance*2;
						else if(u_transportation == "±âÂ÷" || strcmp(u_transportation, "±âÂ÷") == 0) distance = distance/2;
						else if(u_transportation == "ºñÇà±â" || strcmp(u_transportation, "ºñÇà±â") == 0) distance = distance/4;

						//¿µ»ó ÃßÃµ show
						/* EXEC SQL DECLARE movie_show CURSOR FOR
							SELECT MOVIE_TITLE, MOVIE_GENRE, MOVIE_RATING, 
							MOVIE_SCORE, MOVIE_AGE, MOVIE_ACTOR, MOVIE_RUNNINGTIME
							from movie							
							where MOVIE_GENRE = :u_favorite and MOVIE_RUNNINGTIME between :distance-50 and :distance+50; */ 


						/* EXEC SQL OPEN movie_show; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0010;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )298;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlstm.sqhstv[0] = (         void  *)u_favorite;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&distance;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&distance;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)					
						{
							/* EXEC SQL FETCH movie_show INTO
							:m_title, :m_genre, :m_rating, 
							:m_score, :m_age, :m_actor, :m_runningtime; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )325;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)m_title;
       sqlstm.sqhstl[0] = (unsigned int  )20;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)m_genre;
       sqlstm.sqhstl[1] = (unsigned int  )10;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)m_rating;
       sqlstm.sqhstl[2] = (unsigned int  )20;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)0;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)&m_score;
       sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)0;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)&m_age;
       sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)0;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqhstv[5] = (         void  *)m_actor;
       sqlstm.sqhstl[5] = (unsigned int  )50;
       sqlstm.sqhsts[5] = (         int  )0;
       sqlstm.sqindv[5] = (         void  *)0;
       sqlstm.sqinds[5] = (         int  )0;
       sqlstm.sqharm[5] = (unsigned int  )0;
       sqlstm.sqadto[5] = (unsigned short )0;
       sqlstm.sqtdso[5] = (unsigned short )0;
       sqlstm.sqhstv[6] = (         void  *)&m_runningtime;
       sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[6] = (         int  )0;
       sqlstm.sqindv[6] = (         void  *)0;
       sqlstm.sqinds[6] = (         int  )0;
       sqlstm.sqharm[6] = (unsigned int  )0;
       sqlstm.sqadto[6] = (unsigned short )0;
       sqlstm.sqtdso[6] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}



							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("Á¦¸ñ = %s\n", m_title);							
							printf("Àå¸£ = %s\n", m_genre);
							printf("½ÃÃ»µî±Þ = %s\n", m_rating);
							printf("º°Á¡ = %d\n", m_score);
							printf("Ãâ½Ã³âµµ = %d\n", m_age);
							printf("Ãâ¿¬¹è¿ì = %s\n", m_actor);
							printf("»ó¿µ½Ã°£ = %d\n", m_runningtime);
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("\n");
						}
						/* EXEC SQL CLOSE movie_show; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )368;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}




					}else{ // ±¸µ¶ÁßÀÌÁö ¾ÊÀ¸´Ï °áÁ¦ ¿ä±¸
						printf("±¸µ¶ÀÌ µÇ¾îÀÖÁö ¾Ê½À´Ï´Ù. µ¹¾Æ°£ ÈÄ °áÁ¦ÇÏ½Ã±æ ¹Ù¶ø´Ï´Ù. \n");
					}

					break;
				case 2: // À¯Æ©ºê ¿µ»ó ÃßÃµ
					youtubeVideo(); 
					break;
				case 3: // °áÁ¦Á¤º¸ È®ÀÎ

					/* EXEC SQL WHENEVER NOT FOUND goto inan; */ 


					/* EXEC SQL SELECT USER_ID
							into :u_id_payment_check
							from payment
							where USER_ID = :u_uid; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 7;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = "select USER_ID into :b0  from payment where USER_ID=:b1";
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )383;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.sqlpfmem = (unsigned int  )0;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqhstv[0] = (         void  *)u_id_payment_check;
     sqlstm.sqhstl[0] = (unsigned int  )20;
     sqlstm.sqhsts[0] = (         int  )0;
     sqlstm.sqindv[0] = (         void  *)0;
     sqlstm.sqinds[0] = (         int  )0;
     sqlstm.sqharm[0] = (unsigned int  )0;
     sqlstm.sqadto[0] = (unsigned short )0;
     sqlstm.sqtdso[0] = (unsigned short )0;
     sqlstm.sqhstv[1] = (         void  *)u_uid;
     sqlstm.sqhstl[1] = (unsigned int  )20;
     sqlstm.sqhsts[1] = (         int  )0;
     sqlstm.sqindv[1] = (         void  *)0;
     sqlstm.sqinds[1] = (         int  )0;
     sqlstm.sqharm[1] = (unsigned int  )0;
     sqlstm.sqadto[1] = (unsigned short )0;
     sqlstm.sqtdso[1] = (unsigned short )0;
     sqlstm.sqphsv = sqlstm.sqhstv;
     sqlstm.sqphsl = sqlstm.sqhstl;
     sqlstm.sqphss = sqlstm.sqhsts;
     sqlstm.sqpind = sqlstm.sqindv;
     sqlstm.sqpins = sqlstm.sqinds;
     sqlstm.sqparm = sqlstm.sqharm;
     sqlstm.sqparc = sqlstm.sqharc;
     sqlstm.sqpadto = sqlstm.sqadto;
     sqlstm.sqptdso = sqlstm.sqtdso;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode == 1403) goto inan;
}


					
					inan:
					if (strlen(u_id_payment_check) > 0){
						printf("\n°áÁ¦Á¤º¸¸¦ Ãâ·ÂÇÕ´Ï´Ù.\n\n");
						
							/* EXEC SQL BEGIN DECLARE SECTION; */ 
								
								char p_date_start[20];
								char p_date_end[20];
								int p_period;
								int b_price;
								int p_end;
							/* EXEC SQL END DECLARE SECTION; */ 


						/* EXEC SQL DECLARE payment_check CURSOR FOR
							select user_id, p.PAYMENT_DATE, p.PAYMENT_DATE + p.PAYMENT_PERIOD, p.PAYMENT_PERIOD, b.PAYMENT_PRICE, p.payment_date+p.PAYMENT_PERIOD-sysdate
							from payment p, BILLINGHISTORY b 
							where user_id = :u_uid and p.PAYMENT_DATE = b.PAYMENT_DATE; */ 


						/* EXEC SQL OPEN payment_check; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0012;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )406;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlstm.sqhstv[0] = (         void  *)u_uid;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						//EXEC SQL WHENEVER NOT FOUND DO BREAK;

						/* EXEC SQL FETCH payment_check INTO
						:u_id_payment_check, :p_date_start, :p_date_end, :p_period, :b_price, :p_end; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )425;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)u_id_payment_check;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)p_date_start;
      sqlstm.sqhstl[1] = (unsigned int  )20;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)p_date_end;
      sqlstm.sqhstl[2] = (unsigned int  )20;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&p_period;
      sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&b_price;
      sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqhstv[5] = (         void  *)&p_end;
      sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[5] = (         int  )0;
      sqlstm.sqindv[5] = (         void  *)0;
      sqlstm.sqinds[5] = (         int  )0;
      sqlstm.sqharm[5] = (unsigned int  )0;
      sqlstm.sqadto[5] = (unsigned short )0;
      sqlstm.sqtdso[5] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) goto inan;
}


						
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("°áÁ¦ »ç¿ëÀÚ = %s\n", u_id_payment_check);
						printf("°áÁ¦½ÃÀÛÀÏ = %s  \n", p_date_start);
						printf("°áÁ¦¸¸·áÀÏ = %s  \n", p_date_end);
						printf("³²Àº±â°£ = %d  \n", p_end);
						printf("°áÁ¦ ¾ÆÀÌÅÛ = %dÀÏ\n", p_period);					
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("\n");

						/* EXEC SQL CLOSE payment_check; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )464;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}




					}else
						printf("\nÇöÀç °áÁ¦ ³»¿ªÀÌ ¾ø½À´Ï´Ù. °áÁ¦ ÈÄ È®ÀÎÇÏ½Ã±æ ¹Ù¶ø´Ï´Ù.\n\n");
					

					
					break;

				case 4: // °áÁ¦ÇÏ±â
						int user_pay;
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("°áÁ¦ ¾ÆÀÌÅÛ ¸ñ·Ï\n");						
						printf("10ÀÏ = 10000¿ø \n");
						printf("25ÀÏ = 25000¿ø \n");
						printf("50ÀÏ = 50000¿ø \n");
						printf("60ÀÏ = 60000¿ø \n");
						printf("90ÀÏ = 90000¿ø \n");
						printf("100ÀÏ = 100000¿ø \n");
						printf("200ÀÏ = 200000¿ø \n");
						printf("365ÀÏ = 365000¿ø \n");
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");

						printf("\n\n\n±â°£À» ¼±ÅÃÇØÁÖ¼¼¿ä ¿¹) 60\n");
						printf("Ãë¼Ò´Â 0À» ÀÔ·ÂÇØÁÖ¼¼¿ä!! \n");
						printf("\n¼± ÅÃ : ");
						scanf("%d", &user_pay);

						if(user_pay == 0)
							continue;
						else{
							/* EXEC SQL BEGIN DECLARE SECTION; */ 
								
								char p_date[20]={""};	
								char u_id_payment_exist[20];
								int p_num = 0;
								int p_period = user_pay;
								int b_price = user_pay*1000;								
							/* EXEC SQL END DECLARE SECTION; */ 



							
							/* EXEC SQL SELECT sysdate 
									into :p_date 
									from dual; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "select sysdate into :b0  from dual ";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )479;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)p_date;
       sqlstm.sqhstl[0] = (unsigned int  )20;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) goto inan;
}


							
							/* EXEC SQL select payment_num 
									into :p_num
									from payment 
									order by payment_num desc; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "select payment_num into :b0  from payment  order by p\
ayment_num desc  ";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )498;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)&p_num;
       sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) goto inan;
}

				

							while(getchar()!='\n'){};

							/* EXEC SQL WHENEVER NOT FOUND goto ig_start; */ 



							/* EXEC SQL SELECT USER_ID
									into :u_id_payment_exist
									from payment
									where USER_ID = :u_uid; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.stmt = "select USER_ID into :b0  from payment where USER_ID=:\
b1";
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )517;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqhstv[0] = (         void  *)u_id_payment_exist;
       sqlstm.sqhstl[0] = (unsigned int  )20;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)0;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)u_uid;
       sqlstm.sqhstl[1] = (unsigned int  )20;
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)0;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) goto ig_start;
}



							ig_start:

							if (strlen(u_id_payment_exist) < 46){ // ÀÌ¹Ì °áÁ¦°¡ ÀÖ±â ¶§¹®¿¡ update					
								printf("ÀÌ¹Ì ±¸µ¶ÁßÀÔ´Ï´Ù!!! ±¸µ¶ÀÌ ³¡³­ ÈÄ °áÁ¦ÇÏ½Ã±æ ¹Ù¶ø´Ï´Ù. \n");
							}else{ // Áßº¹°ªÀÌ ¾ø±â ¶§¹®¿¡ insert 			
								/* EXEC SQL INSERT INTO BILLINGHISTORY(
										payment_date,
										payment_period,
										payment_price
								)VALUES(
										:p_date,
										:p_period,
										:b_price
								); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into BILLINGHISTORY (payment_date,payment_per\
iod,payment_price) values (:b0,:b1,:b2)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )540;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)p_date;
        sqlstm.sqhstl[0] = (unsigned int  )20;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&p_period;
        sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&b_price;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) goto ig_start;
}


								/* EXEC SQL COMMIT WORK; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )567;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



								/* EXEC SQL INSERT INTO PAYMENT(
										payment_num,
										user_id,
										payment_date,
										payment_period
								)VALUES(
										:(p_num)+1,
										:u_uid,
										:p_date,
										:p_period
								); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "insert into PAYMENT (payment_num,user_id,payment_dat\
e,payment_period) values ((:b0+1),:b1,:b2,:b3)";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )582;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&(p_num);
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)u_uid;
        sqlstm.sqhstl[1] = (unsigned int  )20;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)p_date;
        sqlstm.sqhstl[2] = (unsigned int  )20;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&p_period;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) goto ig_start;
}


							/* EXEC SQL COMMIT WORK; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )613;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}

	
																
								printf("°áÁ¦ÇØÁÖ¼Å¼­ °¨»çÇÕ´Ï´Ù!! ¿À´ÃºÎÅÍ ¿µÈ­°¨»ó Á¤»ó ÀÌ¿ë °¡´ÉÇÕ´Ï´Ù.\n");
							}
								
						}
						
					break;

				case 5:
					printf("\n·Î±×¾Æ¿ô ÇÕ´Ï´Ù.\n¾È³çÈ÷ °¡¼¼¿ä\n");
					break;
				}

			} while(login_choice != 5);

			getch();
			break;

		case 2:
			printf("					    ¾ÆÀÌµð¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
			scanf("%s", u_uid);
			printf("					    ºñ¹Ð¹øÈ£¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
			scanf("%s", u_upd);
			printf("					    ³ªÀÌ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
			scanf("%s", u_uage);
			printf("\n");
			
			/* EXEC SQL WHENEVER NOT FOUND goto id_start; */ 


			/* EXEC SQL SELECT USER_ID
					 into :u_check
			from users
			where USER_ID = :u_uid; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 7;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select USER_ID into :b0  from users where USER_ID=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )628;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)u_check;
   sqlstm.sqhstl[0] = (unsigned int  )20;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)u_uid;
   sqlstm.sqhstl[1] = (unsigned int  )20;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) goto id_start;
}



			// 0ÀÌ ¶È°°¾î 1ÀÌ u_check°¡ Å©°í, -1 u_uid°¡ Å©´Ù.
			// È®ÀÎ½Ã¿¡ °°Àº °ªÀÌ ÂïÈ÷Áö¸¸ ±×·² °æ¿ì u_check°¡ ´õ Å©´Ù´Â°ÍÀ» È®ÀÎÇÏ¿©¼­ Àû¿ëÇÏ¿´´Ù.
			if (strcmp(u_check, u_uid) == 1)
			{
				printf("					    Áßº¹µÇ´Â ¾ÆÀÌµð°¡ ÀÌ¹Ì Á¸ÀçÇÕ´Ï´Ù!\n\n");
				printf("					    ´Ù½Ã È¸¿ø°¡ÀÔÀ» ½ÃµµÇØ ÁÖ¼¼¿ä!\n\n");
			}
			else
			{
			id_start:
				/* EXEC SQL INSERT INTO USERS(USER_ID, USER_PASSWD, USER_AGE)
	 					 VALUES (:u_uid, :u_upd, :u_uage); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into USERS (USER_ID,USER_PASSWD,USER_AGE) values \
(:b0,:b1,:b2)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )651;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)u_uid;
    sqlstm.sqhstl[0] = (unsigned int  )20;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)u_upd;
    sqlstm.sqhstl[1] = (unsigned int  )20;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)u_uage;
    sqlstm.sqhstl[2] = (unsigned int  )10;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) goto id_start;
}



				/* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )678;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



				printf("				È¸¿ø °¡ÀÔ¿¡ ¼º°øÇÏ¿´½À´Ï´Ù!\n\n");
			}

			getch();

			break;

		case 3:
			youtubeVideo();
			break;
		}
		
	} while ((choice) != 4);

	//Get_tuple();
	printf("					      ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.\n\n");
	printf("					°¨»çÇÕ´Ï´Ù. ´ÙÀ½¿¡ ¶Ç ÀÌ¿ëÇØ ÁÖ¼¼¿ä!\n");
	getch();
}

void DB_connect()
{
   strcpy((char *)uid.arr,"zstA3@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr,"jksd1633");
   pwd.len = (short) strlen((char *)pwd.arr);

   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 7;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )693;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	// connectionÀÌ ½ÇÆÐÇßÀ»°æ¿ìÀÇ Ã³¸®ºÎºÐ

	if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405){ 
		printf("\7Cconnect error: %s", sqlca.sqlerrm.sqlerrmc);
		getch();
		exit(-1);
	}

    //printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}

void firstPage()
{
	printf("\n");
	printf(" ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú   ¡á¡á            ¡á¡á                                                                                           ¡Ú\n");
	printf(" ¡Ú   ¡á ¡á          ¡á ¡á                                                                                           ¡Ú\n");
	printf(" ¡Ú   ¡á  ¡á        ¡á  ¡á                                                                                           ¡Ú\n");
	printf(" ¡Ú   ¡á   ¡á      ¡á   ¡á                                                                                           ¡Ú\n");
	printf(" ¡Ú   ¡á    ¡á    ¡á    ¡á    ¡á¡á¡á   ¡á          ¡á  ¡á¡á          ¡á¡á¡á¡á     ¡á¡á¡á   ¡á          ¡á  ¡á¡á      ¡Ú\n");
	printf(" ¡Ú   ¡á     ¡á  ¡á     ¡á   ¡á    ¡á   ¡á        ¡á  ¡á  ¡á        ¡á  ¡á  ¡á   ¡á    ¡á   ¡á        ¡á  ¡á  ¡á     ¡Ú\n");
	printf(" ¡Ú   ¡á      ¡á¡á      ¡á  ¡á      ¡á   ¡á      ¡á  ¡á    ¡á       ¡á  ¡á  ¡á  ¡á      ¡á   ¡á      ¡á  ¡á    ¡á    ¡Ú\n");
	printf(" ¡Ú   ¡á       ¡á       ¡á ¡á        ¡á   ¡á    ¡á  ¡á¡á¡á¡á¡á      ¡á  ¡á  ¡á ¡á        ¡á   ¡á    ¡á  ¡á¡á¡á¡á¡á   ¡Ú\n");
	printf(" ¡Ú   ¡á                ¡á  ¡á      ¡á     ¡á  ¡á   ¡á              ¡á  ¡á  ¡á  ¡á      ¡á     ¡á  ¡á   ¡á           ¡Ú\n");
	printf(" ¡Ú   ¡á                ¡á   ¡á    ¡á       ¡á¡á     ¡á    ¡á       ¡á  ¡á  ¡á   ¡á    ¡á       ¡á¡á     ¡á    ¡á    ¡Ú\n");
	printf(" ¡Ú   ¡á                ¡á    ¡á¡á¡á         ¡á       ¡á¡á¡á        ¡á  ¡á  ¡á    ¡á¡á¡á         ¡á       ¡á¡á¡á     ¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú                                                                                                                  ¡Ú\n");
	printf(" ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú\n");
	printf("\n");
}

void menu()
{
	char a[20] = "1. ·Î ±× ÀÎ";
	char b[20] = "2. È¸ ¿ø °¡ ÀÔ";
	char c[30] = "3. ¿µ»ó ÃßÃµ (ºñÈ¸¿ø)";
	char d[10] = "4. Á¾ ·á";
	char e[10] = "¼± ÅÃ : ";
	
	printf("%60s\n", a);
	printf("\n");
	printf("%63s\n", b);
	printf("\n");
	printf("%70s\n", c);
	printf("\n");
	printf("%57s\n", d);
	printf("\n");
	printf("%57s", e);
}

/* --------------------------------------------------------------------------
void sql_error(msg)

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);
    getch();
    
    /* EXEC SQL ROLLBACK WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 7;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )724;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    
    //exit(-1);
}

void youtubeVideo(){
	int numchoice;

			/* EXEC SQL BEGIN DECLARE SECTION; */ 

				char y_title[100]={""};
				char y_genre[10]={""};
				char y_rating[20]={""};
				char y_channel[10]={""};
				char user_select_genre[20];
				char user_select_channel[20];
				int y_views;

				short y_title_ind=0;
				short y_genre_ind=0;
				short y_rating_ind=0;
				short y_channel_ind=0;
				short y_views_ind=0;
			/* EXEC SQL END DECLARE SECTION; */ 


			do{
				printf("\nÀ¯Æ©ºê ¿µ»ó ÃßÃµ ¸Þ´ºÀÔ´Ï´Ù.\n");
				printf("\n°Ë»öÀ» ¿øÇÏ´Â ±âÁØÀ» ¼±ÅÃÇÏ¼¼¿ä.\n");
				printf("\n1. ÀÎ±âµ¿¿µ»ó(TOP 5) 2. Àå¸£ 3. À¯Æ©ºê Ã¤³Î 4. ÀüÃ¼ º¸±â 5. ÀÌÀüÀ¸·Î µ¹¾Æ°¡±â\n");
				printf("\n¼± ÅÃ : ");
				scanf("%d", &numchoice);

				// 1~4°¡ ¾Æ´Ñ ¼ýÀÚ¸¦ »ç¿ëÀÚ°¡ ÀÔ·ÂÇßÀ» ½Ã, ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
				if (numchoice != 1 && numchoice != 2 && numchoice != 3 && numchoice != 4)
				{
					numchoice = 5;
				}

				// ¼ýÀÚ°¡ ¾Æ´Ñ ¹®ÀÚ°¡ ÀÔ·ÂµÇ¾úÀ» °æ¿ì ÇÁ·Î±×·¥ÀÌ Á¾·áµÇ°Ô ÇÔ.
				while(getchar()!='\n')
				{
					numchoice = 5;
				};

				printf("\n");

				switch(numchoice)
				{
//case 1				
					case 1:
						/* EXEC SQL DECLARE y_view_ranking CURSOR FOR
							SELECT YOUTUBE_TITLE, YOUTUBE_VIEWS, YOUTUBE_GENRE, YOUTUBE_RATING, 
							YOUTUBE_CHANNEL
							from youtube
							order by youtube_views desc; */ 


						/* EXEC SQL OPEN y_view_ranking; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0025;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )739;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						// Á¶È¸¼ö ¼øÀ¸·Î Á¤·ÄÇÏ´Â °ÍÀº ³Ê¹« ¸¹ÀÌ ³ª¿À¸é º¸±â ¾ÈÁÁÀ¸¹Ç·Î 5°³¸¸ »Ì¾Ò½À´Ï´Ù.
						for(int i=0; i<5; i++)						
						{
							/* EXEC SQL FETCH y_view_ranking INTO
							:y_title:y_title_ind, :y_views:y_views_ind, :y_genre:y_genre_ind, 
							:y_rating:y_rating_ind, :y_channel:y_channel_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )754;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_title;
       sqlstm.sqhstl[0] = (unsigned int  )100;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_title_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&y_views;
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)&y_views_ind;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)y_genre;
       sqlstm.sqhstl[2] = (unsigned int  )10;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)&y_genre_ind;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)y_rating;
       sqlstm.sqhstl[3] = (unsigned int  )20;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)&y_rating_ind;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)y_channel;
       sqlstm.sqhstl[4] = (unsigned int  )10;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)&y_channel_ind;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("Á¦¸ñ = %s\n", y_title);
							printf("Á¶È¸ ¼ö = %d È¸ \n", y_views);
							printf("Àå¸£ = %s\n", y_genre);
							printf("½ÃÃ»µî±Þ = %s\n", y_rating);
							printf("Ã¤³Î ÀÌ¸§ = %s\n", y_channel);
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("\n");
						}
						/* EXEC SQL CLOSE y_view_ranking; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )789;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


					break;
//case 2
					case 2:
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("Àå¸£ÀÇ Á¾·ù = ");
						/* EXEC SQL DECLARE y_genre_select CURSOR FOR
							SELECT DISTINCT YOUTUBE_GENRE 
							from youtube; */ 


						/* EXEC SQL OPEN y_genre_select; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0026;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )804;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH y_genre_select INTO
							:y_genre:y_genre_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )819;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_genre;
       sqlstm.sqhstl[0] = (unsigned int  )10;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_genre_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("%4s", y_genre);
						}
						/* EXEC SQL CLOSE y_genre_select; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )838;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


						printf("\n");
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("Àå¸£¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
						scanf("%s", user_select_genre);
						printf("\n");

						/* EXEC SQL DECLARE print_genre CURSOR FOR
							SELECT YOUTUBE_TITLE, YOUTUBE_VIEWS, YOUTUBE_GENRE, YOUTUBE_RATING, 
							YOUTUBE_CHANNEL
							from youtube
							where youtube_genre = :user_select_genre; */ 


						/* EXEC SQL OPEN print_genre; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0027;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )853;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlstm.sqhstv[0] = (         void  *)user_select_genre;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH print_genre INTO
							:y_title:y_title_ind, :y_views:y_views_ind, :y_genre:y_genre_ind, 
							:y_rating:y_rating_ind, :y_channel:y_channel_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )872;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_title;
       sqlstm.sqhstl[0] = (unsigned int  )100;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_title_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&y_views;
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)&y_views_ind;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)y_genre;
       sqlstm.sqhstl[2] = (unsigned int  )10;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)&y_genre_ind;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)y_rating;
       sqlstm.sqhstl[3] = (unsigned int  )20;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)&y_rating_ind;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)y_channel;
       sqlstm.sqhstl[4] = (unsigned int  )10;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)&y_channel_ind;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("Á¦¸ñ = %s\n", y_title);
							printf("Á¶È¸ ¼ö = %d È¸ \n", y_views);
							printf("Àå¸£ = %s\n", y_genre);
							printf("½ÃÃ»µî±Þ = %s\n", y_rating);
							printf("Ã¤³Î ÀÌ¸§ = %s\n", y_channel);
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("\n");
						}

						/* EXEC SQL CLOSE print_genre; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )907;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


					break;
//case 3
					case 3:
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("µî·ÏµÈ Ã¤³ÎÀÇ Á¾·ù  = ");
						/* EXEC SQL DECLARE y_channel_select CURSOR FOR
							SELECT DISTINCT YOUTUBE_CHANNEL 
							from youtube; */ 


						/* EXEC SQL OPEN y_channel_select; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0028;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )922;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH y_channel_select INTO
							:y_channel:y_channel_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )937;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_channel;
       sqlstm.sqhstl[0] = (unsigned int  )10;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_channel_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("%s  ", y_channel);
						}
						/* EXEC SQL CLOSE y_channel_select; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )956;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


						printf("\n");
						printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
						printf("Ã¤³ÎÀ» ÀÔ·ÂÇÏ¼¼¿ä : ");
						scanf("%s", user_select_channel);
						printf("\n");

						/* EXEC SQL DECLARE print_channel CURSOR FOR
							SELECT YOUTUBE_TITLE, YOUTUBE_VIEWS, YOUTUBE_GENRE, YOUTUBE_RATING, 
							YOUTUBE_CHANNEL
							from youtube
							where youtube_channel = :user_select_channel; */ 


						/* EXEC SQL OPEN print_channel; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0029;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )971;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlstm.sqhstv[0] = (         void  *)user_select_channel;
      sqlstm.sqhstl[0] = (unsigned int  )20;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH print_channel INTO
							:y_title:y_title_ind, :y_views:y_views_ind, :y_genre:y_genre_ind, 
							:y_rating:y_rating_ind, :y_channel:y_channel_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )990;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_title;
       sqlstm.sqhstl[0] = (unsigned int  )100;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_title_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&y_views;
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)&y_views_ind;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)y_genre;
       sqlstm.sqhstl[2] = (unsigned int  )10;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)&y_genre_ind;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)y_rating;
       sqlstm.sqhstl[3] = (unsigned int  )20;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)&y_rating_ind;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)y_channel;
       sqlstm.sqhstl[4] = (unsigned int  )10;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)&y_channel_ind;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("Á¦¸ñ = %s\n", y_title);
							printf("Á¶È¸ ¼ö = %d È¸ \n", y_views);
							printf("Àå¸£ = %s\n", y_genre);
							printf("½ÃÃ»µî±Þ = %s\n", y_rating);
							printf("Ã¤³Î ÀÌ¸§ = %s\n", y_channel);
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("\n");
						}

						/* EXEC SQL CLOSE print_channel; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1025;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


					break;
					case 4:
						/* EXEC SQL DECLARE print_all CURSOR FOR
							SELECT YOUTUBE_TITLE, YOUTUBE_VIEWS, YOUTUBE_GENRE, YOUTUBE_RATING, 
							YOUTUBE_CHANNEL
							from youtube; */ 


						/* EXEC SQL OPEN print_all; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0030;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1040;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



						/* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


						for(;;)
						{
							/* EXEC SQL FETCH print_all INTO
							:y_title:y_title_ind, :y_views:y_views_ind, :y_genre:y_genre_ind, 
							:y_rating:y_rating_ind, :y_channel:y_channel_ind; */ 

{
       struct sqlexd sqlstm;
       sqlstm.sqlvsn = 13;
       sqlstm.arrsiz = 7;
       sqlstm.sqladtp = &sqladt;
       sqlstm.sqltdsp = &sqltds;
       sqlstm.iters = (unsigned int  )1;
       sqlstm.offset = (unsigned int  )1055;
       sqlstm.selerr = (unsigned short)1;
       sqlstm.sqlpfmem = (unsigned int  )0;
       sqlstm.cud = sqlcud0;
       sqlstm.sqlest = (unsigned char  *)&sqlca;
       sqlstm.sqlety = (unsigned short)4352;
       sqlstm.occurs = (unsigned int  )0;
       sqlstm.sqfoff = (           int )0;
       sqlstm.sqfmod = (unsigned int )2;
       sqlstm.sqhstv[0] = (         void  *)y_title;
       sqlstm.sqhstl[0] = (unsigned int  )100;
       sqlstm.sqhsts[0] = (         int  )0;
       sqlstm.sqindv[0] = (         void  *)&y_title_ind;
       sqlstm.sqinds[0] = (         int  )0;
       sqlstm.sqharm[0] = (unsigned int  )0;
       sqlstm.sqadto[0] = (unsigned short )0;
       sqlstm.sqtdso[0] = (unsigned short )0;
       sqlstm.sqhstv[1] = (         void  *)&y_views;
       sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
       sqlstm.sqhsts[1] = (         int  )0;
       sqlstm.sqindv[1] = (         void  *)&y_views_ind;
       sqlstm.sqinds[1] = (         int  )0;
       sqlstm.sqharm[1] = (unsigned int  )0;
       sqlstm.sqadto[1] = (unsigned short )0;
       sqlstm.sqtdso[1] = (unsigned short )0;
       sqlstm.sqhstv[2] = (         void  *)y_genre;
       sqlstm.sqhstl[2] = (unsigned int  )10;
       sqlstm.sqhsts[2] = (         int  )0;
       sqlstm.sqindv[2] = (         void  *)&y_genre_ind;
       sqlstm.sqinds[2] = (         int  )0;
       sqlstm.sqharm[2] = (unsigned int  )0;
       sqlstm.sqadto[2] = (unsigned short )0;
       sqlstm.sqtdso[2] = (unsigned short )0;
       sqlstm.sqhstv[3] = (         void  *)y_rating;
       sqlstm.sqhstl[3] = (unsigned int  )20;
       sqlstm.sqhsts[3] = (         int  )0;
       sqlstm.sqindv[3] = (         void  *)&y_rating_ind;
       sqlstm.sqinds[3] = (         int  )0;
       sqlstm.sqharm[3] = (unsigned int  )0;
       sqlstm.sqadto[3] = (unsigned short )0;
       sqlstm.sqtdso[3] = (unsigned short )0;
       sqlstm.sqhstv[4] = (         void  *)y_channel;
       sqlstm.sqhstl[4] = (unsigned int  )10;
       sqlstm.sqhsts[4] = (         int  )0;
       sqlstm.sqindv[4] = (         void  *)&y_channel_ind;
       sqlstm.sqinds[4] = (         int  )0;
       sqlstm.sqharm[4] = (unsigned int  )0;
       sqlstm.sqadto[4] = (unsigned short )0;
       sqlstm.sqtdso[4] = (unsigned short )0;
       sqlstm.sqphsv = sqlstm.sqhstv;
       sqlstm.sqphsl = sqlstm.sqhstl;
       sqlstm.sqphss = sqlstm.sqhsts;
       sqlstm.sqpind = sqlstm.sqindv;
       sqlstm.sqpins = sqlstm.sqinds;
       sqlstm.sqparm = sqlstm.sqharm;
       sqlstm.sqparc = sqlstm.sqharc;
       sqlstm.sqpadto = sqlstm.sqadto;
       sqlstm.sqptdso = sqlstm.sqtdso;
       sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
       if (sqlca.sqlcode == 1403) break;
}


						
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("Á¦¸ñ = %s\n", y_title);
							printf("Á¶È¸ ¼ö = %d È¸ \n", y_views);
							printf("Àå¸£ = %s\n", y_genre);
							printf("½ÃÃ»µî±Þ = %s\n", y_rating);
							printf("Ã¤³Î ÀÌ¸§ = %s\n", y_channel);
							printf("¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡\n");
							printf("\n");
						}

						/* EXEC SQL CLOSE print_all; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 7;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )1090;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


					break;
				}
				
				printf("\n");
			} while((numchoice) != 5);
}