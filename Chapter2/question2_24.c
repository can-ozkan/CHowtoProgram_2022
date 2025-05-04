#include <stdio.h>

/*
Distinguish between the terms fatal error and nonfatal error. Why might you
prefer to experience a fatal error rather than a nonfatal error?
*/

int main(void) {

    /*
     * Fatal Error is an error that causes the program to terminate immediately.
     * Nonfatal Error is an error that allows the program to continue running, but likely with incorrect behavior or
     * degraded performance.
    * Fatal Error can be division by zero at runtime, memory access violation (e.g., null pointer dereference), and
    * missing critical file needed for startup.
    * Non fatal error can be Invalid user input that gets ignored, failing to save a log file, but the main function
    * continues, and receiving a malformed network packet but continuing with others.
    *
    * You might prefer a fatal error because: 1) It fails fast and visibly, which helps in quickly diagnosing and
    * fixing bugs. 2) Nonfatal errors can silently corrupt data or cause incorrect results, which may go unnoticed.
    * 3) Fatal errors prevent further damage or misleading output.
     **/

    return 0;
}
