#include<stdio.h>
#include<ctype.h>
#define SIZE 100


int compute_score(char word[])
{
 int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
 int score = 0;
 
 for(int i=0;word[i]!= '\0';i++)
  {
    if(isupper(word[i]))
     score += POINTS[word[i] -'A'];
 
    else if(islower(word[i]))
     score += POINTS[word[i] - 'a'];
  }
 return score;
 }
int main()
{
	
  char word1[SIZE],word2[SIZE];
	
  printf("Enter word 1\n");
  scanf("%s",word1);
  printf("Enter word 2\n");
  scanf("%s",word2);
	
  int score1 = compute_score(word1);
  int score2 = compute_score(word2);
	
		
  if(score1 > score2)
  
    printf("%s\n","Player 1 wins");
  
  else if(score1 < score2)
  
     printf("%s\n","Player 2 wins");
  
  else
  
      printf("%s\n","Tie");
  
  return 0;
	
}

