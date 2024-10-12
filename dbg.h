#ifndef DBG_H
#define DBG_H

#include <stdio.h>
#include <stdbool.h>

// Define the dbg macro
#define printn(x) _Generic((x),                             \
                        int: dbg_print_int,              \
                        long: dbg_print_long,            \
                        unsigned long: dbg_print_ulong,  \
                        long long: dbg_print_llong,      \
                        unsigned long long: dbg_print_ullong, \
                        float: dbg_print_float,          \
                        double: dbg_print_double,        \
                        long double: dbg_print_ldouble,  \
                        char: dbg_print_char,            \
                        const char *: dbg_print_string,  \
                        char *: dbg_print_string,        \
                        bool: dbg_print_bool)(x)

// Function declarations for different types
void dbg_print_int(int x) { printf("%d\n", x); }
void dbg_print_long(long x) { printf("%ld\n", x); }
void dbg_print_ulong(unsigned long x) { printf("%lu\n", x); }
void dbg_print_llong(long long x) { printf("%lld\n", x); }
void dbg_print_ullong(unsigned long long x) { printf("%llu\n", x); }
void dbg_print_float(float x) { printf("%f\n", x); }
void dbg_print_double(double x) { printf("%f\n", x); }
void dbg_print_ldouble(long double x) { printf("%Lf\n", x); }
void dbg_print_char(char x) { printf("%c\n", x); }
void dbg_print_string(const char *x) { printf("%s\n", x); }
void dbg_print_bool(bool x) { printf("%s\n", x ? "true" : "false"); }

#endif // DBG_H