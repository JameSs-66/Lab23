#include<iostream>
#include<cstdlib>

int main(int argc, char* argv[]){
    if(argc > 0){
         float sum = 0;
        for(int i = 0; i < argc; ++i) sum += atof(argv[i]);
        std::cout << "---------------------------------\n" << "Average of " << argc << " numbers = " << sum/argc << "\n---------------------------------";
        return 0;
    }else{
         std::cout << "Please input numbers to find average.";
        return 1;
    }
}

   

