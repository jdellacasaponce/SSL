# "HELLO, WORLD!" en C

## "Trabajo práctico 0"

- ### 3

  - #### bi

    - ##### A y B - Compilador seleccionado y versión

      > GCC (Ubuntu 14.2.0-4ubuntu2~24.04) 14.2.0
      > Copyright © 2024 Free Software Foundation, Inc.
      > This is free software; see the source for copying
      >conditions.  There is NO
      > warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR
        PURPOSE.

    - ##### C - Versión de C Que compila

        Al parecer ninguna versión del compilador gcc actual compila al
        lenguaje C23 en su totalidad. Pero la versión 14 agrega más "features"
        que la versión 13. Por lo que se podría decir que maneja gran
        porcentajes de la versión.
        Los últimos cambios se pueden ver [aquí](https://gcc.gnu.org/gcc-14/changes.html#c).
        Adicionalmente puedo remarcar que la versión que se maneja por default
        es la "2017" si no se le especifica otra. Según
        la documentación [oficial](https://gcc.gnu.org/onlinedocs/gcc-14.1.0/gcc/Standards.html#C-Language):
        >The default, if no C language dialect options are given, is -std=gnu17.

        A su vez también menciona en este mismo documento que la versión C23
        esta bajo desarrollo y que se esperaba implementar en 2024. Y que se
        puede activar el soporte de esta versión del lenguaje usando
        "-std=c23":

         >A further version of the C standard, known as C23, is under
         development and expected to be published in 2024 as ISO/IEC
         9899:2024. (While in development, drafts of this standard version
         were referred to as C2X.) Experimental and incomplete support for
         this is enabled with -std=c23 or -std=iso9899:2024
