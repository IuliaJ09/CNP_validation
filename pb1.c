#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//6110910020076
//a aa ll zz jj nnnc
int validare(char s[])
{
	int ok = 0, i,v[15],aux;
	if (strlen(s) != 13)
		return 0;
	else
	{
		for (i = 0; i < 13; i++)
			v[i] = s[i] - 48;
		if (v[0] == 5 || v[0] == 6)
			ok = 0;
		else
			ok = 1;
		aux = v[1];
		aux = aux * 10 + v[2];
		if (aux < 10 || aux>22)
			ok = 1;
		if (v[3] < 0 || v[3]>1)
			ok = 1;
		if (v[4] < 0 || v[4]>9)
			ok = 1;
		if (v[7] < 0 || v[7]>5)
			ok = 1;
		if (v[8] < 0 || v[8]>9)
			ok = 1;
		for (i = 9; i <= 12; i++)
			if (v[i] < 0 || v[i]>9)
				ok = 1;

	}
	if (ok == 1)
		return 0;
	else
		return 1;
}
int main()
{
	char s[14];
	int v[14], aux;
	int opt,i;
	do
	{
		printf("Introduceti CNP-ul:");
		scanf("%s", s);
	} while (validare(s)==0);
		
	do
	{
		printf("1.Afisarea sir\n");
		printf("Afisare varsta\n");
		printf("0.Iesire\n");
		printf("Optiunea dvs este:");
		scanf("%d", &opt);
		switch (opt)
		{
		case 0:
			exit(0);
			break;
		case 1:
			printf("CNP-ul este: %s", s);
			break;
		case 2:
			for (i = 0; i < 13; i++)
				v[i] = s[i] - 48;
			aux = v[1];
			aux = aux * 10 + v[2];
			printf("Varsta este: %d\n", 22 - aux);
			break;
		default:
			printf("Optiunea nu este valida");
			break;
		}

	} while (1);

	return 0;
}