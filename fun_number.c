int len_number(int num) {
  if (num == 0)
    return 1;
  int count = 0;
  if (num < 0) {
    count++;
    num = -num;
  }
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}

void fun_number(int num) {
  if (num == -2147483648) {
    _putchar('-');
    _putchar('2');
    fun_number(147483648);
  } else if (num < 0) {
    _putchar('-');
    num = -num;
  }
  if (num >= 10) {
    fun_number(num / 10);
    fun_number(num % 10);
  } else {
    _putchar(num + '0');
  }
}
