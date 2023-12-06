//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 40
//#define MAX 10
//
//typedef struct {
//	char id[MAX];
//	char *userName;
//}user;
//
//typedef struct {
//	char* content;
//	user* creator;
//}Message;
//
//typedef struct {
//	Message postContent;
//	Message* replays;
//	int replaysNo;
//}Post;
//
//
//void createUser(user* u);
//void createMessage(const user* u, Message* msg);
//void createPost(const user* u, Post* newPost);
//void addComment(const user* u, Post* p);
//void printPost(const Post* p);
//user* searchUser(user* userArr, int noOfUsers, char* userName);
//char loggedMenu();
//
//void main()
//{
//	user users[MAX];
//	Post posts[MAX];
//	int noOfUsers = 0, noOfPosts = 0;
//	char userName[SIZE];
//	char internalRes;
//	int choosenPost = 0;
//
//	internalRes = -1;
//	while (internalRes != '0') {
//		internalRes = loggedMenu();
//		switch (internalRes) {
//		case('1'):
//			if (noOfUsers == 0) {
//				printf("there are no users\nAdd a new User: ");
//				createUser(&users[0]);
//				noOfUsers++;
//				createPost(&users[0], posts + noOfPosts);
//				noOfPosts++;
//			}
//			else
//			{
//				printf("Please enter search user name: ");
//				fseek(stdin, 0, SEEK_END);
//				gets(userName);
//
//				user* userexist = searchUser(users, noOfUsers, userName);
//				if (userexist == NULL) {
//					printf("User does not exist\nAdd a new User: ");
//					createUser(&users[noOfUsers]);
//					userexist = &users[noOfUsers];
//					noOfUsers++;
//				}
//				createPost(userexist, posts + noOfPosts);
//				noOfPosts++;
//
//			}
//			break;
//		case('2'):
//			if (noOfPosts == 0)
//				puts("no posts");
//			else
//			{
//				for (int i = 0; i < noOfPosts; i++) {
//					printf("%d)*********post********\n)", i + 1);
//					printPost(posts + i);
//					printf("\n*********end post********\n");
//				}
//				printf("Please enter search user name: ");
//				fseek(stdin, 0, SEEK_END);
//				gets(userName);
//				user* userexist;
//
//				userexist = searchUser(users, noOfUsers, userName);
//				if (userexist == NULL) {
//					printf("User does not exist\nAdd a new User: ");
//					createUser(&users[noOfUsers]);
//					userexist = &users[noOfUsers];
//					noOfUsers++;
//				}
//
//				puts("choose number of the post you want to comment (0=non):  ");
//				scanf("%d", &choosenPost);
//				if (choosenPost > 0 && choosenPost <= noOfPosts)
//					addComment(userexist, posts + choosenPost - 1);
//
//
//
//			}
//			break;
//		case('0'):
//			puts("user logged out");
//			for (int i = 0; i <noOfPosts; i++)
//			{
//				
//				for (int j = 0; j < noOfUsers; j++)
//				{
//					free((posts + i)->replays + j);
//				}
//				free(posts + i);
//			}
//			free(posts->replays);
//			break;
//		}
//
//	}
//}
//
//char loggedMenu() {
//	char choise = 0;
//	puts("\n*****What Would you like to do:****\n");
//	puts("1-add Post\n");
//	puts("2-View Posts\n");
//	puts("0-logOut\n");
//
//	do {
//		scanf(" %c", &choise);
//		if ((choise < '0' || choise > '2'))
//			printf("wrong choise - try again\n");
//	} while (choise < '0' || choise > '2');
//
//	return choise;
//}
//
//
//void createUser(user* u)
//{
//	char userName[SIZE];
//	printf("Enter ID:\n");
//	gets(u->id);
//	printf("Enter a User Name:\n");
//	gets(userName);
//	u->userName = (user*)malloc((strlen(userName) + 1) * sizeof(char));
//	if (!u->userName)
//	{
//		printf("Memory allocation falied");
//		exit(1);
//	}
//	else
//	    strcpy(u->userName, userName);
//
//
//}
//
//void createMessage(const user* u, Message* msg)
//{
//	Message* str = msg;
//	char co[SIZE];
//	printf("Enter a Message:\n");
//	gets(co);
//	str->content = (Message*)malloc(strlen(co) + 1 * sizeof(char));
//	if (!str->content)
//	{
//		printf("Memory allocation falied");
//		exit(1);
//	}
//	else
//		strcpy(str->content, co);
//	str->creator=u;
//
//}
//
//void createPost(const user* u, Post* newPost)
//{
//	createMessage(u, newPost);
//	newPost->replays = NULL;
//	newPost->replaysNo = 0;
//}
//
//void addComment(const user* u, Post* p)
//{
//	p->replays = (Post*)malloc(p->replaysNo * sizeof(Post));
//	if (!p->replays)
//	{
//		printf("Memory allocation falied");
//		exit(1);
//	}
//	else
//		p->replaysNo++;
//	p->replays = (Post*)realloc(p->replays,p->replaysNo * sizeof(Post));
//	if (!p->replays)
//	{
//		printf("Memory allocation falied");
//		exit(1);
//	}
//	createMessage(u, p->replays+p->replaysNo);
//}
//
//void printPost(const Post* p)
//{
//	printf("User Name of who wrote the post:\n%s", p->postContent.creator->userName);
//	printf("\nThe post:\n%s", p->postContent.content);
//    printf("\nThe comments:\n");
//	for (int i = 0; i < p->replaysNo; i++)
//	{
//		printf("\nUser name:\n%s", p->replays[i].creator->userName);
//		printf("\nThe comment\n%s", p->replays[i].content);
//
//	}
//}
//
//user* searchUser(user* userArr, int noOfUsers, char* userName)
//{
//	for (int i = 0; i < noOfUsers; i++)
//	{
//		if (strcmp(userArr[i].userName, *userName) == 0)
//			return &userArr[i].userName;
//	}
//	printf("User name not found");
//	retuen NULL;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAXROW 3
#define MAXCOL 2
struct emp {
	char* n;
	int age;
};
void main()
{
	char name[] = "Danny dinn";
	struct emp e1 = { name, 33 };
	struct emp e2 = e1;
	e2+1 = 'R';
	e2.age = 23;
	printf("%s %d", e1.n, e1.age);
}