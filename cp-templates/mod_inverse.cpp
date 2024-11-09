int egcd(int a, int b, int &x, int &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = egcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}

/* Mod inverse implementation 
 * x contains mod inverse of a mod m
 */
int x, y;
int g = egcd(a, m, x, y);
/* if g = 1, then no solution */
x = (x % m + m) % m;