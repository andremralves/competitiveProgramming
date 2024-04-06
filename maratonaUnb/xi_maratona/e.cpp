#include<bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin>>n;

    std::vector<int> hist(50);
    while(n--) {
        long long x;
        std::cin>>x;
        int shift = 0;
        while((1ll<<shift)<=x) {
            long long mask = (1ll<<shift);
            if((mask&x) > 0 )
                hist[shift]++;
            shift++;
        }
    }
    long long ans = 0;
    for(int i=0; i<50; i++) {
        if(hist[i]%3)
            ans += (1ll<<i);
    }
    std::cout<<ans<<"\n";
}
