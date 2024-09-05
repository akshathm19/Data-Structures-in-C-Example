#define MAX_SIZE 20
#define BRANCH_SIZE 20
#define BRANCH_ALLOC_FAIL NULL
#define NODE_ALLOC_FAIL NULL
#define STUDENT_ALLOC_FAIL NULL
#define SUCCESS 1

struct  _student_details_
{
    int reg_no;
    char name[MAX_SIZE];
    float cgpa;
    char contact_number[10];
    char branch_name[BRANCH_SIZE];
    int status;
};

typedef struct _student_details_ Student;

struct _node_
{
    Student data;
    struct _node_ *ptr;
};

typedef struct _node_ Node;

struct _branch_
{
    Node *head,*tail;
    int VLSI_count;
    int MVT_count;
    int ES_count;
    int BD_count;
    int total_students;
};

typedef struct _branch_ Branch;

Branch *initialise_branch();
Node *get_node(Student);
int insert_student_data(Branch *,Student);
void display_student_data(Branch *);
