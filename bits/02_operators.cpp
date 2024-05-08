/*
 * AND -> notation &
 * here 1 & 1 -> 1
 * here 1 & 0 -> 0
 * here 1010 & 1 -> 0 only intercats with last bit
*/

/*
 * OR -> notation |
 * here 1 | 1 -> 1
 * here 1 | 0 -> 1
 * here 1010 | 1 -> 1010 only intercats with last bit but gives full result
*/

/*
 * XOR -> notation ^
 * here 1 ^ 1 -> 0
 * here 1 & 0 -> 1
 * here 1010 ^ 1 -> 1011 only intercats with last bit
*/

/*
 * SHIFT -> notation <<
 * here num<<1 -> 0
 * it shidts the bits by 1,2 or number of times
 * here on right shift number becomes small so num = num / 2; on one shift
 * here on left shift number becomes large so num = num * 2; on one shift
*/

/*
 * 1's compliment and 2's compliment 
 * ~ num is compliment of num
 * number storage in computer -> if the number is negative then do 2's compliment
*/
