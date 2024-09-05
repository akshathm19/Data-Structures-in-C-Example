#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<string.h>
#include"Practiceq.h"


int main(){

    Branch *new_branch;
    new_branch = initialise_branch();
    assert(new_branch->total_students == 0);
   // assert(new_branch->total_students == 45);
    int VLSI_count = 241038000;
    int MVT_count = 241060000;
    int ES_count = 241097000;
    int BD_count = 241034000;


    Student data;
	data.reg_no = VLSI_count;
	VLSI_count = VLSI_count + 1;
	strcpy(data.name, "Rohit");
	data.cgpa = 9.37;
	strcpy(data.branch_name, "VLSI");
	strcpy(data.contact_number,"9875322130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->VLSI_count++;
	assert(new_branch->total_students == 1);


	data.reg_no = VLSI_count;
	VLSI_count = VLSI_count + 1;
	strcpy(data.name, "Akshath");
	data.cgpa = 8.91;
	strcpy(data.branch_name, "VLSI");
	strcpy(data.contact_number,"7595642130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->VLSI_count++;
	assert(new_branch->total_students == 2);

	assert(new_branch->total_students == 1);

	data.reg_no = MVT_count;
	MVT_count = MVT_count + 1;
	strcpy(data.name, "Ranjan");
	data.cgpa = 8.37;
	strcpy(data.branch_name, "MVT");
	strcpy(data.contact_number,"9875642130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->MVT_count++;

	//assert(new_branch->total_students == 3);

    data.reg_no = VLSI_count;
	VLSI_count = VLSI_count + 1;
	strcpy(data.name, "Arjun");
	data.cgpa = 8.97;
	strcpy(data.branch_name, "VLSI");
	strcpy(data.contact_number,"9633642130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->VLSI_count++;

	data.reg_no = ES_count;
	ES_count =  ES_count + 1;
	strcpy(data.name, "Ashwath");
	data.cgpa = 9.37;
	strcpy(data.branch_name, "ES");
	strcpy(data.contact_number,"9875642130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->ES_count++;

	data.reg_no = BD_count;
	BD_count = BD_count + 1;
	strcpy(data.name, "Krishna");
	data.cgpa = 9.77;
	strcpy(data.branch_name, "Big_Data");
	strcpy(data.contact_number,"7775642130");
	data.status = 1;
	insert_student_data(new_branch, data);
	new_branch->total_students++;
	new_branch->BD_count++;


	display_student_data(new_branch);
	printf("gg");







}

