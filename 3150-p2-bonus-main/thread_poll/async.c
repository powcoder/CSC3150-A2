https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder

#include <stdlib.h>
#include <pthread.h>
#include "async.h"
#include "utlist.h"

void async_init(int num_threads) {
    return;
    /** TODO: create num_threads threads and initialize the thread pool **/
}

void async_run(void (*hanlder)(int), int args) {
    hanlder(args);
    /** TODO: rewrite it to support thread pool **/
}