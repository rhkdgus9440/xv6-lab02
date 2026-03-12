#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if(argc < 2){
    printf("usage: hello <name>\n");
    exit(0);
  }

  printf("hello %s\n", argv[1]);
  exit(0);
}
