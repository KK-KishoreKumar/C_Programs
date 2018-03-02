#include <stdio.h>

void foo() {
    printf("\n foo to you too \n");
};

int main() {
    void (*p1_foo)() = foo;
    printf("foo 			= %p \n",foo);

    void (*p2_foo)() = *foo;
    printf("*foo 			= %p \n",*foo);

    void (*p3_foo)() = &foo;
    printf("&foo 			= %p \n",&foo);

    void (*p4_foo)() = *&foo;
    printf("*&foo 			= %p \n",*&foo);

    void (*p5_foo)() = &*foo;
    printf("&*foo 			= %p \n",&*foo);

    void (*p6_foo)() = **foo;
    printf("**foo 			= %p \n",&*foo);

    void (*p7_foo)() = **********************foo;
    printf("*************************foo = %p \n",**********************foo);

    (*p1_foo)();
    (*p2_foo)();
    (*p3_foo)();
    (*p4_foo)();
    (*p5_foo)();
    (*p6_foo)();
    (*p7_foo)();

    return 0;
}
