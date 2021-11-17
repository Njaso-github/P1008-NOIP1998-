#include <bits/stdc++.h>

using namespace std;

int func(char *s) {
  int cnt = 0;
  for (char d = '1'; d <= '9'; d++) {
    if (strchr(s, d)) { //判断d是否在字符串中出现 
      cnt++;
      continue;
    }
  }
  return cnt;
}

int main() {
  for (int i = 123; i <= 329; i++) {
    char s[10];
    sprintf(s, "%d", i * 1000000 + i * 2 * 1000 + i * 3); //i = abc, i * 2 = def, i * 3 = ghi; s = abcdefghi 
    if (func(s) == 9) printf("%d %d %d\n", i, i * 2, i * 3); //9意味着每个数字都只出现了一次 
  }
  return 0;
}
