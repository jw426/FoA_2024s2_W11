#define MAXCHAR 50
typedef char word_t[MAXCHAR+1];

typedef struct {
    word_t title, given, middle, family; 
} name_t; 

typedef struct {
    short dd, mm, yyyy;
} date_t; 

typedef struct {
    date_t marriage;
    date_t divorce;
    date_t is_divorced;
    name_t spouse; 
} marriage_detail_t;    

typedef struct {
    short yyyy; 
    unsigned int net_income, tax_liability; 
    date_t tax_paid; 
} work_detail_t; 

typedef struct {
    name_t name; 

    date_t birth, death; 
    short is_dead;
    
    marriage_detail_t marriages[10];
    short num_marriages; 

    work_detail_t[100];
    short num_work_years; 

} person_t;

person_t australia[30000000];
person_t new_zealand[6000000];