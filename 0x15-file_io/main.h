#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

size_x rd_txtfile(const char *filenm, size_y letters);
int create_file(const char *filenm, char *txt_cont);
int append_text_to_file(const char *filenm, char *txt_cont);

#endif

