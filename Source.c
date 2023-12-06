//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 10
//#define SIZE 40
//typedef struct User {
//	int id[10];
//	char* userName;
//} User;
//typedef struct Massage {
//	char* content;
//	User* creator;
//} Message;
//typedef struct Post {
//	Message postContent;
//	Message* replays;
//	int replaysNo;
//}Post;
//void addUser(User* user) {
//	printf("pls enter id:\n");
//	fseek(stdin, 0, SEEK_END);
//	gets(user->id);
//	char saveUserName[10];
//	printf("enter username\n");
//	gets(saveUserName);
//	int len = strlen(saveUserName);
//	user->userName = (User*)malloc((len + 1) * sizeof(char));
//	if (user->userName == NULL) {
//		printf("error");
//		exit(1);
//	}
//	strcpy((user->userName), saveUserName);
//}
//void createMessage(User* user, Message* userMassage) {
//	char saveMassage[40];
//	fseek(stdin, 0, SEEK_END);
//	gets(saveMassage);
//	int len = strlen(saveMassage);
//	userMassage->content = (char*)malloc((len + 1) * sizeof(char));
//	if (user->userName == NULL) {
//		printf("error");
//		exit(1);
//	}
//	else {
//		strcpy(userMassage->content, saveMassage);
//	}
//	userMassage->creator = user;
//}
//void createPost(User* user, Post* newPost) {
//	printf("enter a post:\n");
//	createMessage(user, &newPost->postContent);
//	newPost->replays = NULL;
//	newPost->replaysNo = 0;
//}
//void addComment(User* user, Post* newPost) {
//	newPost->replaysNo++;
//	newPost->replays = (Message*)realloc(newPost->replays, newPost->replaysNo * sizeof(Message));
//
//	if (newPost->replays == NULL) {
//		printf("NULL");
//		exit(1);
//	}
//	else {
//		printf("enter a comment:\n");
//		createMessage(user, &newPost->replays + (newPost->replaysNo));
//	}
//}
//void printPost(Post* newPost) {
//	printf("posted by %s:%s\n", newPost->postContent.creator->userName,
//		(*newPost).postContent.content);
//	for (int i = 0; i < (*newPost).replaysNo; i++) {
//		printf("replays by %s :%s\n", newPost->replays[i].creator->userName, newPost->replays[i].content);
//
//	}
//}
//User* searchUser(User users[], int size, char* user) {
//	for (int i = 0; i < size; i++) {
//		if (strcmp(users[i].userName, user) == 0) {
//			return (user + i);
//		}
//		else
//		{
//			return NULL;
//		}
//	}
//}
//char loggedMenu() {
//	char choise = 0;
//	puts("\n*****What Would you like to do:****\n");
//	puts("1-add Post to User\n");
//	puts("2-View all posts to add a comment\n");
//	puts("0-logOut\n");
//	do {
//		scanf("%c", &choise);
//		if ((choise < '0' || choise > '2'))
//			printf("wrong choise - try again\n");
//	} while (choise < '0' || choise > '2');
//	return choise;
//}
//void main()
//{
//	User users[MAX];
//	Post posts[MAX];
//	int noOfUsers = 0, noOfPosts = 0;
//	char userName[SIZE];
//	char internalRes;
//	int choosenPost = 0;
//	internalRes = -1;
//	while (internalRes != '0') {
//		internalRes = loggedMenu();
//		switch (internalRes) {
//		case('1'):
//			if (noOfUsers == 0) {
//				printf("there are no users\n Add a new User:\n");
//				addUser(&users[0]);
//				noOfUsers++;
//				createPost(&users[0], posts + noOfPosts);
//				noOfPosts++;
//			}
//			else
//			{
//				printf("Please enter search user name:\n");
//				fseek(stdin, 0, SEEK_END);
//				gets(userName);
//				User* userexist = searchUser(users, noOfUsers,
//					userName);
//				if (userexist == NULL) {
//					printf("User does not exist\nAdd a new User:\n ");
//
//					addUser(&users[noOfUsers]);
//					userexist = &users[noOfUsers];
//					noOfUsers++;
//				}
//				createPost(userexist, posts + noOfPosts);
//				noOfPosts++;
//			}
//			break;
//		case('2'):
//			if (noOfPosts == 0)
//				puts("no posts");
//			else
//			{
//				for (int i = 0; i < noOfPosts; i++) {
//					printf("%d\n", i + 1);
//					printPost(posts + i);
//				}
//				printf("Please enter search user name:\n ");
//				fseek(stdin, 0, SEEK_END);
//				gets(userName);
//				User* userexist = searchUser(users, noOfUsers,
//					userName);
//				if (userexist != NULL) {
//					puts("choose number of the post you want to comment(0 = non) :\n ");
//
//					scanf("%d", &choosenPost);
//					if (choosenPost > 0 && choosenPost <=
//						noOfPosts)
//						addComment(userexist, posts +
//							choosenPost - 1);
//				}
//				else {
//					printf("User does not exist, unable to comment on the post you selected\n");
//
//				}
//			}
//			break;
//		case('0'):
//			puts("user logged out");
//			int replysNum;
//			for (int i = 0; i < noOfPosts; i++)
//			{
//				replysNum = posts[i].replaysNo;
//				for (int j = 0; j < replysNum; j++)
//				{
//					free((posts + i)->replays + j);
//				}
//				free((posts + i)->postContent.content);
//			}
//			for (int i = 0; i < noOfUsers; i++)
//			{
//				free((users + i)->userName);
//			}
//			break;
//		}
//		internalRes = loggedMenu();
//	}
//}