#include <iostream>
#include <fstream>

void initValue(std::string *filename, std::string *s1, std::string *s2, int argc, char **argv){
    *filename = argv[1];
    *s1 = argv[2];
    *s2 = argv[3];
}

void replace(std::string filename, std::string s1, std::string s2){

    std::string title;
    std::ifstream ifs (filename.c_str());
    std::string temp = filename;
    std::string contain;

    title = temp + ".replace";

    std::ofstream ofs(title.c_str());

    if (!ifs)
    {
    	std::cout << "File does not exists(Use existing file only)" << std::endl;
    	return ;
    }

    if(!ofs){
        std::cout << "File does not exists(Use existing file only)" << std::endl;
    	return ;
    }

    while(std::getline(ifs, contain))
    {
            std::cout << contain << std::endl;
    }
    ifs.close();

    ofs << "i like ponie a whole" << std::endl;
    ofs.close();
}

int main(int argc, char **argv){

    std::string filename;
    std::string s1;
    std::string s2;

    if(argc != 4){
        std::cout << "Error it should be : ./replace filename s1 s2" <<std::endl;
        return (0);
    }

    initValue(&filename, &s1, &s2, argc, argv);

    if(s1 == "" || s2 == ""){
        std::cout << "Error : S1 or S2 is empty" << std::endl;
        return (0);
    }

    replace(filename, s1, s2);

    return(0);
}
