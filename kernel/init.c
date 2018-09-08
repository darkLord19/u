/*
* This file contains functions to initialize kernel
*/
void umain(void){
	const char *msg = "Hello World";
	char *vidptr = (char*)0xb8000;
	unsigned int i = 0;
	unsigned int j = 0;
	while(msg[j] != '\0') {
		/* the character's ascii */
		vidptr[i] = msg[j];
		/* attribute-byte: give character black bg and light grey fg */
		vidptr[i+1] = 0x02;
		j++;
		i += 2;
	}
	return;
}
