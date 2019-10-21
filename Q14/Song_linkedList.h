/* Song_linkedList.h */

#ifndef FILM_LINKEDLIST_H_
#define FILM_LINKEDLIST_H_

#include "Include_list.h"

struct song {
    char* name;
    int rating;
    struct song* next;
};

void song_info_collection();
void song_list_print();
void song_list_free();

#endif
