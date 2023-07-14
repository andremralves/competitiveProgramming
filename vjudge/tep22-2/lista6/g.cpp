/**
 *    author: mralves 
 *    created: 24-12-2022 18:34:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

// atcoder library
namespace internal {
template <class T>
using is_signed_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value ||
                                  std::is_same<T, __int128>::value,
                              std::true_type,
                              std::false_type>::type;

template <class T>
using make_unsigned_int128 =
    typename std::conditional<std::is_same<T, __int128_t>::value,
                              __uint128_t,
                              unsigned __int128>;

template <class T>
using to_unsigned = typename std::conditional<
    is_signed_int128<T>::value,
    make_unsigned_int128<T>,
    typename std::conditional<std::is_signed<T>::value,
                              std::make_unsigned<T>,
                              std::common_type<T>>::type>::type;

template <class T> using to_unsigned_t = typename to_unsigned<T>::type;

}


template <class T> struct fenwick_tree {
    using U = internal::to_unsigned_t<T>;
public: fenwick_tree() : _n(0) {}
    explicit fenwick_tree(int n) : _n(n), data(n) {}

    void add(int p, T x) {
        assert(0 <= p && p < _n);
        p++;
        while (p <= _n) {
            data[p - 1] += U(x);
            p += p & -p;
        }
    }

    T sum(int l, int r) {
        assert(0 <= l && l <= r && r <= _n);
        return sum(r) - sum(l);
    }

    private:
    int _n;
    std::vector<U> data;

    U sum(int r) {
        U s = 0;
        while (r > 0) {
            s += data[r - 1];
            r -= r & -r;
        }
        return s;
    }
};

const int N = 2e5 + 10;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin>>n>>k>>q;

    fenwick_tree<int> fw(N);
    fenwick_tree<int> gd(N);
    for(int i=0; i<n; i++) {
        int l, r;
        cin>>l>>r;
        fw.add(l, 1);
        fw.add(r+1, -1);
    }

    for(int i=0; i<N; i++) {
        gd.add(i, (fw.sum(0, i+1) >= k));
    }

    for(int i=0; i<q; i++) {
        int l, r;
        cin>>l>>r;
        cout<<gd.sum(l, r+1)<<"\n";
    }
    return 0;
}
