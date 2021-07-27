#include <stdio.h>
#include <string.h>
#define WORD_SIZE 6
#define WORD_COUNT 9



void delete_numbers(char* text, size_t text_len)
{
	int i=0;
	while(i < text_len)
	{	
		if (text[i] == ' ')
		{
			printf(" ");
		}
		else if (text[i]<'0' || text[i]>'9')
		{
			printf("%c",text[i] );
		}
		i += 1;
	}  
}

void correct_misspell(char* text, size_t text_len)
{
	int i=0;
	while(i < text_len)
	{	
		if (text[i] == '.')
		{
			printf(".");
		}
		else if (text[i] == ' ')
		{
			printf(" ");
		}	
		else if ((text[i-1] == ' ' && text[i-2] == '.'))
		{
			if (text[i] <= 'z' && text[i] >= 'a')
			{
				printf("%c",text[i]+('A' - 'a'));
			}
			else
			{
				printf("%c",text[i]);
			}
		}
		else if (text[i-1] == '.')
		{
			printf(" ");
			if (text[i] <= 'z' && text[i] >= 'a')
			{
				printf("%c",text[i]+('A' - 'a'));
			}
			else
			{
				printf("%c",text[i]);
			}
			
		}	
		else
		{
			printf("%c",text[i]);
		}
		i += 1;
	}

}

void spell_checking(char* p_text, size_t p_text_len, char* dict, size_t dict_len )
{
    char dict_words[WORD_COUNT][WORD_SIZE];
    char temp_word[WORD_SIZE];
    
}

int word_counter(char* text, size_t text_len,char separator)
{
	int i = 0,count=0;

	while( separator != text[i] && i < text_len)
	{
		printf("%c",text[i] );		
		if (text[i] == ' ')
		{
			count += 1;
			
		}
		else if (text[i+1] == separator)
		{
			count += 1;
		}
		i += 1;
	}
    return count;
}

int main()
{
	int k;
	char* string_part1="In a h2141ole 15125i12n the ground there 12516lived a hobbit. not326236 a na236sty,dirty, we568t ho967le,filled w679679ith the ends o6679f worm96979679s697967 and an67996796 oozy smell, no474584r yet 45845a dry, bare, sandy hol45824e with nothing in it4288 to sit down on or to eat: 452842it was a hobbit hole,258 and that means comfort.It h25482ad a perfectly round door 45824like a porthole, painted green, with a shiny yello45828w brass knob in4582 the exact middle.the door opened on t2458428o a tube-shaped4585 hall like a tunnel: a 24848very comfortable tun2458nel without smoke, with panelled wall4582824s, and floors tiled and carpeted, provided 45822with polished chairs, a1346nd lots and lots of84845 pegs for hats and coats the23525 hobbit was fond of visitors.";
	char* string_part2="The tunner wound on and on, going fairly but not quite straight into the side of the hill. The Hill, as all the people for many miles round called it and many little round doors opened out of it, first on one side and then on another. No going upstairs for the habbit bedrooms, bathrooms, cellra, pantries, wardrobes, he had whole rooms devoted to cloths, kitchens, dining-rooms, all were on the same floor, and indd on the same pasage.";
	char* dict="hobbit,tunnel,dragon,farmer,clothe,indeed,mobile,yellow,cellar";
	size_t s_p1_len=strlen(string_part1);
	size_t s_p2_len=strlen(string_part2);
	size_t dict_len=strlen(dict);
/*
	delete_numbers(string_part1,s_p1_len);
	printf("\n");
	correct_misspell(string_part1,s_p1_len);
	printf("\n");

	
*/
	k = word_counter(string_part2,s_p2_len,'o');
	printf("\n%d\n",k);




	return 0;
}
