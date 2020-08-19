#Variable Type                          Keyword                 Bytes Required          Range

* Character                             char                    1                       -128 to 127
* Short integer                         short                   2                       -32767 to 32767
* Integer                               int                     4                       -2,147,483,647 to 2,147,483,647
* Long integer                          long                    4                       -2,147,483,647 to 2,147,483,647
* Long long integer                     long long               8                       -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
* Unsigned character                    unsigned char           1                       0 to 255
* Unsigned short integer                unsigned short          2                       0 to 65535
* Unsigned integer                      unsigned int            4                       0 to 4,294,967,295
* Unsigned long integer                 unsigned long           4                       0 to 4,294,967,295
* Unsigned long long integer            unsigned long long      8                       0 to 18,446,744,073,709,551,615
* Single-precision floating-point       float                   4                       1.2E-38 to 3.4E38 (1)
* Double-precision floating-point       double                  8                       2.2E-308 to 1.8E308 (2)
* Long double-precision floating-point  long double             16 (3)                  ???

(1) Approximate range; precision = 7 digits
(2) Approximate range; precision = 19 digits
(3) This size depends on your computer architecture