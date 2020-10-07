/* This is the program is to demonstrate the use of the 
 * double linked list. first we create the linked list and
 *  then add the cell to the linked list....
 */


struct arun
{
	int i;
	char c;
	struct arun *next;
	struct arun *prev;
};
#define NULL (void *)0
void add (struct arun *, struct arun *);
void main()
{
	int n;
	struct arun c1,c2;
	struct arun c3 ={ 12,'c', NULL, NULL};
	c1.i = 10;
	c1.c = 'a';
	c1.next = &c2;
	c1.prev = &c2;
	
	c2.i = 10;
	c2.c = 'a';
	c2.next = &c1;
	c2.prev = &c1;
	
	add (&c3,&c2);
//	for (n = 0; n<2; n++)
		
}
void add (struct arun *new, struct arun *old)
{
	new -> next = old ->next;
	new -> prev = old;
	old ->next ->prev = new;
	old ->next =new;
}
