# PTA 实验2 参考答案



## 

```c
#include<stdio.h>

int main()
{
    char a;
    int b;
    double c;
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%lf",&c);
    printf("%c,%zu\n",a,sizeof(a));
    printf("%d,%zu\n",b,sizeof(b));
    printf("%.6lf,%zu\n",c,sizeof(c));
}
```

## 

```c
#include<stdio.h>
int main()
{
    double x=0;
    x=5*3*3;
    printf("height = %.2f",x);
    return 0;
}
```





























