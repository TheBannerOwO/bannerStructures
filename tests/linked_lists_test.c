#include <stdio.h>
#include "linked_lists.h"

int main() {
    for (int i = 0; i < 200; i++){
       LinkedList *list = linked_list_create();
       linked_list_append(list, &i, sizeof(int));
       linked_list_get(list, i);
       int a = i-1;
    //    linked_list_prepend(list, &a, sizeof(int));
    //    linked_list_get(list, 0);
    //    linked_list_clean(list);
    //    linked_list_get(list, 0);
       linked_list_destroy(list);
    }
}