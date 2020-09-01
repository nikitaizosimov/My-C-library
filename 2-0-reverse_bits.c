
unsigned char reverse_bits(unsigned char b)
{
    unsigned char    r = 0;
    unsigned int       char_len = 8;

    while (char_len--)
    {
        r = (r << 1) | (b & 1);
        b >>= 1;
    }
    return (r);
}
