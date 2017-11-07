# include <conio.h>
# include <stdio.h>
# include <String.h>
# include <fstream>

using namespace std;

// Declaro variables del archivo
char mat[5], nom[21], ap[21], apm[21], car[3], cor[31];
int dia, mes, ano;
float prom;
//******************************

void altas()
{
	system("cls");
	printf("Indica la matr%ccula : ", 161); gets(mat);
	printf("Indica el nombre     : "); gets(nom);
	printf("Indica el AP paterno : "); gets(ap);
  printf("Indica el AP paterno : "); gets(apm);
	printf("Indica la carrera    : "); gets(car); strupr(car);
	printf("Indica el correo     : "); gets(cor);
	printf("Indica Calif 1       : "); scanf("%d", &cl1); 
	printf("Indica Calif 2       : "); scanf("%d", &cl2); 
	printf("Indica Calif 3       : "); scanf("%d", &cl3); gets(falso);
	prom=(cl1+cl2+cl3)/3.0;
	
	ofstream arch;
	arch.open("alumnos.txt", ios::app);
	for (int i=0;i<strlen(nom);i++) if (nom[i]==' ') nom[i]='_';
	for (int i=0;i<strlen(ap);i++) if (ap[i]==' ') ap[i]='_';
	arch <<mat <<" " <<nom <<" " <<ap <<" " <<car <<" " <<cor <<" " <<cl1 <<" " <<cl2 <<" " <<cl3 <<" " <<prom <<"\n"; 
	arch.close();
}

