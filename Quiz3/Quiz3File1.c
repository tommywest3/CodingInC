//Thomas West 02/15/2021
//Quiz 3

//Qestion 1

//(a) 16-bit binary number
//Signed numbers = 2^16 = Range of 0 to 65536. Unsigned numbers = -2^15 to 2^15 - 1 = Range of -32768 to 32767

//(b) 8-bit binary number
//Signed numbers = 2^8 = Range of 0 to 256. Unsigned numbers = -2^7 to 2^7 - 1 = Range of -128 to 127. 

//Question 2

//(a) -18
//18/2 = 9r0, 9/2 = 4r1, 4/2 = 2r0, 2/2 = 1r0, 1/2 = 0r1
//Look at r's starting at the right to left
//+18 in binary with 8-bits = 00010010  
//18's compliment in binary = 11101101 
//Add one to the compliment =       +1
//-18 in 2's compliment =     11101110 

//(b) -50
//50/2 = 25r0, 25/2 = 12r1, 12/2 = 6r0, 6/2 = 3r0, 3/2 = 1r1, 1/2 = 0r1
//Look at r's starting at the right to left
//+50 in binary with 8-bits = 00110010
//50's compliment in binary = 11001101
//Add one to the compliment =       +1
//-50 in 2's compliment =     11001110

//Question 3
//(a) 100 decimal to binary, hexadecimal and octal
//100/2 = 50r0, 50/2 = 25r0, 25/2 = 12r1, 12/2 = 6r0, 6/2 = 3r0, 3/2 = 1r1, 1/2 = 0r1
//Look at r's starting at the right to left 
//Binary = 1100100(2)
//100/16 = 6r4, 6/16 = 0r6 
//Look at r's starting at the right to left
//Hexadecimal = 0x64(16)
//100/8 = 12r4, 12/8 = 1r4, 1/8 = 0r1
//Octal = 0o144(8)

//(b) 12A hex to binary, decimal and octal
//1 = 0001  2 = 0010  A = 1010
//Binary = 100101010(2)
//(1 * 16^2) + (2 * 16^1) + (A(10) * 16^0)
//    256    +     32     +      10       =  298
//Decimal = 298(10)
//100  101  010 (Binary number broken up into 3 bits)
// 4    5    2  (Octal numbers equivalent to the Binary in 3-bits)
//Octal = 0o452(8) 

//(c) 701 octal to binary, decimal and hex
//7 = 111  0 = 000  1 = 001
//Binary = 111000001(2) 
//(7 * 8^2) + (0 * 8^1) + (1 * 8^0)
//   448    +     0     +     1     =  449
//Decimal = 449(10)
//0001  1100  0001 (Binary numbers broken up into 4-bits for hex)
//  1     C     1  (Hexadecimal numbers equivalent to the Binary in 4-bits)
//Hexadecimal = 0x1C1(16) 

//Question 4
//(a) Binary Numbers: A=00011100, B=01111111 Perform A+B, B-A, A*B
//  00011100     01111111     00011100
//+ 01111111   - 00011100   * 01111111        
// 
// 010011011     01100011     00011100
//                           000111000
//		            0001110000
//                         00011100000
//                        000111000000
//                       0001110000000
//                      00011100000000
//                     000000000000000
//                       
//                       0110111100100
//                       
//(b) Octal Numbers: A= 1754, B=10001, Perform A+B, B-A, A*B
//   1754     10001      1754
//+ 10001   -  1754   * 10001
//  
//  11755      6025      1754
//                      00000
//                     000000
//                    0000000
//                   17540000
//
//                   17541754
//                   
//(c) Hexadecimal Numbers: A=100A1, B=B1100, Perform A+B, B-A, A*B
//    100A1    B1100    100A1
//  + B1100  - 100A1  * B1100
//    
//    C11A1    A105F    00000
//                     000000
//                    100A100
//                   100A1000
//                 B006EB0000
//
//                   17F5B100
