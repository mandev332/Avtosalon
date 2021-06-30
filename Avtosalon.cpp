#include <stdio.h>
struct GM
{ 
	char nomi[15];
	int yili;
	char rangi[15];
	int karobka;
	int narxi;	
};
int main()
{
	printf ("Avtosaloningizda nechta mashina turi bor?   ");
	int n;
	scanf("%d",&n);
	struct GM mashina[n];
	for(int i=0; i<n; i++)
	{
		printf("%d-mashina\n",i+1);
		printf("Nomi:  ");
     	scanf("%s",mashina[i].nomi);
     	printf("Yili:  ");
     	scanf("%d",&mashina[i].yili);
     	printf("Rangi:  ");
     	scanf("%s",mashina[i].rangi);
     	printf("Karobkasi:  1-A/T   2-M/T:   "); r:
     	scanf("%d",&mashina[i].karobka);
      if (mashina[i].karobka>2){printf("1 yoki 2 ni kiriting:  "); goto r;	}
     	printf("Narxi $ da:  ");
     	scanf("%d",&mashina[i].narxi);
    }
    printf ("\nMana ro'yxat:");
		for(int i=0; i<n; i++)
	{
		printf("\n\t\t%d-mashina\n",i+1);
		printf("\n\t\tNomi:        %s ",mashina[i].nomi);
       	printf("\n\t\tYili:        %d yil",mashina[i].yili);
       	printf("\n\t\tRangi:       %s",mashina[i].rangi);
      if (mashina[i].karobka==1){printf("\n\t\tKarobkasi:   A/T");}
      if (mashina[i].karobka==2){printf("\n\t\tKarobkasi:   M/T");}
       	printf("\n\t\tNarxi:       %d $",mashina[i].narxi);
    }
    return 0;
}