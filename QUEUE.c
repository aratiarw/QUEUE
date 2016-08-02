void priority (char nama[], int usia) {
struct twitter *ara = (struct twitter*) malloc (sizeof(struct twitter));
strcopy (ara -> nama, nama);
ara -> usia = usia;
if (head = NULL) {
	head = tail = ara;
		tail -> next = NULL;
} else {
if (ara -> usia -> head -> usia) {
	ara -> next = head;
	head = ara;
} else if (ara -> usua < tail -> usia) {
	tail -> next = ara;
	tail = ara;
	tail -> next = NULL;
} else {
struct twitter *tempt = head ;
while (ara -> usia <= tempt -> next -> next -> usia) {
	tempt = tempet -> next;
}
ara -> next = tempt -> next;
tempt -> next = ara;
}
}
}