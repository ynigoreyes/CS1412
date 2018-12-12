#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//    Name:     Ynigo Reyes
//    Section:  Section # 501
//    Purpose of program:
//    Lab 9 - Project 1
//
//    1. Create a student struct
//    2. Find Maximum Marks
//    3. Adding Complex Numbers
//
//    Function main begins program execution

typedef struct {
  float num_1;
  float num_2;
} ComplexNumber;

typedef struct {
  char roll_no[100];
  char first_name[100];
  char last_name[100];
  char faculty[100];
  char address[100];
  char contact[100];
} Record;

typedef struct {
  char roll_no[100];
  char name[100];
  int marks_0;
  int marks_1;
  int marks_2;
} Student;

typedef struct {
  char name[100];
  int max;
} Maxes;

Record *CreateRecord(Record *record) {
  printf("Roll No.:");
  scanf("%s", record->roll_no);

  printf("First Name:");
  scanf("%s", record->first_name);

  printf("Last Name:");
  scanf("%s", record->last_name);

  printf("Faculty:");
  scanf("%s", record->faculty);

  printf("Address:");
  scanf("%s", record->address);

  printf("Contact No.:");
  scanf("%s", record->contact);

  return record;
}

void GetMarks(Student *student, int student_count) {
  printf("Enter marks of student %d for subject 0 : ", student_count);
  scanf("%d", &student->marks_0);

  printf("Enter marks of student %d for subject 1 : ", student_count);
  scanf("%d", &student->marks_1);

  printf("Enter marks of student %d for subject 2 : ", student_count);
  scanf("%d", &student->marks_2);
}

int main() {
  // Question 1
  Record record;
  CreateRecord(&record);

  printf(
      "\nRoll No.: %s\nFirst Name: %s\nLast Name: %s\nFaculty: %s\nAddress: %s\nContact No.: %s\n",
      record.roll_no,
      record.first_name,
      record.last_name,
      record.faculty,
      record.address,
      record.contact
      );

  // Question 2
  printf("\nEnter how many students: ");
  int max;
  scanf("%d", &max);

  Student students[max];
  // Get the names and roll no
  for(int i = 0; i < max; i++) {
    printf("Enter Name and Roll No. for student %d : ", i);
    scanf("%s %s", students[i].name, students[i].roll_no);
  }

  // Get Marks
  for(int i = 0; i < max; i++) {
    GetMarks(&students[i], i);
  }

  // Print Total Marks and get the max
  Maxes max_marks = { .max=-1 };
  Maxes max_marks_0 = { .max=-1 };
  Maxes max_marks_1 = { .max=-1 };
  Maxes max_marks_2 = { .max=-1 };

  for(int i = 0; i < max; i++) {
    Student curr = students[i];
    int sum = curr.marks_0 + curr.marks_1 + curr.marks_2;

    // Find Maxes
    if (sum > max_marks.max) {
      strcpy(max_marks.name, curr.name);
      max_marks.max = sum;
    }

    if (curr.marks_0 > max_marks_0.max) {
      strcpy(max_marks_0.name, curr.name);
      max_marks_0.max = curr.marks_0;
    }

    if (curr.marks_1 > max_marks_1.max) {
      strcpy(max_marks_1.name, curr.name);
      max_marks_1.max = curr.marks_1;
    }

    if (curr.marks_2 > max_marks_2.max) {
      strcpy(max_marks_2.name, curr.name);
      max_marks_2.max = curr.marks_2;
    }

    printf("Total marks obtained by student %s are %d\n", students[i].name, sum);
  }

  printf("Student %s got maxiumum marks = %d in Subject : 0\n", max_marks_0.name, max_marks_0.max);
  printf("Student %s got maxiumum marks = %d in Subject : 1\n", max_marks_1.name, max_marks_1.max);
  printf("Student %s got maxiumum marks = %d in Subject : 2\n", max_marks_2.name, max_marks_2.max);
  printf("%s obtained the total highest marks\n.", max_marks.name);

  // Question 3
  ComplexNumber c_num_1;
  ComplexNumber c_num_2;
  printf("For the first complex number\nEnter real and imaginary part respectively:\n");
  scanf("%f", &c_num_1.num_1);
  scanf("%f", &c_num_1.num_2);

  printf("\nFor the second complex number\nEnter real and imaginary part respectively:\n");
  scanf("%f", &c_num_2.num_1);
  scanf("%f", &c_num_2.num_2);

  printf("\nSum = %.1f + %.1fi\n", c_num_1.num_1 + c_num_2.num_1, c_num_1.num_2 + c_num_2.num_2);
}

