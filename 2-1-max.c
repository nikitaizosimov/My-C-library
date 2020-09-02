int        max(int *tab, unsigned int len)
{
    int    max = tab[0];
    
    if (len == 0)
        return (0);
    int i = 1;
    while (len > i) {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}

int        main(void)//
{//
    int    *tab;//

    if (!(tab = (int*)malloc(sizeof(int) * 3)))//
        return (0);//
    tab[0] = 7;//
    tab[1] = 6;//
    tab[2] = 4;//
    printf("%d", max(tab, 3));//
    return (0);//
}//
