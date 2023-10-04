// #include <stdio.h>
// #define foo(m, n) m * n =10
// int main()
// {
//     printf("%d",foo(2, 5));
// }


    // #include <stdio.h>
    // #define foo(m, n) m ## n
    // void myfunc();
    // int main()
    // {
    //     myfunc();
    // }
    // void myfunc()
    // {
    //     printf("%d\n", foo(2, 3));
    // }

    // #define cube(x) x * x * x

    // int main(int argc, char const *argv[])
    // {
    //     int a,b=3;
    //     a=cube(b++);
    //     printf("%d %d\n",a,b);
    
    //     return 0;
    // }

    // 60 6

    #define SWAP(a,b,c) c t; t=a;a=b;b=t;

    int main()
    {
        /* code */
        int x=10,y=20;
        SWAP(x,y,int);
        printf("%d %d\n",x,y);
        return 0;
    }
    // error



    
    