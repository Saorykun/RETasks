unsigned int fd(unsigned int a)
{
    return a / 10;
}

unsigned int fd1(unsigned int a)
{
    return a / 16;
}

unsigned int fd2(unsigned int a, unsigned int b)
{
    return a % b;
}

int f2(int a)
{
    switch (a)
    {
    case 1:
        return 5;
    case 6:
        return 7;
    case 10:
        return 3;
    case 1000:
        return 9;
    case 6000:
        return 8;
    case 10000:
        return 4;
    }
    return 0;
}

int f3(int a)
{
    switch (a)
    {
    case 3:
        return 5;
    case 5:
        return 7;
    case 6:
        return 3;
    case 8:
        return 4;
    case 9:
        return 1;
    case 7:
        return 8;
    }
    return 0;
}

int if2(int a)
{
    int b = a == 50 ? 12 : 26;
    return b;
}
int if3(int a, int b, int c)
{
    if (a && c)
        return b;
    else
        return c;
}
int if4(int a, int b, int c)
{
    if (a || c == b)
        return b;
    else
        return a;
}

int* s[100];
int t[100];
void f2()
{
    for (int i = 0; i != 100; ++i)
        s[i] = &t[i];
}

void g();

void f1(int a)
{
    while (a)
    {
        --a;
        g();
    }
}

void f22(int a)
{
L:
    if (a)
    {
        --a;
        g();
        goto L;
    }
}

void f4(int a)
{
    do
    {
        --a;
        g();
    } while (a);
}