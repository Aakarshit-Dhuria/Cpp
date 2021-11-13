#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    // struct Point p = {.y = 120, .x = 100};  // 100 120
    //! we can initialise a structure like this in any order (when we specify the variable we are assigning the value to).
    struct Point p = {.y = 120};
    //! if we dont initialise all variables in such a case then those variables get default 0 values.
    printf("%d %d", p.x, p.y);
    return 0;
}