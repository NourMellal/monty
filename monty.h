#ifndef _MAIN_H
#define _MAIN_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int n;

#define uint unsigned int



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* error_handler functions */
void error_arguments(void);
void open_error(char **);
void invalidInstruction_error(char *invalidInctruvtion, uint line);
void not_int_err(uint line);
void malloc_error(void);

/*executed function */
void open_and_read(char **argv);
int is_number(char *token);

/*opcodes*/
void (*get_op_code(char *token, uint line)) (stack_t **, uint);

 /* Stack */
void push_stack(stack_t **top, uint line_number);
void pall_stack(stack_t **top, uint line_number);


#endif /* _MONTY_H_ */
