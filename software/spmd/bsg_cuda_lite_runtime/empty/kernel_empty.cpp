//This is an empty kernel 

#include "bsg_manycore.h"
#include "bsg_set_tile_x_y.h"

extern "C" __attribute__ ((noinline))
int kernel_empty() {
  return 0;
}
