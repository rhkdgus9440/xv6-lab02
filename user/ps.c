#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc == 1){
    ps(0);
  } else {
    for(int i = 1; i < argc; i++){
      printf("\n");
      ps(atoi(argv[i]));
    }
  }
  exit(0);
}
