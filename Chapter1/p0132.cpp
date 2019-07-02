int SimpleFunc(int a=10)
{
    return a+1;
}

int SimpleFunc(void)
{
  return 10;
}

// Q : wuts da problem?
// A ; when "SimpleFunc()" called, compile error
// why? : SimpleFunc(int a=10) and SimpleFunc(void) both are SimpleFunc().
