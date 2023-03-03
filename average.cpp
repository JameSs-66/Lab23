#include<iostream>
#include<cstdlib>

int main(int argc, char* argv[]){
    if(argc > 1){
         float sum = 0;
        for(int i = 0; i < argc; ++i) sum += atof(argv[i]);
        std::cout << "---------------------------------\n" << "Average of " << (argc-1) << " numbers = " << sum/(argc-1) << "\n---------------------------------";
    }else{
         std::cout << "Please input numbers to find average.";
    }
    return 0;
}

   

