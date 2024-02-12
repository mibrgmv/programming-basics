#include "app.h"

int App_4::start() {
    Rectangle ab, dc;
    Print("Enter dimensions for ab");
    Get(ab.a);
    Get(ab.b);
    Print("Enter dimensions for dc");
    Get(dc.a);
    Get(dc.b);
    Set M;
    M.Add(ab);
    M.Add(dc);
    Print("Sum of Areas: ");
    Print(M.areaSum());
    Print("Sum of perimeters: ");
    Print(M.perimeterSum());
    return 0;
}
