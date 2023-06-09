#include <stdio.h>
#include <stdlib.h>

struct present {
  char *present_name;
  float price;
};

struct present *delete_present_list(struct present *present_list, int num) {

  if (present_list == NULL) {
    return present_list;
  }

  for (int i = 0; i < num; i++) {
    free(present_list[i].present_name);
  }

  free(present_list);

  return present_list;
}

struct present *add(int num, char names[][50], float price[]) {

  struct present *list = malloc(sizeof(struct present) * num);
  for (int i = 0; i < num; i++) {
    list[i].present_name = names[i];
    list[i].price = price[i];
  }

  return list;
}

void printList(int num, struct present *list) {
  for (int i = 0; i < num; i++) {
    printf("%10s %10f\n", list[i].present_name, list[i].price);
  }
}

int main() {

  char names[][50] = {"Andre", "Alex", "Ellie", "Rachel"};
  float price[4] = {5.0, 4.0, 3.0, 20.5};

  struct present *list = add(4, names, price);

  printf("list of names created:\n");
  printList(4, list);

  delete_present_list(list, 4);

  printf("\nlist of names after deletion:\n");
  printList(4, list);

  return 0;
}