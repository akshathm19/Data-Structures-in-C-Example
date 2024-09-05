#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Practiceq.h"

Branch *initialise_branch()
{
    Branch *new_branch;
    new_branch = (Branch *)malloc(sizeof(Branch));
    if(NULL==new_branch)
        return BRANCH_ALLOC_FAIL;
    new_branch->head = new_branch->tail = NULL;
    new_branch->VLSI_count = new_branch->MVT_count = new_branch->ES_count = new_branch->BD_count = 0;
    new_branch->total_students = 0;
    return new_branch;
}
Node *get_node(Student data)
{
    Node *new_student;
    new_student = (Node *)malloc(sizeof(Node));
    if(NULL == new_student)
        return NODE_ALLOC_FAIL;
    new_student->data = data;
    new_student->ptr = NULL;
    return new_student;

}

int insert_student_data(Branch *new_branch,Student data)
{
    Node *new_node;
    new_node = get_node(data);
    if(NULL == new_node)
        return STUDENT_ALLOC_FAIL;
    if(new_branch->total_students == 0)
        new_branch->head = new_branch->tail = new_node;
    else
    {
        new_branch->tail->ptr = new_node;
        new_branch->tail = new_node;
    }
    return SUCCESS;


}

void display_student_data(Branch * new_branch)
{
	printf("Students data\n");
	Node * temp = new_branch->head;
	while(temp != NULL)
	{
		printf("Reg_no: %d\nName: %s\nCgpa: %.2f\nContact_number: %s\nBranch: %s\nStatus: %d\n",
			    temp->data.reg_no,temp->data.name,
			    temp->data.cgpa, new_branch->head->data.contact_number,
			    temp->data.branch_name,temp->data.status);
		temp = temp->ptr;
		printf("\n\n");
	}
	printf("\n");
}
