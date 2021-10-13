#include <iostream>
#include <vector>

struct subject{
    std::vector<std::string> name;
    std::vector<int> mark;
};
struct student{
    std:: string fullname;
    subject sbj;

};
int main() {
    int n,negative=0;
    std::cout<<"Enter de number of   students n:";
    std:: cin>>n;
    std::vector <student> kek(n);
    for (int i=0;i<n;i++){
        std::cout<<"student №"<<i+1<<"\n";
        std::cout<<"enter full_name:";
        std::cin.ignore();
        std::getline(std::cin,kek[i].fullname);

        int k=0;
        while (true){
            std::string c;

            std::cout<<"subject:";
            std::cin>>c;
            if (c==""){
                break;
            }
            int b;
            bool exx=false;
            while (true){
                std::cout<<"mark:";
                std::cin>>b;

                if (6>b>1){
                    if (b==2) {
                        negative++;
                        exx= true;
                    }

                }
                if (exx==true) break;
            }
            kek[i].sbj.mark[k]=b;
            kek[i].sbj.name[k]=c;
            k++;

        }

    }
    std::cout<<"koli4estvo studentov, u kotoryx hot' odna neudovletvtoritelnaya otsenka="<<negative;


    return 0;
}