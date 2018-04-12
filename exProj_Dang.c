#include <stdio.h>
#include <string.h>

// instructiuon
struct Instruction {
  char format;
  char * rd;
  char * rs;
  char * rt;  
  int immed;
  int branch;
  int absolute_address;
  int funct;
  int opcode;
  int shammt;
}

// functions
void readInput() {


}
