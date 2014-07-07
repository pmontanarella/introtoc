#include <stdio.h>
#include <stdlib.h>

struct office_database {
	int salary;
	char *name;
	char *last_name;
	struct office_database *next;
};

void print_list(struct office_database *n)
{
	while(n != NULL) {
		printf("Name is %s\n", n -> name);
		printf("Last Name is %s\n", n -> last_name);
        printf("Salary is %d\n", n -> salary);
		n = n->next;
	}
}


void free_mem(struct office_database*n)
{
	//TODO
}
// x is salary, y is name, z is last name
struct office_database *create_new_entry(int x, char *y, char *z, struct office_database *nxt)
{
	struct office_database *new_entry;
	
	new_entry = (struct new_entry *) malloc(1 * sizeof(struct office_database));
    
    new_entry->name = y;
	new_entry->last_name = z;
    new_entry->salary = x;
	new_entry->next = nxt;
    
	return new_entry;
}

/*
 * Adds a new entry to the front of the list
 *
 * @new_entry: The new entry to be added
 * @list: The list to which we are adding a entry
 */
struct office_database *add_to_front(struct office_database *list, struct office_database *new_entry)
{
	/* Have the node pointing to the start of the list */
	new_entry->next = list;
	
	/* Make new node the head of our list */
	list = new_entry;
	
	return list;
}


int main(int argc, const char *argv[])
{
	struct office_database *list_head = NULL;
	
	
	int req;
    int salary;
    char *name;
    char *last_name;
	req = 1;
    
    name = (char*)malloc(20*sizeof(char));
    last_name = (char*) malloc(20*sizeof(char));
	
	while (1) {
		if (req == 1) {
			printf("Please enter the name: ");
			scanf("%s", name);
			printf("Please enter the last name: ");
			scanf("%s", last_name);
            printf("Please enter the salary: ");
			scanf("%d", &salary);
			list_head = create_new_entry(salary, name, last_name, NULL);
			req++;
		} else {
			printf("Enter 2 to make a new entry, enter 3 to print the list of entries, enter 0 to quit\n");
			scanf("%d", &req);
			if (req == 2){
				printf("Please enter the name: ");
				scanf("%s", name);
				printf("Please enter the last name: ");
				scanf("%s", last_name);
                printf("Please enter the salary: ");
				scanf("%d", &salary);
				list_head = add_to_front(list_head, create_new_entry(salary, name, last_name, NULL));
				req += 2;
                //printf("%d\n", req);
			}
			if (req == 3){
				print_list(list_head);
			}
			if (req == 0){
				break;
			}
		}
	}
	
    
    
	print_list(list_head);
    
	free_mem(list_head);
	return 0;
}
