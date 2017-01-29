#include <stdio.h>

struct Record{

  int id;
  char name[10];

};

FILE *old_file;
FILE *new_file;

int main(){

  struct Record record;
  old_file = fopen("ffscanf.txt", "r");
  new_file = fopen("ffprintf.txt", "w");

    fscanf(old_file, "%d %s", &record.id, &record.name);
  while(fgetc(old_file) != -1){
    fprintf(new_file, "%d %s\n", record.id, record.name);
    fscanf(old_file, "%d %s", &record.id, &record.name);
  }
}
