#include<bits/stdc++.h>
using namespace std;
int minimum_road_width(int n, int h, vector<int> friends) {
    int num_bending=0;
    for(int friend_height : friends) {
        if(friend_height > h) {
            num_bending++;
        }
    }
    int road_width=n-num_bending+num_bending*2;
    return road_width;
}
int main() {
    int n,h;
    vector<int> friends;
    n=3;
    h=7;
    friends={4,5,14};
    cout << minimum_road_width(n,h,friends) << endl;
    n=6;
    h=1;
    friends={1,1,1,1,1,1};
    cout << minimum_road_width(n,h,friends) << endl;
    return 0;

}


