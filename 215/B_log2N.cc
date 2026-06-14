#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  int64_t cnt = 1;
  int ans = 0;

  // while文の条件がcnt*2 <= Nだと指数(ans)に1余計に加えられてしまう
  // 例：N=6の時、ansが2のときにcntが4なのでループが継続しans=3が答えになる
  // それを避けるためwhile文の条件をcnt*2<=Nとして、次に進めるならループを進めるようにする
  // ans=2,cnt=4のときcnt*2=8なので次に進まない。
  while (cnt * 2 <= N) {
    cnt *= 2;
    ans++;
  }

  cout << ans << endl;
  return 0;
}