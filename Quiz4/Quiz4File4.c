/*
TODO:
Write a Program that does the following: Spam Checker
Research online some of the most common spam e-mail messages and words, and check your own
junk e-mail folder. Create a list of 30 words and phrases commonly found in spam messages. Write
a program in which the user enters an e-mail message. Read the message into a large character array
and ensure that the program does not attempt to insert characters past the end of the array. Then
scan the message for each of the 30 keywords or phrases. For each occurrence of one of these within
the message, add a point to the message’s “spam score.” Next, rate the likelihood that the message
is spam, based on the number of points it received. Print your results in a tabulator format showing 
the words (highest likelihood first)
*/

#include <stdio.h>
#include<string.h>

int main(void) {
	//Create arrays and initialize variables
	char *spamWords[30] = {"spam", "bad", "false", "dumb", "stupid", "hard", "non", "yes", "isuk", "red", "blue", "green", "ceo", "awful", "terrible", "worse", "program", "hack", "doubt", "grab", "tear", "break", "crack", "code", "hurt", "money", "linux", "unix", "program", "python"};
	char *email[10000];
	char *checker = strstr(email, spamWords);
	char c;
	char spamFound[10000];
	int i, points = 0;
	//Prompt user for email
	printf("Please input your email then press ENTER: \n");
	
	//loop until the user hits enter
	for (i=0; c != '\n'; i++)  {
		scanf("%s%c", &email[i], &c );
	}
	//loop through the email and check for spam words
	for (i=0; i <= email[i]; i++) {
		if (checker != 'NULL') {
		  points += 1;
		  checker = spamFound[i];
		}
	
	}
	//print the spam words that were found in tabular format
	for (i=0; i < spamFound[i]; i++) {
		printf("%s\n", spamFound);
	}
	//Create conditions to qaulify the email as spam or not
	if (points > 20) {
		printf("%d spam keywords found, this is a spam email\n", points);
	}	
	else {
		printf("%d spam keywords found, this is a good email!\n", points);
	}

	return 0;
}