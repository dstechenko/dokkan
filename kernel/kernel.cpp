void kernel_init() {
  char* video_memory = (char*) 0x000B8000;
  *video_memory = 'Y';
}

extern "C" void kernel_main();

void kernel_main() {
  char* video_memory = (char*) 0x000B8000;
  *video_memory = 'X';
}
