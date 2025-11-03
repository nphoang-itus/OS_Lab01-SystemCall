/* ==================== BEGIN: CUSTOM CODE (by Phuc Hoang) ==================== */
#include "kernel/types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc < 3){
    printf("usage: trace mask command [args]\n");
    exit(0);
  }

  int mask = atoi(argv[1]);
  trace(mask);

  // exec replaces current process image by command.
  exec(argv[2], &argv[2]);

  // if exec fails:
  printf("trace: exec failed\n");
  exit(1);
}
/* ==================== END: CUSTOM CODE (by Phuc Hoang) ==================== */