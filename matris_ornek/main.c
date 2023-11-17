#include <stdio.h>
#include <stdlib.h>

void bastirma(int matris[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}


}

void simetrik_mi(int matris[4][4],int *deger)
{
	*deger = 1;
	int i,j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(matris[i][j] != matris[j][i])
			*deger = 0;
		}
	}
}

void diyagonal_mi(int matris[4][4],int *diyagonal_mi)
{
	*diyagonal_mi = 1;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i!=j && matris[i][j] != 0 )
			*diyagonal_mi= 0;
		}

	}




}


int main()
{
	int matris[4][4];
	int i,j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matris[i][j]);
		}
	}
	int s,d;
	bastirma(matris);


	simetrik_mi(matris,&s);
	if(s == 1)
	{
		printf("bu matris simetriktir\n");
	}
	else
	printf("bu matris simetrik degildir\n");

	diyagonal_mi(matris,&d);
	if(d == 1)
	printf("bu matris diyagonaldir");
	else
	printf("bu matris diyagonal degildir");




    return 0;
}
