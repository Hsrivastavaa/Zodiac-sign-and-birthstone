#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
main()


{
	int i,j,k,l,m,n,key1,key2,key3,p,month,date,z,v=0;
	char a[50],b[50],h[50],q[50];
	char c[]="HELLO ";
	char d[]=" GOOD TO SEE YOU ";
	char e[]="YOUR ADDRESS IS ";
	char f[]="MAY THIS";
	char g[]="BRINGS A LOT OF HAPPINESS IN YOUR LIFE";
	
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\t\t\t                                       +                                       +");
	printf("\n\t\t\t                                       +                GAME                   +");
	printf("\n\t\t\t                                       +                 OF                    +");
	printf("\n\t\t\t                                       +          KISMAT CONNECTION            +");
	printf("\n\t\t\t                                       +                                       +");
	printf("\n");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t********************************************\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t\t WELCOME\t\t\t   *\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t           *\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t\t   TO   \t\t\t   *\n");
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t\t   \t   *\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t\tMY PROJECT \t\t\t   *\n");;
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t\t   \t   *\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t      OF ZODIAC SIGN\t\t\t   *\n");
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t\t   \t   *\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t\t    &\t\t\t\t   *\n");
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t\t   \t   *\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t*\t       BIRTH STONES \t  \t       *\n");
	printf("\t\t\t\t\t\t\t\t*\t\t\t\t\t   \t   *\n");
	printf("\t\t\t\t\t\t\t\t********************************************\n");
	
	getch();
	a:
	system("cls");
	
	z:printf("\n\n\n\n\t  1  :- FOR CHECKING YOUR BIRTHSTONE AND ZODIAC SIGN\n");
	printf("\t  2  :-FOR KNOWING ANOUT DIFFERENT ZODIAC SIGNS\n");
	printf("\t  3  :-FOR KNOWING ABOUT DIFFERENT BIRTHSTONE\n");
	printf("\t  4  :-FOR EXITING\n");
	printf("\t\tEnter your choice : ");
	
	scanf("%d",&key1);
	getchar();
	switch(key1)
	{
		case 1:
		{   
			system("cls");
			printf("\n\n\n\n\n\n\t\t");
		   printf(" Enter your name    :-         ");
		   gets(a);
		   printf("\n\n\n");
		   printf("\t\tEnter your address      :-        ");
		   gets(d);
		   l=strlen(f);
		   printf("\n\n\n");
		   printf("\t\tEnter the day of today      :-        ");
		   gets(b);
		   //getch();
		   system("cls");
		   	printf("\n\n\n\n\n\n\t\t");
		   	printf(" enter your year of birth\n");
		   	printf("\t\t:-");
		   	scanf("%d",&p);
		   	printf("\n\n\n\t\t Enter your month of birth (in number)\n");
		   	printf("\t\t:-");
		   	scanf("%d",&month);
		   	//getch();
		   	system("cls");
		   	printf("\n\n\n\t\t\t\t|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|\n\n\n\n\n\n");
		   	printf("\t\t\t\tenter your date of birth in number from above table\n");
		   	printf("\t\t\t\t=");
		   	scanf("%d",&date);
		   	/*printf("\n\n\n\n\t\t\t\tEnter your category\n");
		   	gets(q);*/
		   	system("cls");
		   	strupr(a);
		   	strcat(a,d);
		   	strcat(c,a);
		   	
		   	printf("\n\n\n\n\n\n\t\t\t\t RESULTS ARE:-\n");
		   	printf("\t\t\t\t   a  :-   ");
		   	puts(c);
		   	
		   	printf("\n");
		   	strupr(b);
		   	
		printf("\t\t\t\t         TODAY IS ");
		puts(b);
		   	
		   	
		   		   	
		   	//printf("\t\t\t\t   b  :-   ");
		   	printf("\t\t\t\t\t MAY THIS DAY BRINGS YOU A LOT OF HAPPINESS\n\n");
		   	for(i=p;i<=2016;i++)
		   	{
		   		v++;
		   	}
		   	printf("\n\t\t\t\t   b  :-   YOUR AGE IS =   %d",v);
		   	printf(" YEARS\n");
			strupr(d);
		   	printf("\n\n\t\t  ");
		   	printf("\tYOUR ADDRESS IS     :-");
		   	puts(d);
		   	/*for(i=0;i<=l-1;i++)
		   	{
		   		printf("%c",f[i]);
			   }
		   	//puts(e);*/
		   	
		   	/*strupr(q);
		   	printf("\n\n\t\t\tYOU CATEAGORY IS");
		   	puts(q);*/
		   	
		   	
		   	printf("\n");
		   	printf("\n");
		   	printf("\n");
		   	
            printf("\n\t\t\t\t   ZODIAC SIGN AND BIRTHSTONE RESULT IS     :-");
if (((date>=21)  && (month==3)) || ((date<=20 ) && (month==4 )))
{printf("\tYOU ARE A ARIES AND YOUR BIRTHSTONE IS BLOODSTONE\n");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("The Ram is the most harsheaded animal in the zodiac and represents the aries tendency to move on to bigger and \t\t\t\t\t\t\tbetter things. \n");
printf("\t\t\t\t\t\t\t Wearing a diamond provides clarity as you make your way forward without necessarily looking. \n");}
if (((date>=21)  && (month==4)) || ((date<=21 ) && (month==5 )))
{printf("\tYOU ARE A TAURUS AND YOUR BIRTHSTONE IS SAPPHIRE");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("Patient and reliable,warmhearted and loving,persistent and determined,placid and security loving");
printf("\n\t\t\t\t\t\t\t   jealous and possesive ,resentful and inflexible,self indulgent and greedy");
}
if (((date>=22)  && (month==5)) || ((date<=21 ) && (month==6 )))
{printf("\tYOU ARE A GEMINI AND YOUR BIRTHSTONE IS AGATE");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("adaptable and versatile,communicative and witty,intellectual and eloquant,youthfull and lively");
printf("\n\t\t\t\t\t\t          nervous and tensed,superficial and inconsistent");
}
if (((date>=22)  && (month==6)) || ((date<=22 ) && (month==7 )))
{printf("\tYOU ARE A CANCER AND YOUR BIRTHSTONE IS EMERALD");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("emotional and loving,intuitive and imaginative,shrewd and cautions,protective and sympathetic");
printf("\n\t\t\t\t\t\t          changeble and moody,overemotional and touchy");
}
if (((date>=23)  && (month==7)) || ((date<=22 ) && (month==8 )))
{printf("\tYOU ARE A LEO AND YOUR BIRTHSTONE IS ONYX");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("generous and warmhearted,creative and enthusiastic,broad minded and expansive,faithful and loving");
printf("\n\t\t\t\t\t\t          pompous and patronizing,bossy and interferring");
}
if (((date>=23)  && (month==8)) || ((date<=22 ) && (month==9 )))
{printf("\tYOU ARE A VIRGO AND YOUR BIRTHSTONE IS CARNELIAN");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("modest and shy,meticulous and reliable,practical and dilligent,intelligent and analytic");
printf("\n\t\t\t\t\t\t          fussy and a worrier,overcritical and harsh");

}
if (((date>=23)  && (month==9)) || ((date<=22 ) && (month==10 )))
{printf("\tYOU ARE A LIBRA AND YOUR BIRTHSTONE IS CHRYSOLITE");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("diplomatic and urbane,romantic and charming,easygoing and sociable,idealistic and peaceable");
printf("\n\t\t\t\t\t\t          indicisive and changeable,firtatious and gulliable");

}
if (((date>=23)  && (month==10)) || ((date<=22 ) && (month==11 )))
{printf("\tYOU ARE A SCORPIO AND YOUR BIRTHSTONE IS BERYL");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("determined and forceful,emotional and intuitive,powerfull and passionate,exciting and magnetic");
printf("\n\t\t\t\t\t\t          jealous and recentfull ,compulsive and obesesive");



}
if (((date>=23)  && (month==11)) || ((date<=22 ) && (month==12 )))
{printf("\tYOU ARE A SAGITTARIUS AND YOUR BIRTHSTONE IS TOPAZ OR CRITRINE");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("optimistic and freedom loving,jovial and good humoured,honest and straight farword,intellectual");
printf("\n\t\t\t\t\t\t          careless,irresponsible and superficial,tactless and restless");



}
if (((date>=23)  && (month==12)) || ((date<=22 ) && (month==1 )))
{printf("\tYOU ARE A CAPRICORN AND YOUR BIRTHSTONE IS RUBY");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("practical and prudent,ambitious and disciplined,patient and carefull,humorous and reserved");
printf("\n\t\t\t\t\t\t          pessimistic and fattalistic,miserly and grudging");




}
if (((date>=23)  && (month==1)) || ((date<=18 ) && (month==2 )))
{printf("\tYOU ARE A AQUARIUS AND YOUR BIRTHSTONE IS GARNET");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("friendly and humanitive,honest and loyal,original and intentive,independent and intellectual");
printf("\n\t\t\t\t\t\t          interactable and contrary");




}
if (((date>=19)  && (month==2)) || ((date<=20 ) && (month==3 )))
{printf("\tYOU ARE A PISCES AND YOUR BIRTHSTONE IS AMETHYST");
printf("\n\n\n\t\t\t\t QUALITIES OF YOURS    :-");
printf("imaginative and sensitive,compassionate and kind,selfless and unworldly,intuitive and sympathetic");
printf("\n\t\t\t\t\t\t          escapic and idealistic,secretive and vegue");

}
printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t 3   :-   TO GO TO MAIN MENU  \n");
printf("\n\n\t\t\t\t\t  4    :-    FOR ENDING THE PROGRAM\n");
printf("\t\tEnter your choice : ");
scanf("%d",&key2);
switch(key2)
{
	case 3:
		//if(key2==3)
		goto a;	

	case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			
			
			default: 
                    printf("\n\n\t\t\t\t\tWrong Choice");
			
			
			
	
}
        getch();
        //system("cls");
        
		   	
		}
		break;
		case 2:
			system("cls");
			printf("\n\n\n\t\t\t 1   :- ARIES\n");
			printf("\t\t\t 2   :- TAURUS\n");
			printf("\t\t\t 3   :- GEMINI\n");
			printf("\t\t\t 4   :- CANCER\n");
			printf("\t\t\t 5   :- LEO\n");
			printf("\t\t\t 6   :- VIRGO\n");
			printf("\t\t\t 7   :- LIBRA\n");
			printf("\t\t\t 8   :- SCORPIO\n");
			printf("\t\t\t 9   :- SAGITTARIUS\n");
			printf("\t\t\t 10  :- CAPRICON\n");
            printf("\t\t\t 11  :- AQUARIUS\n");
			printf("\t\t\t 12  :- PISCES\n");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t 5   :-   TO GO TO MAIN MENU  \n");
printf("\n\n\t\t\t\t\t  6    :-    FOR ENDING THE PROGRAM\n");
printf("\t\tEnter your choice : ");

scanf("%d",&key3);
switch(key3)
{
	case 5:
		//if(key2==3)
		goto a;	

	case 6:
		system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			//exit(1);
	//break;
	
	default: 
                    printf("\n\n\t\t\t\t\tWrong Choice");
	
}
       // getch();
        //system("cls");
        break;
		   	
		case 3:
			system("cls");
			printf("\n\n\n\t\t\t   1 :-BLOODSTONE \n");
			printf("\t\t\t   2 :- SAPPHIRE\n");
			printf("\t\t\t   3 :- AGATE\n");
			
			printf("\t\t\t   4 :- EMERALD\n");
			
			
			printf("\t\t\t   5 :- ONYX\n");
			printf("\t\t\t   6 :- CARNELIAN\n");
			
			printf("\t\t\t   7 :- CHRYSOLITE\n");
			
			printf("\t\t\t   8 :- BERYL\n");
			printf("\t\t\t   9 :- CRITRINE\n");
			printf("\t\t\t  10 :- RUBY\n");
			printf("\t\t\t  11 :- GARNET\n");
			printf("\t\t\t  12 :- AMETHYST\n");
			
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t 5   :-   TO GO TO MAIN MENU  \n");
printf("\n\n\t\t\t\t\t  6    :-    FOR ENDING THE PROGRAM\n");
printf("\t\tEnter your choice : ");

scanf("%d",&key3);
switch(key3)
{
	case 5:
		//if(key2==3)
		goto a;	

	case 6:
		system("cls");
			printf("\n");
			
			printf("\n");
			
			printf("\n");
			printf("\n");
			
			
			printf("\n");
			
			printf("\n");
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			//exit(1);
	//break;
	
	default: 
                    printf("\n\n\t\t\t\t\tWrong Choice");
	
}
       // getch();
        //system("cls");
        break;
		   	
			
			

			
		case 4:
			system("cls");
			
			printf("\n");
			printf("\n");
			printf("\n");
			
			printf("\n");
			printf("\n");
			
			printf("\n");
			printf("\n");
			
			printf("\n");
			printf("\n");
			
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			//exit(1);
		//break;
		
		default: 
                    printf("\n\n\t\t\t\t\tWrong Choice");
			
	}
	//system("cls");
	
	
	
}
