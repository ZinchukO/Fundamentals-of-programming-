#include <stdio.h>

int main(void) {
  
int number = 52;
float floatn= 123.456;
char letter = 'F';
char strin[] = "Hello World";
void *zxc = &number;
  
printf("десяткове = %d\n", number);
printf("двійкове = %b\n", number);
printf("шістнадцяткове = %x\n", number);
printf("Biciмкове = %o\n", number);

printf("плаваюча = %f\n", floatn);
printf("експонційна = %e\n", floatn);
printf("гнучка = %g\n", floatn);

printf("символ = %c\n", letter);
printf("стрічка = %s\n", strin);
printf("вказiвник = %p\n", zxc);
return 0;
  
}