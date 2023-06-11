#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    bool can_give_a_nickname=true;
    string last_name[N], family_name[N], name_last, name_family;
   
    for (int i=0; i<N; i++) cin >> family_name[i] >> last_name[i];

    for (int i=0; i<N; i++) {
        can_give_a_nickname=false;
        for (int j=0; j<N; j++) {
            name_last=last_name[i];
            name_family=family_name[i];
            bool s_ok = true;
            for (int k=0; k<N; k++) {
                if (i!=j) {
                    if (name_family==family_name[k] | name_last==last_name[k]) s_ok = false;
                }
            }
            if (s_ok) can_give_a_nickname = true;
        }
        if (!can_give_a_nickname) cout << "No" << endl; break;
    }

    
    if(can_give_a_nickname) cout << "Yes" << endl;
    

    return 0;
}