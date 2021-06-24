//#include <string>
//#include <iostream>
//
//using namespace std;
//
//class Harbinger
//{
//private:
//    string h_name;
//    string CatchPhrase;
//    int h_age;
//
//public:
//    Harbinger(string name = "Har", int age = 17, string catchPhrase = "Konyappi~") : h_name(name), h_age(age), CatchPhrase(catchPhrase) {}
//
//    string getName() { return h_name; }
//
//    string& getCatchPhrase() {
//        return CatchPhrase;
//    }
//
//    void setCatchPhrase(string& catchPhrase) {
//        CatchPhrase = catchPhrase;
//    }
//
//    int getAge() { return h_age; }
//};
//
//class Prophet : public Harbinger {
//private:
//    string MagnumOpus[3];
//    string ph_name;
//    int ph_age;
//    string ph_call;
//
//public:
//    string* getMagnumOpus() {
//        return MagnumOpus;
//    }
//
//    void setMagnumOpus(string magnumOpus[]) {
//        for (int i = 0; i < 3; ++i) {
//            if (magnumOpus[i].length() > 25) {
//                cout << "Размер слишком большой, должен быть < 25 элементов.\n";
//                    return;
//            }
//        }
//
//        for (int i = 0; i < 3; ++i) {
//            MagnumOpus[i] = magnumOpus[i];
//
//            if (!ph_call.empty() && ph_call.length() < magnumOpus[i].length()) {
//                ph_call = magnumOpus[i];
//            }
//        }
//    };
//
//    string& getPhName() {
//        return ph_name;
//    }
//
//    void setPhName(string& phName) {
//        ph_name = phName;
//    }
//
//    string& getPhCall() {
//        return ph_call;
//    }
//
//    void setPhCall(string& phCall) {
//        ph_call = phCall;
//    }
//
//    int getPhAge() {
//        return ph_age;
//    }
//
//    void setPhAge(int phAge) {
//        ph_age = phAge;
//    }
//};
//
//class DeusEx : public Prophet {
//private:
//    string gd_name;
//    int gd_year;
//
//public:
//    DeusEx(string gdName = "Null", int gdYear = 0) :  gd_name(gdName), gd_year(gdYear) {
//    }
//
//    string& getGdName() {
//        return gd_name;
//    }
//
//    int getGdYear() {
//        return gd_year;
//    }
//
//    void inTheNameOfGod() {
//        printf("%s в возрасте %d говорил, что %s\n", getName().c_str(), getAge(), getCatchPhrase().c_str());
//        printf("Первое пророчество: %s\n", getMagnumOpus()[0].c_str());
//        printf("Второе пророчество: %s\n", getMagnumOpus()[1].c_str());
//        printf("Главное пророчество: %s\n", getPhCall().c_str());
//        printf("Так говорил %s в возрасте %d.\n", getPhName().c_str(), getPhAge());
//        printf("В год %d пришёл %s, которого предрекали %s и %s.\n", getGdYear(), getGdName().c_str(), getName().c_str(), getPhName().c_str());
//    }
//};
//
//class Believer : public DeusEx {
//private:
//    string bv_name;
//    int bv_age;
//
//public:
//    Believer(string bvName = "SomeData", int bvAge = 0) : bv_name(bvName), bv_age(bvAge), DeusEx() {}
//
//    string& getBvName() {
//        return bv_name;
//    }
//
//    void setBvName(string& bvName) {
//        bv_name = bvName;
//    }
//
//    int getBvAge() {
//        return bv_age;
//    }
//
//    void setBvAge(int bvAge) {
//        bv_age = bvAge;
//    }
//
//    void believerSays() {
//        printf("\nВерующий %s молится %s именем %s. C %d и по сей день.\n", getBvName().c_str(), getGdName().c_str(), getPhName().c_str(), getGdYear());
//    }
//};
//
//int main() {
//    Believer believer;
//    setlocale(LC_ALL, "ru");
//
//    int age = 12;
//    string CPhr = "CPhr";
//    string PhCall = "futaba";
//    string PhName = "PhName";
//
//    //believer.setCatchPhrase(CPhr);
//    believer.setPhAge(age);
//    believer.setPhCall(PhCall);
//    believer.setPhName(PhName);
//
//    string magnumOpus[] = { "2ch","4ch","Null" };
//    believer.setMagnumOpus(magnumOpus);
//
//    believer.inTheNameOfGod();
//    believer.believerSays();
//    return 0;
//}