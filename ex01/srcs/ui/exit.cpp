#include "../../includes/ui.hpp"


void set_true_exit_bool(bool *exit_loop){
    std::cout<<"Exit in progress[...]"<<std::endl;
    *exit_loop = true;
}