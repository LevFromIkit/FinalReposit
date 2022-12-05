double my_pow(double chislo, unsigned int stepen)
{
    double result = chislo;
    for (unsigned int i = 1; i < stepen; i++)
        result *= chislo;

    return result;
}