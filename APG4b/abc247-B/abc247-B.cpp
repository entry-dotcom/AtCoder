#include <bits/stdc++.h>
using namespace std;
     
int main() {


string first_name, last_name, first, last;
bool bo = true;
int N, check_num;
cin >> N;
vector<vector<string>> person_name(N, vector<string>(2));
// vector<string> first_name_list(N);
// vector<string> last_name_list(N);


for (int i=0; i<N; i++) {
    cin >> first_name >> last_name;
    person_name.at(i).at(0) = first_name;
    person_name.at(i).at(1) = last_name;
}

for (int j=0; j<2; j++) {
    check_num = 0;
    for (int k=0; k<N; k++) {
        first = person_name.at(k).at(0);
        if (first != person_name.at(k).at(j)) {
            check_num += 1;
        }
        for (int i=0; i<2 i++) {
            if first_name_list.at(i) == first_name_list.at(k) {
                continue;
        } 
        }
        
    }

}
}