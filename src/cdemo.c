void main ( void ) {
  asm("NOP"); // bypass stopOnEntry-bug
  for ( ;; ) {}
}
