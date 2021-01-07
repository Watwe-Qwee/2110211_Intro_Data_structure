#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
    public:
    string name; string address; string province; string district; int zip;
    bool operator < (const Letter& other) const {
    //**Begin Insert**
    //**End Insert**
        if(this-> zip == other.zip){
            if( this -> address==other.address){
                if( this -> district==other.district){
                    if(this -> province==other.province){
                        return this -> name < other.name ;
                    }
                    return this -> province < other.province ;
                }
                return this -> district < other.district ;
            }
            return this -> address < other.address;
        }
        return this-> zip < other.zip;
    }
};
class ZipInfo{
    public:
        int zip;
        string province;
        string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
    //**Begin Insert**
    map<pair<string,string>,int> zipmap;
    for(auto &zipData:zipinfo){
        zipmap[make_pair(zipData.district,zipData.province)]=zipData.zip;
    }
    for(auto &letter:letters){
        letter.zip=zipmap[make_pair(letter.district,letter.province)];
    }
    sort(letters.begin(),letters.end());
    //**End Insert**
}
int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters) {
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}