#include <iostream>
#include <sys/types.h>
using namespace std;
int main(){
 
unsigned long long value=0xFFFFFFFFFFFFFFFF;
uint8_t number8 = value;
uint16_t number16 = value;
uint32_t number32 = value;
uint64_t number64 = value;
 
cout << (int)number8 << endl;   //得到255
cout << number16 << endl;   //得到65535
cout << number32 << endl;   //得到4294967295
cout << number64 << endl;   //得到18446744073709551615
}