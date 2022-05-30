#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
    int i, dec, bin;
    i = 0;
    dec = 0;
    bin = 1;
    
    while (b[i])
    {
        i++;
    }
    
    i--;
    while (b[i])
    {
        if (b[i] != '0' & b[i] != '1')
            return (0);
        
        if (b[i] == '1')
        {
            dec += bin;
            bin *=2;
        }
        else
        {
            bin *= 2;
        }
        i--;
    }
    return (dec);
}
