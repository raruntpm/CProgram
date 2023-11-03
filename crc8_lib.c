#include <stdio.h>
#include <stdlib.h>

#define CRC8_POLYNOMIAL    0x0107  
#define CRC8_WIDTH         (8 * sizeof(unsigned char))
#define CRC8_TOPBIT        (1 <<(CRC8_WIDTH - 1))

int main( void )
{
    unsigned char bit, rem, div, tab[256], crc;
    unsigned short i;
    unsigned char msg[9] = {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};
    
    printf("\nSize of unsigned char is: %d bytes\n\n", sizeof(unsigned char));
    
    printf("PRIVATE UINT8 crc8_0107_lut[] = \n{\n");

    for ( i=0; i < 256; i++ )
    {
        div = (unsigned char)i;
        rem = div << (CRC8_WIDTH - 8);
        for ( bit=0; bit<8; bit++ )
        {
            if ((rem & CRC8_TOPBIT) != 0)
            {
                rem = (rem << 1) ^ CRC8_POLYNOMIAL;
            }                
            else
            {
                rem = rem << 1;
            }
        }
        tab[div] = rem;
        if((i % 8) == 0)
        {
            printf("\n    ");
        }
        printf("0x%02x", tab[div]);
        if(i != 255)
        {
            printf(",");
        }
        printf(" ");

    }

    printf("\n};\n");
    
    crc = 0;
    for (i=0; i<9; i++)
    {
        crc = tab[crc ^ msg[i]];
    }
   
   printf("crc is 0x%x", crc);
    return 0;    
}