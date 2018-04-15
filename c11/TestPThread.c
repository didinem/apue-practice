//
// Created by didinem on 4/15/2018.
//
#include "c11_header.h"

void testPThreadSelf() {

    pthread_t tid = pthread_self();
    printf("tid:%d", tid);


}
