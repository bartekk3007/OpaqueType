typedef struct ads1248_options_t ads1248_options_t; // incomplete/opaque type

ads1248_options_t* ads1248_init(int a, int b, int c, int*d, char e); // a "constructor"
void ads1248_destroy(ads1248_options_t* ads); // a "destructor"