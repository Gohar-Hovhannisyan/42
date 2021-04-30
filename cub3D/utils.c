#include "cub.h"

void	ft_bzero(void *d, size_t size)
{
	while (size--)
		*(char*)d++ = '\0';
}

void bubble(int* order, double* dist, int amount)
{
    int i = 0;
    int j = 0;
    while(i< amount)
    {
        j = i + 1;
        while(j < amount)
        {
            if(dist[i] < dist[j])
            {
                double tmp;
                tmp = dist[i];
                dist[i] = dist[j];
                dist[j] = tmp;
                int tmp1;
                tmp1 = order[i];
                order[i] = order[j];
                order[j] = tmp1;
            }
            ++j;
        }
        ++i;
    }
}

int		ft_atoi(const char *str)
{
	int res;
	int	sign;

	res = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		res *= 10;
		res += (sign * (*(str++) - '0'));
	}
	return (res);
}

size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

int		create_rgb(int r, int g, int b)
{
	return( r << 16 | g << 8 | b);
}

int ft_numlen(int x)
{
    int i = 0;
    long n = x;
    if(x < 0)
    {
        i++;
        n = n* (-1);
    }
    if (x == 0)
        return(1);
    while(x)
    {
        i++;
        x/=10;
    }
    return(x);
}
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i])
    {
        i++;
    }
    dest = malloc(i + 1);
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}