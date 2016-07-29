void priority(char nama[], int usia) {
struct facebook *curr = (struct facebook*) malloc(sizeof(struct facebook));
strcpy(curr-> nama, nama);
curr-> usia = usia;
if (head == NULL) {
	head = tail = curr;
	tail -> next = NULL;
} else {
if (curr -> usia > head -> usia) {
	curr -> next = head;
	head = curr;
} else if (curr -> usia < tail -> usia ) {
	tail -> next = curr;
	tail = curr;
	tail -> next = NULL;
} else {
struct facebook *temp=head ;
while (curr -> usia <= temp -> next -> usia) {
	temp = temp -> next;
}
curr -> next = temp -> next;
temp -> next = curr;
}
}
}