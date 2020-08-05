#include <bits/stdc++.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#define mt make_tuple
#define ll long long
#define ld long double
#define eb emplace_back
#define fi first
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)((x).size()))
#define rall(x) (x).rbegin(), (x).rend()
#define make_unique(vec) sort(all(vec)); vec.resize(unique(all(vec)) - vec.begin());
#define scanVec(vec) for(int i = 0; i < SZ(vec) ; i++){ cin >> vec[i];}
#define printVec(vec) for(int i = 0; i < SZ(vec) ; i++){ cout<<vec[i]<<" ";}
#define mod(a,b) ((a%b +b)%b)
#define lastEle(vec) vec[vec.size()-1] 
#define INF 1001001001
using namespace std;
const ll MOD = 1e9 + 7;
 
ll inf = 1LL*1e15;
 
const int MAXN = 1e5 + 10;

int rand(int a, int b){
    return a + rand()%(b - a + 1);
}

void genTree(int n){
    //int nodes = 20;
    //int n = rand(2, nodes);
    //cin >> n;
    //printf("%d\n", n);
    vector<pair<int,int>> edges;
    for(int i = 2; i <= n; ++i) {
        edges.emplace_back(rand(1, i - 1), i);
    }
    
    vector<int> perm(n + 1); // re-naming vertices
    for(int i = 1; i <= n; ++i) {
        perm[i] = i;
    }
    random_shuffle(perm.begin() + 1, perm.end());
    
    random_shuffle(edges.begin(), edges.end()); // random order of edges
    
    for(pair<int, int> edge : edges) {
        int a = edge.first, b = edge.second;
        if(rand() % 2) {
            swap(a, b); // random order of two vertices
        }
        cout << perm[a] << " " << perm[b] << endl;
        //printf("%d %d\n", perm[a], perm[b]);
    }
}
int main(int argc, char* argv[]){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(atoi(argv[1]));

    // int n = rand(3,10);
    // int d = rand(1,n);
    // int sz = rand(1,10);
    // cout << n << " " << d << " " << sz << endl;
    // for(int i = 0;i < sz;i++){
    //     cout << rand(1,100) << " ";
    // }

    for(int i = 0; i < 10; i++){
         int a = rand(1, 2);
         if(a == 1) cout << "true" << endl;
         else cout << "false" << endl;
    }

    cout << endl;
    return 0;
} 
