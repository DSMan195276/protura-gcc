
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

#undef STARTFILE_SPEC
#define STARTFILE_SPEC \
    "crt0.o%s crti.o%s crtbegin.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC \
    "crtend.o%s crtn.o%s"

