#ifndef _SHELL_H_
#define _SHELL_H_

#include <...> // Standard C library and system headers

// Definitions for read/write buffers
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

// Definitions for command chaining
#define CMD_NORM 0
#define CMD_OR 1
#define CMD_AND 2
#define CMD_CHAIN 3

// Definitions for convert_number()
#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

#define USE_GETLINE 0
#define USE_STRTOK 0

// Constants for history file
#define HIST_FILE ".simple_shell_history"
#define HIST_MAX 4096

// External environment variable
extern char **environ;

// Struct for singly linked list
typedef struct liststr {
    int num;
    char *str;
    struct liststr *next;
} list_t;

// Struct for passing information between functions
typedef struct passinfo {
    // ... (detailed comments for struct members)
} info_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
    0, 0, 0}

// Struct for built-in commands and associated functions
typedef struct builtin {
    char *type;
    int (*func)(info_t *);
} builtin_table;

// Function prototypes for various parts of the shell

#endif
