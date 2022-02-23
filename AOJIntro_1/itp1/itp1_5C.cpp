#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int h, w;
        cin >> h >> w;
        if (h == 0 and w == 0)
        {
            break;
        }
        for (int i = 0; i < h; ++i)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < w; ++j)
                {
                    if (j % 2 == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                cout << endl;
            }
            else
            {
                for (int j = 0; j < w; ++j)
                {
                    if (j % 2 == 0)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
    while(1){
      int h,w; cin >> h >>w;
      if(h==0 && w==0)break;
      for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j%2==0 && i%2==0){
                cout << "#";
            }
            if(j%2==1 && i%2==0){
                cout << ".";
            }
            if(j%2==1 && i%2==1){
                cout << "#";
            }
            if(j%2==0 && i%2==1){
                cout << ".";
            }

        }
        cout << endl;
      }
      cout << endl;
    }
}
*/