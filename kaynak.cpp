#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main()
{	
	printf("\tAMIRAL BATTI OYUNU\n");
    int alan[12][12];
    char oyunekrani[12][12];
    int i,j,k=0;
    int tablo[144],hak;
    int sayac3,sayac4,sayac5,sayac6;
    
    
    
    hak = 0;
    sayac3 = 0;
    sayac4 = 0;
    sayac5 = 0;
    sayac6 = 0;
    for(i=0;i<12;i++)

    {
        for(j=0;j<12;j++)
        {
            alan[i][j]=0;
            oyunekrani[i][j]='*';

        }

    }
	i=0;
	int satir,sutun;   //gemi yerlestirmeye baslanilan yer.
	srand(time(NULL));
	
	
	while (i<1) //3lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=9)
			{	
				if(alan[satir+1][sutun]==0)
				{
					if(alan[satir+2][sutun]==0)
					{
					alan[satir][sutun]=3;
					alan[satir+1][sutun]=3;
                	alan[satir+2][sutun]=3;
                	i++;
            		}
				}
				
			}
			
			else if(sutun<=9)
				{
				if(alan[satir][sutun+1]==0)
				{
				if(alan[satir][sutun+2]==0)
				{	alan[satir][sutun]=3;
					alan[satir][sutun+1]=3;
					alan[satir][sutun+2]=3;
					i++;
				}
				}
			
			}
			
			
		}
		
		
		
	}
	i=0;
	
	while (i<1) //3lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=9)
			{	
				if(alan[satir+1][sutun]==0)
				{
					if(alan[satir+2][sutun]==0)
					{
					alan[satir][sutun]=3;
					alan[satir+1][sutun]=3;
                	alan[satir+2][sutun]=3;
                	i++;
            		}
				}		
				
			}
			
			else if(sutun<=9)
				{
				if(alan[satir][sutun+1]==0)
				{
				if(alan[satir][sutun+2]==0)
				{	alan[satir][sutun]=3;
					alan[satir][sutun+1]=3;
					alan[satir][sutun+2]=3;
					i++;
				}
				}
			
			}
			
			
		}
		
		
		
	}
	i=0;
	
	while (i<1) //3lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=9)
			{	
				if(alan[satir+1][sutun]==0)
				{
					if(alan[satir+2][sutun]==0)
					{
					alan[satir][sutun]=3;
					alan[satir+1][sutun]=3;
                	alan[satir+2][sutun]=3;
                	i++;
            		}
				}
			
				
					
				
			}
			
			else if(sutun<=9)
				{
				if(alan[satir][sutun+1]==0)
				{
				if(alan[satir][sutun+2]==0)
				{	alan[satir][sutun]=3;
					alan[satir][sutun+1]=3;
					alan[satir][sutun+2]=3;
					i++;
				}
				}
			
			}
		
			
		}
		
		
		
	}
	i=0;
	
	while (i<1) //4lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=8)
			{
				if(alan[satir+1][sutun]==0)
				{
					if(alan[satir+2][sutun]==0)
					{if(alan[satir+3][sutun]==0)
					{
				alan[satir][sutun]=4;	
				alan[satir+1][sutun]=4;
                alan[satir+2][sutun]=4;
                alan[satir+3][sutun]=4;
                i++;
            }
            }
				}
			
			}
			
			else if(sutun<=8)
			{
			if(alan[satir][sutun+1]==0)
			{if(alan[satir][sutun+2]==0)
			{
					if(alan[satir][sutun+3]==0)
					{
					alan[satir][sutun]=4;
					alan[satir][sutun+1]=4;
					alan[satir][sutun+2]=4;
					alan[satir][sutun+3]=4;
					i++;
					}
				}
			}
			
			}
		
			
		}
		
		
		
	}
	
	
	i=0;
	
	while (i<1) //4lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=8)
			{
				if(alan[satir+1][sutun]==0)
				{
					if(alan[satir+2][sutun]==0)
					{if(alan[satir+3][sutun]==0)
					{
				alan[satir][sutun]=4;	
				alan[satir+1][sutun]=4;
                alan[satir+2][sutun]=4;
                alan[satir+3][sutun]=4;
                i++;
            }
            }
				}
				
			}
			
			else if(sutun<=8)
			{
			if(alan[satir][sutun+1]==0)
				{
					if(alan[satir][sutun+2]==0)
					{
						if(alan[satir][sutun+3]==0)
						{
						alan[satir][sutun]=4;
						alan[satir][sutun+1]=4;
						alan[satir][sutun+2]=4;
						alan[satir][sutun+3]=4;
						i++;
						}
					}
				}
			
			}
			
			
		}	
		
	}
	
	
	i=0;
	
	while (i<1) //4lü gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=3)
			{
				if(alan[satir+1][sutun]==0)
					{
					if(alan[satir+2][sutun]==0)
						{	if(alan[satir+3][sutun]==0)
							{
							alan[satir][sutun]=4;	
							alan[satir+1][sutun]=4;
                			alan[satir+2][sutun]=4;
                			alan[satir+3][sutun]=4;
                			i++;
            				}
            			}
					}
			
			}
			
			else if(sutun<=8)
			{
			if(alan[satir][sutun+1]==0)
			{if(alan[satir][sutun+2]==0)
				{
					if(alan[satir][sutun+3]==0)
					{
					alan[satir][sutun]=4;
					alan[satir][sutun+1]=4;
					alan[satir][sutun+2]=4;
					alan[satir][sutun+3]=4;
					i++;
					}
				}
			}
			
			}
			
			
		}
		
		
		
	}
	
	
	i=0;
	
	while (i<1) //5li gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=4)
			{
				if(alan[satir+1][sutun]==0)
				{if(alan[satir+2][sutun]==0)
					{
						if(alan[satir+3][sutun]==0)
						{
							if(alan[satir+4][sutun]==0)
							{
							alan[satir][sutun]=5;
							alan[satir+1][sutun]=5;
                			alan[satir+2][sutun]=5;
                			alan[satir+3][sutun]=5;
                			alan[satir+4][sutun]=5;
                			i++;
            				}
            			}
            		}
				}
			
			}
			
			else if(sutun<=7)
			{
			if(alan[satir][sutun+1]==0)
			{	
				if(alan[satir][sutun+2]==0)
				{
					if(alan[satir][sutun+3]==0)
					{	
						if(alan[satir][sutun+4]==0)
						{	alan[satir][sutun]=5;
							alan[satir][sutun+1]=5;
							alan[satir][sutun+2]=5;
							alan[satir][sutun+3]=5;
							alan[satir][sutun+4]=5;
							i++;
						}
					}
				}
			}
			
			}
			
			
		}
		
		
		
	}
	
	
	i=0;
	
	while (i<1) //5li gemiler.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=7)
			{
				if(alan[satir+1][sutun]==0)
				{if(alan[satir+2][sutun]==0)
					{
						if(alan[satir+3][sutun]==0)
						{
							if(alan[satir+4][sutun]==0)
							{
							alan[satir][sutun]=5;
							alan[satir+1][sutun]=5;
                			alan[satir+2][sutun]=5;
                			alan[satir+3][sutun]=5;
                			alan[satir+4][sutun]=5;
                			i++;
            				}
            			}
            		}
				}
			
			}
			
			else if(sutun<=7)
			{
			if(alan[satir][sutun+1]==0)
			{	
				if(alan[satir][sutun+2]==0)
				{
					if(alan[satir][sutun+3]==0)
					{	
						if(alan[satir][sutun+4]==0)
						{	alan[satir][sutun]=5;
							alan[satir][sutun+1]=5;
							alan[satir][sutun+2]=5;
							alan[satir][sutun+3]=5;
							alan[satir][sutun+4]=5;
							i++;
						}
					}
				}
			}
			
			}
			
			
		}
		
		
		
	}
	
	
	i=0;
	
	
	while (i<1) //6li gemi.
	{
		satir=rand()%11;
		sutun=rand()%11;
		
		if(alan[satir][sutun]==0)
		{
			
			if(satir<=2)
			{
				if(alan[satir+1][sutun]==0)
				{	if(alan[satir+2][sutun]==0)
					{
							if(alan[satir+3][sutun]==0)
						{
							if(alan[satir+4][sutun]==0)
							{
								if(alan[satir+5][sutun]==0)
								{
									alan[satir][sutun]=6;
									alan[satir+1][sutun]=6;
                					alan[satir+2][sutun]=6;
                					alan[satir+3][sutun]=6;
                					alan[satir+4][sutun]=6;
                					alan[satir+5][sutun]=6;
                					i++;
               					}
                			}
                		}
                	}
				}	
			}
			
			else if(sutun<=6)
			{
			if(alan[satir][sutun+1]==0)
				
			{if(alan[satir][sutun+2]==0)
				{
					if(alan[satir][sutun+3]==0)
					{
						if(alan[satir][sutun+4]==0)
						{
							if(alan[satir][sutun+5]==0)
							{
								alan[satir][sutun]=6;
								alan[satir][sutun+1]=6;
								alan[satir][sutun+2]=6;
								alan[satir][sutun+3]=6;
								alan[satir][sutun+4]=6;
								alan[satir][sutun+5]=6;
								i++;
							}
						}
					}
				}
			}
			}
			
		}
		
		
		
	}
	
	
	for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            printf(" %c",oyunekrani[i][j]);
        }
        printf("\n");
    }
    printf ("\n\n");
    
     for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
    
    while(hak<144)
    {	
    	printf("Lutfen vurmak istediginiz koordinati giriniz ;\n");
        printf("Satir :\n");scanf("%d",&satir);
        printf("Sutun :\n");scanf("%d",&sutun);
    	if(alan[satir][sutun]==0)
        {
            oyunekrani[satir][sutun]='-';
            system("cls");
            printf("Vurdugunuz yerde gemi yok,maalesef iskaladiniz.\n");
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
            printf ("\n\n");
    	 for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
            tablo[k]=0; k++;
    	
		}
		
    	else if(alan[satir][sutun]==3)
        {	sayac3++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!3 birimlik gemilerin bir birimini batirdiniz!!\n");
            
            
           
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
            printf ("\n\n");
    	 for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
			
			tablo[k]=3;	 k++;
        }
        else if(alan[satir][sutun]==4)
        {
            sayac4++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!4 birimlik gemilerin bir birimini batirdiniz!\n");
           
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
            printf ("\n\n");
    	 for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
            tablo[k]=4; k++;
        }
        
        
        else if(alan[satir][sutun]==5)
        {
            sayac5++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!5 birimlik gemilerin bir birimini batirdiniz!\n");
            
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            hak++;
            printf ("\n\n");
    	 for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
            tablo[k]=5; k++;
        }
        else if(alan[satir][sutun]==6)
        {
            sayac6++;
            oyunekrani[satir][sutun]='X';
            system("cls");
            printf("Tebrikler!6 birimlik geminin bir birimini batirdiniz!\n");
            
		
               
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %c",oyunekrani[i][j]);
                }
                printf("\n");
            }
            
            printf ("\n\n");
    	 for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf(" %d",alan[i][j]);
                }
                printf("\n");
            }
            
            hak++;
            tablo[k]=6; k++;
        }
    
    
    
	
	if(sayac3>=9)
	{
		if(sayac4>=12)
		{
			if(sayac5>=10)
			{
				if(sayac6>=6)
				{
				printf ("! TEBRIKLER !\n\n");
				break;
				}
			}
		}
	}
	
	}
	
	
	for(int k=0;k<hak;k++)
	{
		if(tablo[k]==0)
		{
			printf ("BASARISIZ \tVURDUGUNUZ YERDE GEMI YOK,MALESEF ISKALADINIZ!!!\n");
		}
		
		else if(tablo[k]==3)
		{
			printf ("BASARILI \t3 BIRIMLIK GEMININ BIR BIRIMINI BATIRDINIZ!!!\n");
		}
		else if(tablo[k]==4)
		{
			printf ("BASARILI \t4 BIRIMLIK GEMININ BIR BIRIMINI BATIRDINIZ!!!\n");
		}
		else if(tablo[k]==5)
		{
			printf ("BASARILI \t5 BIRIMLIK GEMININ BIR BIRIMINI BATIRDINIZ!!!\n");
		}
		else if(tablo[k]==6)
		{
			printf ("BASARILI \t6 BIRIMLIK GEMININ BIR BIRIMINI BATIRDINIZ!!!\n");
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
