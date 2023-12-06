//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct {
//	char name[12]; //שם הסטודנט
//	float grade; //ציון 
//	char last; // =='#' באיבר האחרון של מערך Student_t
//} Student_t;
//
//void printStudentList(Student_t* r) { //מקבלת מצביע למערך ומדפיסה את איבריו  
//	
//	int i = 0;
//	do {
//		printf("%s,%g \n", r[i].name, r[i].grade); //assume there is at least one element
//		if (r[i].last == '#') break;
//		i++;
//	} while (1);
//}
//
//	Student_t* addStudent(Student_t * r) { //הפונקציה מבקשת מהמשתמש שם של Student חדש ואת גילו,   
//		int i = 0;                         //מוסיפה את הנתונים למערך
//		                                  //ומחזירה מצביע למערך המעודכן
//		Student_t* New_Student_ptr;
//		Student_t s;
//		while (r[i].last != '#') 
//			i++; //find the size of the given array
//		int size_of_new_array = sizeof(s) * (i + 2); //calculate the size of the new array
//		i = 0;
//		New_Student_ptr = (Student_t*)realloc(r, size_of_new_array); // define a new array
//		if (New_Student_ptr == NULL)
//		{ 
//			printf("no ore memory"); exit(0); 
//		}
//		while (New_Student_ptr[i].last != '#') 
//			i++; //Find the last element and
//		New_Student_ptr[i++].last = '0'; // Update the one before last element
//		New_Student_ptr[i].last = '#';
//		printf("enter student name\n");
//		scanf("%s", New_Student_ptr[i].name);
//		printf("enter student grade\n");
//		scanf("%f", &New_Student_ptr[i].grade);
//		return New_Student_ptr;
//	}
////
////	void main()
////	{
////		int i = 0;
////		Student_t ptr[2] = { "chen",60.5,'0',"Eden",80.2,'#'};
////		Student_t *p =addStudent(&ptr);
////		
////	}
