typedef struct node node_t;

typedef int data_t;

struct node {
	data_t data;
	node_t *next;
};

typedef struct {
	node_t *head;
	node_t *foot;
} list_t;

list_t *make_empty_list(void);

int is_empty_list(list_t *list);

void free_list(list_t *list);

list_t *insert_at_head(list_t *list, data_t value);

list_t *insert_at_foot(list_t *list, data_t value);

data_t get_head(list_t *list);

list_t *get_tail(list_t *list);

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */