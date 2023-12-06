#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 12

typedef struct {
	char* name;
	char* country;
	float price;
} Game;

float updatePrice(Game  games[], int size, char* country) {//מעלה את כל המחירים במדינה שמקבלת ב10 אחוז 
	                                                       //ומחזירה את המחיר היקר ביותר 
	int i = 0;
	float max = games[0].price;
	int index = 0;
	for (i = 0; i < size; i++) {

		if (!strcmp(games[i].country, country)) {
			games[i].price = 1.1 * games[i].price;
			if (games[i].price > max) {
				max = games[i].price;
				index = i;
			}
		}
	}
	return games[index].price;
}


typedef struct {
	char name[SIZE];
	float age;
	int last;
} gizmo;

void printGizmoList(gizmo* g)
{
	printf("%s , %f", g->name,g->age);
}

gizmo* addGizmo(gizmo* g)
{
	int size = 0;
	gizmo* ptr = g;
	g = (gizmo*)malloc(sizeof(gizmo));
	if (!g)
	{
		printf("No allocated storage space:");
		exit(1);
	}
	while (!ptr->last)
	{
		size++;
		ptr++;
	}

	g = (gizmo*)realloc(g, sizeof(gizmo) * (size + 2));
	if (!g)
	{
		printf("No allocated storage space:");
		exit(1);
	}
	printf("Enter a new gizmo name:");
	scanf("%s,%f", g[size + 2].name, &g[size + 2].age);
	g[size + 1].last = 0;
	g[size + 2].last = 1;
	return g;
}

void main()
{
	gizmo* g=NULL;
	gizmo* l;
	l = addGizmo(g);
	printGizmoList(l);
	free(l);

	
}