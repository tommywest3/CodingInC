//Thomas West 03/12/2021
// Fig. 7.24: fig07_24.c
// Card shuffling and dealing.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck 
void deal(unsigned int wDeck[][FACES], const char *wFace[],    
  const char *wSuit[], unsigned int wHand[][2]); // dealing doesn't modify the arrays
void highcard(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void pairs(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void threeofkind(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void straight(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void fullhouse(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void fourofkind(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void royalflush(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);

int main(void)
{   
    // initialize deck array   
    unsigned int deck[SUITS][FACES] = { 0 };   
    // initialize hand array
    unsigned int hand[5][2];
    
    srand(time(NULL)); // seed random-number generator   
    
    shuffle(deck); // shuffle the deck   
    
    // initialize suit array                          
    const char *suit[SUITS] =                  
       {"Hearts", "Diamonds", "Clubs", "Spades"};   

    // initialize face array                      
    const char *face[FACES] =      
       {"Deuce", "Three", "Four",                
        "Five", "Six", "Seven", "Eight",                
        "Nine", "Ten", "Jack", "Queen", "King", "Ace"};   

    deal(deck, face, suit, hand); // deal the deck

    //check value of hand
    highcard(hand, suit, face);
    pairs(hand, suit, face);
    threeofkind(hand, suit, face);
    straight(hand, suit, face);
    fullhouse(hand, suit, face);
    fourofkind(hand, suit, face);
    royalflush(hand, suit, face);
} 
// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{   
    // for each of the cards, choose slot of deck randomly   
    for (size_t card = 1; card <= CARDS; ++card) {      
       size_t row; // row number      
       size_t column; // column number      

       // choose new random location until unoccupied slot found      
       do {                                                                 
          row = rand() % SUITS;                                            
          column = rand() % FACES;                                   
       } while(wDeck[row][column] != 0); // end do...while      
       
       // place card number in chosen slot of deck      
       wDeck[row][column] = card;   
    } 
}
// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[],   
   const char *wSuit[], unsigned int wHand[][2])
{
    //initialize counter for hand
    int i = 0;
    // deal each of the cards   
    for (size_t card = 1; card <= 5; ++card) {      
        // loop through rows of wDeck      
        for (size_t row = 0; row < SUITS; ++row) {         
            // loop through columns of wDeck for current row         
            for (size_t column = 0; column < FACES; ++column) {            
                // if slot contains current card, display card            
                if (wDeck[row][column] == card) {               
                  wHand[i][0] = row;
		  wHand[i][1] = column;
		   printf("%5s of %-8s%c", wFace[column], wSuit[row],                  
                      card % 2 == 0 ? '\n' : '\t'); // 2-column format
		   i++;            
                }          
            }       
        }    
    }
  printf("\n"); 
}

//find high card in hand
void highcard(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{

  //make copy of hand
  int copyHand[5] = {0};

  //make temporary placeholder
  int temp;

  //loop counters
  size_t j, i, k;

  //copy columns into array
  for (j = 0; j < 5; ++j) {
     copyHand[j] = wHand[j][1];
  }

  //Bubble sort algorithm https://www.programiz.com/dsa/bubble-sort
  for (i = 1; i < 5; ++i) {
     for (k = 0; k < 4; ++k) {
        if (copyHand[k] > copyHand[k+1]) {
           temp = copyHand[k];
           copyHand[k] = copyHand[k+1];
           copyHand[k+1] = temp;
        }
     }
  }
  //print high card
  printf("\nThis hand's high card is %s.\n", wFace[copyHand[4]]);
}

//find pairs in hand
void pairs(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{
   //keep track of rank
   int i[FACES] = {0};

   //loop counters
   size_t j, k;

   //cards and ranks counter
   for (j = 0; j < 5; ++j) {
	++i[wHand[j][1]];
   }
   for (k = 0; k < FACES; ++k) {
	if (i[k] == 2) {//== 2 for pairs
           printf("This hand has a pair of %ss.\n", wFace[k]);
	}
   }
}

//find three of a kind in hand
void threeofkind(unsigned int wHand[][2], const char *wSuit[], const char * wFace[]) 
{
   //keep track of rank
   int i[FACES] = {0};
   
   //loop counters
   size_t j, k;
   
   //cards and ranks counter
   for (j = 0; j < 5; ++j) {
        ++i[wHand[j][1]];
   }
   for (k = 0; k < FACES; ++k) {
        if (i[k] == 3) {//== 3 for three of a kind
           printf("This hand has three %ss.\n", wFace[k]);
        }
   }
}

//find a straight in hand
void straight(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{
  //make copy of hand
  int copyHand[5] = {0};

  //make temporary placeholder
  int temp;

  //loop counters
  size_t j, i, k;

  //copy columns into array
  for (j = 0; j < 5; ++j) {
     copyHand[j] = wHand[j][1];
  }

  //Bubble sort algorithm https://www.programiz.com/dsa/bubble-sort
  for (i = 1; i < 5; ++i) {
     for (k = 0; k < 4; ++k) {
        if (copyHand[k] > copyHand[k+1]) {
           temp = copyHand[k];
	   copyHand[k] = copyHand[k+1];
	   copyHand[k+1] = temp;
	}
     }
  }
  //Check if Bubble sort found straight
  if ((copyHand[4]-1) == copyHand[3] && (copyHand[3]-1) == copyHand[2] &&
      (copyHand[2]-1) == copyHand[1] && (copyHand[1]-1) == copyHand[0])   {
    printf("This hand has a straight %s to %s.\n", wFace[copyHand[0]], wFace[copyHand[4]]);
  }
}

//find a full house in hand
void fullhouse(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{
   //keep track of rank
   int i[FACES] = {0};
   
   //loop counters
   size_t j, k;
   
   //cards and ranks counter
   for (j = 0; j < 5; ++j) {
      ++i[wHand[j][1]];
   }
   for (k = 0; k < FACES; ++k) {
      if (i[k] == 2 && i[k] == 3) {
         printf("This hand has a full house.\n");
      } 
   }
}
//find four of a kind in hand
void fourofkind(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{
   //keep track of rank
   int i[FACES] = {0};
   
   //loop counters
   size_t j, k;
   
   //cards and ranks counter
   for (j = 0; j < 5; ++j) {
        ++i[wHand[j][1]];
   }                          
   for (k = 0; k < FACES; ++k) {
        if (i[k] == 4) {
           printf("This hand has four %ss.\n", wFace[k]);
        }
   }
}

//find royal flush in hand
void royalflush(unsigned int wHand[][2], const char *wSuit[], const char *wFace[])
{
  //counter for suits
  int count[SUITS] = {0}; 

  //make copy of hand array
  int copyHand[5] = {0};

  //make temporary placeholder
  int temp; 

  //loop counters 
  size_t x, y, j, i, k;

  //copy columns into array
  for (j = 0; j < 5; ++j) {
     copyHand[j] = wHand[j][1];
  }
  
  //Bubble sort algorithm https://www.programiz.com/dsa/bubble-sort
  for (i = 1; i < 5; ++i) {
     for (k = 0; k < 4; ++k) {
        if (copyHand[k] > copyHand[k+1]) {
           temp = copyHand[k];
           copyHand[k] = copyHand[k+1];
           copyHand[k+1] = temp;
        }
     }
  }
  //Check if Bubble sort found straight
  if ((copyHand[4]-1) == copyHand[3] && (copyHand[3]-1) == copyHand[2] &&
       (copyHand[2]-1) == copyHand[1] && (copyHand[1]-1) == copyHand[0]){
  
  //find how many cards of each suit
  for (x = 0; x < 5; ++x) {
     ++count[wHand[i][0]];
  }
  for (y = 0; y < SUITS; ++y) {
     if (count[y] == 5) {
        printf("This hand has a Royal Flush!");
     }	
  }                                                               
  }
}