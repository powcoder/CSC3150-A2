https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdlib.h>

/* Return the allocated-on-heap joined string of str1 and str2;
 * Parameter size, if not NULL, is set as the length of the resultant string;
 * The string has to be freed after being useless;
 * */
char* join_string(char *str1, char *str2, size_t *size);

/* Return the allocated-on-heap joined path of path and subpath; 
 * Redudant slashes will be trimed;
 * Parameter size, if not NULL, is set as the length of the resultant path 
 * */
char* join_path(char *path, char *subpath, size_t *size);

/* Get the parent dir of dir_name literally
 * The resultant dir may don't exist
 * You may free the returned string in case of memory leak
 * */
char* get_parent_name(char *dir_name);
