#include <bitset>

long reverseBits(long n) {
    bitset<32> bits(n);
    bitset<32> reversed_bits;

    for(int i=0; i<32; i++)
        reversed_bits[i] = bits[31-i];

    return reversed_bits.to_ulong(); // unsigned long
}
