class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>0){
            count+=n/5;
            n=n/5;
        }
        return count;
    }
};

//0 tbhi ata he tab last me 10 ho and 10 ata he jab 5 and 2 ho toh 2 toh mostly mi jayenge hum 5 kko calculate kro and result mil jayega hme jaise 25 ka 5 ,10,15,20,25 sbme 1 1 5 he bs 25 me 2 he toh total 6 5 yani result ayega total 6 


//Thinking process:

// tailling zeors means factor of 10 in the factorial
// any occurance of the factor 5 must has another 2 as a factor in any factorial
// thus, finding tailling zeros means finding the number of factor of 5 for the factorial of n
// we can do so by dividing n to get the additional number of factor of 5s
// The last step is a little hard to explain even with an example, but I'll try:

// For instance, 25! have factors of 5, 10, 15, 20, and 25 that we are interested in. 5, 10, 15, 20 all have only 1 factor of 5 in each of them while 25 have 2 of factor 5. We have 4 trailling zeros from 20! to 24!, and 25 brought 2 of 5s into25! making it has 6 of 5s. Thus, 25! has 6 trailling zeros.

// We can see that for every n seperated by 5, we have one more factor of 5 involved, so we should divide n to get the number of additional factors of 5.

// Trying out a few more examples might help you understand the transition from step 3 to step 4.