

#include <srl_rhcf_planner/cell.h>



Cell::Cell(double x, double y, double w, double h) {
    hasAgent = false;
    occupied = false;
}

Cell::~Cell() {
    // clean up

}
