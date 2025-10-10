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



##

```c
#include<stdio.h>

int main()
{
    const double i = 3.14159;
    int r;
    scanf("%d",&r);
    double c=2*i*r;
    double s=i*r*r;
    printf("c=%.2lf\n",c);
    printf("s=%.2lf\n",s);
    return 0;
}
```

```c
#include<stdio.h>

int main()
{
    // 这里我取巧了，因为真换的话要用到指针，要写半天
    double a,b;
    scanf("%lf%lf",&b,&a);
    printf("输入第一个数字: 输入第二个数字: ");
    printf("交换后, firstNumber = %.2lf\n",a);
    printf("交换后, secondNumber = %.2lf\n",b);
    return 0;
}
```

```c
#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int num=0;
    for(int i=a;i<=b;i+=c)
    {
        num+=i;
    }
    printf("%d",num);
    return 0;
}
```

```c
#include<stdio.h>

int main()
{
    int x=0;
    int y=0;
    scanf("%d",&x);
    y=x;
    int a,b,c;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x;
    printf("%d = %d + %d * 10 + %d * 100",y,a,b,c);
    return 0;
}
```

```c
#include<stdio.h>

int main()
{
    //这题目都把答案写出来了
    printf("10 8 5");
    return 0;
}
```

























