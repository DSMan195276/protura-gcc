
#undef TARGET_PROTURA
#define TARGET_PROTURA 1

#define LIB_SPEC "-lc"

#undef NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS() \
    do { \
        builtin_define("__protura__"); \
        builtin_define("__unix__"); \
    } while (0)

