#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#define  T 2000
int n=0,px,py;
main()
{
    int gd=DETECT,gm,i,j;
	clrscr();
	    gotoxy(25,4);
		printf("DON'T TUCH THE BORDER");
		    gotoxy(25,6);
			printf("Press < p > for pause");
			    gotoxy(17,8);
				printf("IN MIDDLE OF GAME, PRESS < Esc > TO EXIT");
				    x:
					gotoxy(26,10);
					    printf("press < s > to start ");
						gotoxy(26,12);
						    printf(" Use SMALL case only");
							gotoxy(34,10);
							    if(getch()=='s')
								  initgraph(&gd,&gm,"c:\tc\bgi");
								      else {
									  clrscr();
										  goto x;
											 }
											     line(0,0,0,479);
												 line(0,0,639,0);
												     line(639,0,639,479);
													 line(0,479,639,479);
													     pause();
														 print();
														     right(100,100);
														      return ;
														     }
														      right(int x,int y)
															{
															     char ch,fu='r';
																  int i,j;
																       for(i=x;i<=652;i++){
																	for(j=y;j<=y+10;j++){
																		   putpixel(i,j,4);
																			   putpixel(i-10,j,16);
																				   }
																					delay(T-n);
																						check(i,j-1);
																							if(kbhit()){
																								   ch=getch();
																									if(ch=='p')
																										   pause();
																											else
																												   choice(i,j-1,ch,fu);
																													}
																													     }
																													       }
																														  left(int x,int y)
																														    {
																															 char ch,fu='l';
																															      int i,j;
																																   for(i=x;i>-12;i--){
																																	for(j=y;j<=y+10;j++){
																																		   putpixel(i,j,4);
																																			   putpixel(i+10,j,16);
																																				   }
																																					delay(T-n);
																																						check(i,j-1);
																																							if(kbhit()){
																																								   ch=getch();
																																									   if(ch=='p')
																																										   pause();
																																											else
																																												   choice(i,j-1,ch,fu);
																																													}
																																													     }
																																													       }
																																														  down(int x,int y)
																																														    {
																																															 char ch,fu='d';
																																															      int i,j;
																																																   for(j=y;j<=492;j++){
																																																	for(i=x;i<=x+10;i++){
																																																		   putpixel(i,j,4);
																																																			   putpixel(i,j-10,16);
																																																				}
																																																					delay(T-n);
																																																						check(i-1,j);
																																																							if(kbhit()){
																																																								   ch=getch();
																																																									   if(ch=='p')
																																																										   pause();
																																																											else
																																																												   choice(i-1,j,ch,fu);
																																																													}
																																																													     }
																																																													       }
																																																														  up(int x,int y)
																																																														    {
																																																															 char ch,fu='u';
																																																															      int i,j;
																																																																   for(j=y;j>=-12;j--){
																																																																	for(i=x;i<=x+10;i++){
																																																																		   putpixel(i,j,4);
																																																																			   putpixel(i,j+10,16);
																																																																				}
																																																																					delay(T-n);
																																																																						check(i-1,j);
																																																																							if(kbhit()){
																																																																								   ch=getch();
																																																																									   if(ch=='p')
																																																																										   pause();
																																																																											else
																																																																												   choice(i-1,j,ch,fu);
																																																																													}
																																																																													     }
																																																																													       }
																																																																														 choice(int i,int j,char ch,char fu)
																																																																														    {
																																																																															if(fu=='r'){
																																																																																  if(ch=='K'){
																																																																																	     j-=10;
																																																																																		     i-=10;
																																																																																			     left(i,j);
																																																																																				  }
																																																																																					else if(ch=='P'){
																																																																																						     i-=10;
																																																																																							     down(i,j);
																																																																																								}
																																																																																									else if(ch=='H'){
																																																																																										      j-=10;
																																																																																											      i-=10;
																																																																																												      up(i,j);
																																																																																													}
																																																																																														else if(ch==27)
																																																																																																esc();
																																																																																																	else {
																																																																																																		      j-=10;
																																																																																																			      right(i,j);
																																																																																																				     }
																																																																																																					}
																																																																																																					 else if(fu=='l'){
																																																																																																						  if(ch=='M'){
																																																																																																							     j-=10;
																																																																																																								     /*i+=-10;   no comments here free me*/
																																																																																																									     right(i,j);
																																																																																																										  }
																																																																																																											else if(ch=='P')
																																																																																																												     down(i,j);
																																																																																																													else if(ch=='H'){
																																																																																																														      j-=10;
																																																																																																															      up(i,j);
																																																																																																																}
																																																																																																																	else if(ch==27)
																																																																																																																			esc();
																																																																																																																				else {
																																																																																																																					      j-=10;
																																																																																																																						      left(i,j);
																																																																																																																							     }
																																																																																																																								}
																																																																																																																								  else if(fu=='d'){
																																																																																																																									  if(ch=='H'){
																																																																																																																										     j-=10;   i;

																																																																																																																											     up(i,j);
																																																																																																																												       }
																																																																																																																													else if(ch='K'){
																																																																																																																														     i-=10
																																																																																																																														     check(int
