
#include<iostream>
#include<cstdlib>
using namespace std;

string pilihan;
int pilih_bahasa;
int pilih_menu_ing,pilih_menu3_ing;
int pilih_menu_indo,pilih_menu3_indo;
string ke_menu_utama_ing,ke_menu_utama_indo;
int p_1_ie;
string options;
int pilihan_el;
int menu_el;
int menuel_2;
string menu_utama;
string menu_el_2;

/*question 
1. ext (1)
2. intuisi
3. feeling (1)
4. ext (2)
5. feeling (2)
6. thinking (1)
7. int (1)
8. 

*/

int skor_n =  0;
int skor_ext = 0;
int skor_f = 0;
int skor_int = 0;
int skor_s = 0;
int skor_t = 0;
int skor_j = 0;
int skor_p = 0;



string login; 
char username[20],pass[8];
void v_menu_el_ing (){
	
	cout<<"Total element results: "<<endl;
					cout<<"========================"<<endl;
					cout<<endl;

					cout<<" 1. Total Extrovert (E) results: "<<skor_ext<<endl;
					sleep(1);
					cout<<" 2. Introvert (I) total results: "<<skor_int<<endl;
					sleep(1);
					cout<<" 3. Total Intuition Results (N):"<<skor_n<<endl;
					sleep(1);
					cout<<" 4. Total Sensing (S) results: "<<skor_s<<endl;
					sleep(1);
					cout<<" 5. Total results of thinking using Feeling (F): "<<skor_f<<endl;
					sleep(1);
					cout<<" 6. Total results of Thinking (T): "<<skor_t<<endl;
					sleep(1);
					cout<<" 7. Total Judging results (J): "<<skor_j<<endl;
					sleep(1);
					cout<<" 8. Total Perceiving results (P): "<<skor_p<<endl;
					cout<<endl;
					cout<<" 9. Types - Personality Types "<<endl;
					cout<<"========================="<<endl;
					cout<<endl;
					cout<<"* If the elements above are above 15 points or equal to 15 points then you can be said to be dominant"<<endl;
					cout<<" but if it is below 15 points then you are not dominant "<<endl;
					cout<<endl;
					cout<<"Select the element above for more complete information: "<<endl;
					cin>>menu_el;
					
					switch (menu_el){

						case 1 :
							cout<<"Extrovert is a personality who has a comfortable source of energy"<<endl;
							cout<<" in a busy environment, and share lots of ideas with people "<<endl;
							cout<<" surroundings. This personality likes to be the center of attention of people "<<endl;
							cout<<"around them, therefore the way they get energy is by socializing"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 2:
							cout<<" An introvert is a personality who has a source of energy that is comfortable in the environment "<<endl;
							cout<<" who are not too busy, although they like solitude but they are not private "<<endl;
							cout<<" are Anti Social. they tend not to be very open with new people. They fill in "<<endl;
							cout<<"their social energy by staying away from the crowd"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;
	
							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
	
						case 3:
							cout<<"Intuition is a personality that has a way of thinking that relies more on conscience"<<endl;
							cout<<" compared to logic. People who are highly intuitive also tend to "<<endl;
							cout<<"having deep thoughts"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 4:
							cout<<"Sensing is a personality that has a way of thinking that tends to be more logical."<<endl;
							cout<<"Sensing personalities prefer to be realistic, specific, and like ideas"<<endl;
							cout<<" which is based on realism and plausibility "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 5 :
							cout<<"Feeling is a personality that makes decisions by thinking based on emotions"<<endl;
							cout<<"When this personality makes a decision, he will consider the feelings of other members"<<endl;
							cout<<"The empathy he has can make him a place to confide in for some people"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 6 :
							cout<<"Thinking is a personality that makes decisions in a rational way."<<endl;
							cout<<"He will also decide on a choice by considering things "<<endl;
							cout<<" fact-based "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 7 :
							cout<<" Judging is a personality that really values ​​time. That's why the personality type "<<endl;
							cout<<"I like to make a detailed, planned and scheduled daily schedule."<<endl;
							cout<<"This personality tends to have a more work environment than most people."<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 8 :
							cout<<"Perceiving is a personality who doesn't really like life with a detailed schedule"<<endl;
							cout<<"They are people who are flexible, spontaneous, and always chased by deadlines. Personality type"<<endl;
							cout<<" This is also not easy to panic if there is a sudden change in situation "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 9 :
							cout<<"Type - Personality type"<<endl;
							cout<<" ==========================="<<endl;
							cout<<endl;
							cout<<"*Adjust to your element ! "<<endl;
							cout<<"1. INFJ "<<endl;
							cout<<"2. INFP "<<endl;
							cout<<"3. INTJ "<<endl;
							cout<<"4. INTP "<<endl;
							cout<<"5. ISFJ "<<endl;
							cout<<"6. ISFP "<<endl;
							cout<<"7. ISTJ "<<endl;
							cout<<"8. ISTP "<<endl;
							cout<<"9. ENFJ "<<endl;
							cout<<"10. ENFP "<<endl;
							cout<<"11. ENTJ "<<endl;
							cout<<"12. ENTP "<<endl;
							cout<<"13. ESFJ "<<endl;
							cout<<"14. ESFP "<<endl;
							cout<<"15. ESTJ "<<endl;
							cout<<"16. ESTP "<<endl;
							cout<<"=============================="<<endl;
							cout<<"17. Return to menu "<<endl;
							cout<<"18. Exit "<<endl;
							cout<<" Select : "<<endl;
							cin>>menuel_2;
							
							switch(menuel_2){

								case 1:
									cout<<"INFJ is a seeker of meaning. He is interested in understanding other people's thoughts, relationships between ideas, even social relationships."<<endl;
									cout<<"Having a high commitment to work, this MBTI personality type wants to serve the people around them as best as possible."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 2:
									cout<<" INFP is someone who is idealistic, sticks to his principles, and is loyal, especially to the important people in his life."<<endl;
									cout<<"This MBTI personality type has high curiosity, is open to various possibilities. "<<endl;
									cout<<"He is a flexible and adaptive figure, except for the principles he holds."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 3:
									cout<<" INTJs are people who can quickly understand the pattern of a "<<endl;
									cout<<"events that are currently happening, then develop a long-term perspective."<<endl;
									cout<<"They are independent, organized, and have high standards of competence and performance for themselves and others."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 4:
									cout<<"This MBTI personality type is more interested in ideas than social interactions."<<endl;
									cout<<"They are theoretical and abstract people, with an intelligent and calm look."<<endl;
									cout<<"If they have interest, they are able to focus on exploring a problem until they find a solution."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 5:
									cout<<" ISFJ is calm, thorough, responsible, committed, painstaking, careful, kind, loyal, and caring. "<<endl;
									cout<<"He will remember something important specifically. This MBTI personality likes order at home and at work."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 6:
									cout<<"The MBTI ISFP personality is calm, sensitive, and kind. They need their own space, work accordingly"<<endl;
									cout<<" on their own time, present and enjoying the moment. They are committed to people or principles that are important to them."<<endl;
									cout<<"Because they don't like disputes or conflict, ISFPs will not enforce their opinions or principles. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 7 :
									cout<<" ISTJ has a calm, serious, thorough, diligent, reliable, realistic, practical and logical character. His orientation is "<<endl;
									cout<<" responsibility and facts, prioritizing logic when deciding things. He likes work and life that is orderly and orderly. "<<endl;
									cout<<"It's no surprise that this figure is loyal and upholds tradition."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
								
								case 8 :
									cout<<"This MBTI personality type is tolerant and flexible. His calmness in analyzing makes him"<<endl;
									cout<<" able to act quickly to find a solution. Interested in cause-and-effect relationships, ISTP can process facts efficiently and logically. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 9 :
									cout<<" ENFJs are warm, highly empathetic, and good listeners. "<<endl;
									cout<<"This MBTI personality type is sociable, likes to make things easier and encourages others to reach their potential."<<endl;
									cout<<"He is able to accept criticism and praise well."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 10 :
									cout<<" ENFP also has a warm character. He is an imaginative person with high enthusiasm. His ability to understand"<<endl;
									cout<<"the pattern and relationship of information to certain events makes ENFP confident in doing something."<<endl;
									cout<<"This MBTI personality type is supportive, flexible, spontaneous, and articulate."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 11 :
									cout<<"Thanks to their extensive knowledge, ENTJs are good readers of situations."<<endl;
									cout<<"He is sensitive in sorting out less efficient procedures or policies, and is even able to develop systems for "<<endl;
									cout<<"overcoming problems in the organization. This MBTI personality type does not hesitate to impose their ideas. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 12 :
									cout<<" The extroverted side of the MBTI personality makes him an outspoken person. "<<endl;
									cout<<"They don't hesitate when they have to solve problems in ways that are challenging, but at the same time "<<endl;
									cout<<" strategic. ENTP types like interesting activities and easily get bored with routine. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;
	
									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 13 :
									cout<<"ESFJ is a character who likes to work together in a harmonious environment."<<endl;
									cout<<"They are able to understand other people's needs and try to fulfill them. The MBTI ESFJ personality wants to be appreciated"<<endl;
									cout<<"as a person and for what he has done."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 14 :
									cout<<"This MBTI personality type is friendly, friendly, flexible, adaptive, spontaneous,"<<endl;
									cout<<" loves his own life and other people. He likes learning and working with other people with"<<endl;
									cout<<"a logical and realistic approach."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 15 :
									cout<<" ESTJs are practical, realistic, fact-oriented, and firm."<<endl;
									cout<<"He knows how to organize work efficiently to obtain the best results. "<<endl;
									cout<<"The ESTJ's logical standards help him make decisions quickly, to the point of sometimes forcing his plans. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 16 :
									cout<<"The MBTI ESTP personality is flexible and tolerant, likes to communicate actively."<<endl;
									cout<<"For ESTPs, theory is boring. In fact, they learn best when they have to do something directly."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 17 :
									v_menu_el_ing();
									break;

								case 18 :
									cout<<"_____________________________________________________________________________________________________"<<endl;
									cout<<" Thank you for using this program "<<username<< "I apologize if there are many writing errors"<<endl;
									cout<<" or inaccuracies in our program." <<endl;
									cout<<"_______________________________________________________________________________________________________"<<endl;
									cout<<" want to go back to the main menu? (Yes) "<<endl;
									cin>>menu_utama;
										if(menu_utama=="yes"){
											v_menu_el_ing();
										}     
								break;
							}			
									
					}
}

void menu_ing(){
					cout<<endl;
					cout<<"Welcome To MBTI Test"<<endl;
					cout<<"====================================="<<endl;
					cout<<"1. Blog "<<endl;
					cout<<"2. Profile "<<endl;
					cout<<"3. Play "<<endl;
					cout<<"===================================== : "<<endl;
					cin>>pilih_menu_ing;
					
						switch(pilih_menu_ing){//untuk menu
						
							case 1 : 
							cout<<endl;
							cout<<"========================"<<endl;
							cout<<" 1. Reference "<<endl;
							cout<<" 2. Created "<<endl;
							cout<<" 3. Purpose "<<endl;
							cout<<" 4. Back Menu "<<endl;
							cout<<"========================"<<endl;
							cin>>pilih_menu3_ing;
						
								switch(pilih_menu3_ing){	
								
								
								
									case 1 : 
										cout<<" This MBTI test reference was taken from the original Psychotest Website. Here is the link: "<<endl;
										cout<<"  -> https://www.16personalities.com/free-personality-test "<<endl;
										cout<<"  -> https://akupintar.id/info-pintar/-/blogs/tes-mbti-16-tipe-kepribadian-klasifikasi-dan-penjelasannya"<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break; 
										}
									
									case 2 : 
										cout<<" This C++ script was created by : "<<endl;
										cout<<" a SMAIT Ulil Albab Batam student named Ahmad Naufal Fadhlurrahman"<<endl;
										cout<<" 16 year old who is currently in grade X.5 "<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break;
										}
								
									case 3 : 
										cout<<" Our purposed is to create this MBTI Test"<<endl;
										cout<<"so that someone who uses it can know their personal identity"<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break;
										}
										
									case 4 : 
										menu_ing();
										break;
										
								}//menu 3 ing
					
										
							case 2 :
								cout<<" Your Username : "<<username<<endl;
								
								sleep(1);
								cout<<" Your Password : "<<pass<<endl;
								
								sleep(1);
							
								cout<<"================================================"<<endl;
								cout<<"Want to go back to the main menu ? (back)"<<endl;
								cin>>ke_menu_utama_ing;
									if(ke_menu_utama_ing=="back"){
										menu_ing();
										break;
										}
							case 3 : 
								
								cout<<" There are 40 questions, please fill them in according to yourself"<<endl;
								cout<<"========================================================================="<<endl;
								sleep(3);
								cout<<"1. You regularly make new friends "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								 
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
							
								
							
								cout<<"2. Complex and novel ideas excite you more than simple and straightforward ones"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
							
								
								
								cout<<"3. People’s stories and emotions speak louder to you than numbers or data."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
						
								
								
								cout<<"4. You enjoy participating in team-based activities."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
							
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"5. You prioritize being sensitive over being completely honest."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"6. You prioritize facts over people’s feelings when determining a course of action. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"7. You enjoy solitary hobbies or activities more than group ones."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"8. Your mood can change very quickly."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								
								cout<<"9. You usually wait for others to introduce themselves first at social gatherings."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"10. You are not easily swayed by emotional arguments."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"11. You usually prefer to be around others rather than on your own."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"12. You become bored or lose interest when the discussion gets highly theoretical."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"13. When facts and feelings conflict, you usually find yourself following your heart."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"14. You find it challenging to maintain a consistent work or study schedule."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"15. You rarely second-guess the choices that you have made. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"16. Your friends would describe you as lively and outgoing."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"17. You like to have a to-do list for each day."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"18. You avoid making phone calls."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"19. You can easily connect with people you have just met."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"20. Your emotions control you more than you control them."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"21. When making decisions, you focus more on how the affected people might feel than on what is most logical or efficient."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"22. Your personal work style is closer to spontaneous bursts of energy than organized and consistent efforts. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"23. You would love a job that requires you to work alone most of the time."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"24. You believe that pondering abstract philosophical questions is a waste of time."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"25. If a decision feels right to you, you often act on it without needing further proof. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"26. You are more likely to rely on emotional intuition than logical reasoning when making a choice. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"27. You struggle with deadlines."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"28. Your living and working spaces are clean and organized. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"29. You find the idea of networking or promoting yourself to strangers very daunting. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"30. You prioritize and plan tasks effectively, often completing them well before the deadline. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								
								
								
								cout<<"31. You like to use organizing tools like schedules and lists."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								
								cout<<"32. You are not too interested in discussions about various interpretations of creative works."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								 
								cout<<"33. You often allow the day to unfold without any schedule at all."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"34. You rarely worry about whether you make a good impression on people you meet."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"35. You cannot imagine yourself writing fictional stories for a living."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"36. You favor efficiency in decisions, even if it means disregarding some emotional aspects. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"37. You prefer to do your chores before allowing yourself to relax. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"38. In disagreements, you prioritize proving your point over preserving the feelings of others. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"39. You don't panic easily in changing situations"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"40. It's easier for you to learn if you practice straight away and don't focus on theory  "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								


					cout<<"Total element results: "<<endl;
					cout<<"========================"<<endl;
					cout<<endl;

					cout<<" 1. Total Extrovert (E) results: "<<skor_ext<<endl;
					sleep(1);
					cout<<" 2. Introvert (I) total results: "<<skor_int<<endl;
					sleep(1);
					cout<<" 3. Total Intuition Results (N):"<<skor_n<<endl;
					sleep(1);
					cout<<" 4. Total Sensing (S) results: "<<skor_s<<endl;
					sleep(1);
					cout<<" 5. Total results of thinking using Feeling (F): "<<skor_f<<endl;
					sleep(1);
					cout<<" 6. Total results of Thinking (T): "<<skor_t<<endl;
					sleep(1);
					cout<<" 7. Total Judging results (J): "<<skor_j<<endl;
					sleep(1);
					cout<<" 8. Total Perceiving results (P): "<<skor_p<<endl;
					cout<<endl;
					cout<<" 9. Types - Personality Types "<<endl;
					cout<<"========================="<<endl;
					cout<<endl;
					cout<<"* If the elements above are above 15 points or equal to 15 points then you can be said to be dominant"<<endl;
					cout<<" but if it is below 15 points then you are not dominant "<<endl;
					cout<<endl;
					cout<<"Select the element above for more complete information: "<<endl;
					cin>>menu_el;
					
					switch (menu_el){

						case 1 :
							cout<<"Extrovert is a personality who has a comfortable source of energy"<<endl;
							cout<<" in a busy environment, and share lots of ideas with people "<<endl;
							cout<<" surroundings. This personality likes to be the center of attention of people "<<endl;
							cout<<"around them, therefore the way they get energy is by socializing"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 2:
							cout<<" An introvert is a personality who has a source of energy that is comfortable in the environment "<<endl;
							cout<<" who are not too busy, although they like solitude but they are not private "<<endl;
							cout<<" are Anti Social. they tend not to be very open with new people. They fill in "<<endl;
							cout<<"their social energy by staying away from the crowd"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;
	
							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
	
						case 3:
							cout<<"Intuition is a personality that has a way of thinking that relies more on conscience"<<endl;
							cout<<" compared to logic. People who are highly intuitive also tend to "<<endl;
							cout<<"having deep thoughts"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 4:
							cout<<"Sensing is a personality that has a way of thinking that tends to be more logical."<<endl;
							cout<<"Sensing personalities prefer to be realistic, specific, and like ideas"<<endl;
							cout<<" which is based on realism and plausibility "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 5 :
							cout<<"Feeling is a personality that makes decisions by thinking based on emotions"<<endl;
							cout<<"When this personality makes a decision, he will consider the feelings of other members"<<endl;
							cout<<"The empathy he has can make him a place to confide in for some people"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 6 :
							cout<<"Thinking is a personality that makes decisions in a rational way."<<endl;
							cout<<"He will also decide on a choice by considering things "<<endl;
							cout<<" fact-based "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 7 :
							cout<<" Judging is a personality that really values ​​time. That's why the personality type "<<endl;
							cout<<"I like to make a detailed, planned and scheduled daily schedule."<<endl;
							cout<<"This personality tends to have a more work environment than most people."<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 8 :
							cout<<"Perceiving is a personality who doesn't really like life with a detailed schedule"<<endl;
							cout<<"They are people who are flexible, spontaneous, and always chased by deadlines. Personality type"<<endl;
							cout<<" This is also not easy to panic if there is a sudden change in situation "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 9 :
							cout<<"Type - Personality type"<<endl;
							cout<<" ==========================="<<endl;
							cout<<endl;
							cout<<"*Adjust to your element ! "<<endl;
							cout<<"1. INFJ "<<endl;
							cout<<"2. INFP "<<endl;
							cout<<"3. INTJ "<<endl;
							cout<<"4. INTP "<<endl;
							cout<<"5. ISFJ "<<endl;
							cout<<"6. ISFP "<<endl;
							cout<<"7. ISTJ "<<endl;
							cout<<"8. ISTP "<<endl;
							cout<<"9. ENFJ "<<endl;
							cout<<"10. ENFP "<<endl;
							cout<<"11. ENTJ "<<endl;
							cout<<"12. ENTP "<<endl;
							cout<<"13. ESFJ "<<endl;
							cout<<"14. ESFP "<<endl;
							cout<<"15. ESTJ "<<endl;
							cout<<"16. ESTP "<<endl;
							cout<<"=============================="<<endl;
							cout<<"17. Return to menu "<<endl;
							cout<<"18. Exit "<<endl;
							cout<<" Select : "<<endl;
							cin>>menuel_2;
							
							switch(menuel_2){

								case 1:
									cout<<"INFJ is a seeker of meaning. He is interested in understanding other people's thoughts, relationships between ideas, even social relationships."<<endl;
									cout<<"Having a high commitment to work, this MBTI personality type wants to serve the people around them as best as possible."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 2:
									cout<<" INFP is someone who is idealistic, sticks to his principles, and is loyal, especially to the important people in his life."<<endl;
									cout<<"This MBTI personality type has high curiosity, is open to various possibilities. "<<endl;
									cout<<"He is a flexible and adaptive figure, except for the principles he holds."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 3:
									cout<<" INTJs are people who can quickly understand the pattern of a "<<endl;
									cout<<"events that are currently happening, then develop a long-term perspective."<<endl;
									cout<<"They are independent, organized, and have high standards of competence and performance for themselves and others."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 4:
									cout<<"This MBTI personality type is more interested in ideas than social interactions."<<endl;
									cout<<"They are theoretical and abstract people, with an intelligent and calm look."<<endl;
									cout<<"If they have interest, they are able to focus on exploring a problem until they find a solution."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 5:
									cout<<" ISFJ is calm, thorough, responsible, committed, painstaking, careful, kind, loyal, and caring. "<<endl;
									cout<<"He will remember something important specifically. This MBTI personality likes order at home and at work."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 6:
									cout<<"The MBTI ISFP personality is calm, sensitive, and kind. They need their own space, work accordingly"<<endl;
									cout<<" on their own time, present and enjoying the moment. They are committed to people or principles that are important to them."<<endl;
									cout<<"Because they don't like disputes or conflict, ISFPs will not enforce their opinions or principles. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 7 :
									cout<<" ISTJ has a calm, serious, thorough, diligent, reliable, realistic, practical and logical character. His orientation is "<<endl;
									cout<<" responsibility and facts, prioritizing logic when deciding things. He likes work and life that is orderly and orderly. "<<endl;
									cout<<"It's no surprise that this figure is loyal and upholds tradition."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
								
								case 8 :
									cout<<"This MBTI personality type is tolerant and flexible. His calmness in analyzing makes him"<<endl;
									cout<<" able to act quickly to find a solution. Interested in cause-and-effect relationships, ISTP can process facts efficiently and logically. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 9 :
									cout<<" ENFJs are warm, highly empathetic, and good listeners. "<<endl;
									cout<<"This MBTI personality type is sociable, likes to make things easier and encourages others to reach their potential."<<endl;
									cout<<"He is able to accept criticism and praise well."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 10 :
									cout<<" ENFP also has a warm character. He is an imaginative person with high enthusiasm. His ability to understand"<<endl;
									cout<<"the pattern and relationship of information to certain events makes ENFP confident in doing something."<<endl;
									cout<<"This MBTI personality type is supportive, flexible, spontaneous, and articulate."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 11 :
									cout<<"Thanks to their extensive knowledge, ENTJs are good readers of situations."<<endl;
									cout<<"He is sensitive in sorting out less efficient procedures or policies, and is even able to develop systems for "<<endl;
									cout<<"overcoming problems in the organization. This MBTI personality type does not hesitate to impose their ideas. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 12 :
									cout<<" The extroverted side of the MBTI personality makes him an outspoken person. "<<endl;
									cout<<"They don't hesitate when they have to solve problems in ways that are challenging, but at the same time "<<endl;
									cout<<" strategic. ENTP types like interesting activities and easily get bored with routine. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;
	
									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 13 :
									cout<<"ESFJ is a character who likes to work together in a harmonious environment."<<endl;
									cout<<"They are able to understand other people's needs and try to fulfill them. The MBTI ESFJ personality wants to be appreciated"<<endl;
									cout<<"as a person and for what he has done."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 14 :
									cout<<"This MBTI personality type is friendly, friendly, flexible, adaptive, spontaneous,"<<endl;
									cout<<" loves his own life and other people. He likes learning and working with other people with"<<endl;
									cout<<"a logical and realistic approach."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 15 :
									cout<<" ESTJs are practical, realistic, fact-oriented, and firm."<<endl;
									cout<<"He knows how to organize work efficiently to obtain the best results. "<<endl;
									cout<<"The ESTJ's logical standards help him make decisions quickly, to the point of sometimes forcing his plans. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 16 :
									cout<<"The MBTI ESTP personality is flexible and tolerant, likes to communicate actively."<<endl;
									cout<<"For ESTPs, theory is boring. In fact, they learn best when they have to do something directly."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 17 :
									v_menu_el_ing();
									break;

								case 18 :
									cout<<"_____________________________________________________________________________________________________"<<endl;
									cout<<" Thank you for using this program "<<username<< "I apologize if there are many writing errors"<<endl;
									cout<<" or inaccuracies in our program." <<endl;
									cout<<"_______________________________________________________________________________________________________"<<endl;
									cout<<"want to go back to the main menu? (Yes) "<<endl;
									cin>>menu_utama;
										if(menu_utama=="yes"){
											v_menu_el_ing();
										}
								break;
							}			
									
						}
			}
}



						
							
					
					
					
					
					
					
					
					
					
							/*
								cout<<" hasil total extrovert : "<<skor_ext<<endl;
								cout<<" hasil total introvert : "<<skor_int<<endl;
								cout<<" hasil total feeling : "<<skor_f<<endl;
								cout<<" hasil total thingking : "<<skor_t<<endl;
								cout<<" hasil total intuisi :"<<skor_n<<endl;
								cout<<" hasil total sensing : "<<skor_s<<endl;
								cout<<" hasil total judge : "<<skor_j<<endl;
								cout<<" hasil total pensing : "<<skor_p<<endl;
								
								cout<<"skor anda : "<<endl;
								cout<<endl;
								
								if(skor_ext>15){
									cout<<" anda dominan extrovert "<<endl;
								}
								else if(skor_ext<15){
									cout<<" anda dominan introvert"<<endl;
								}
								
								
								else if(skor_int>15){
									cout<<" anda dominan introvert "<<endl;
								}
								else if(skor_int<15){
									cout<<" anda dominan extrovert"<<endl;
								}
								
								else if(skor_f>15){
									cout<<" anda dominan feeling"<<endl;
								}
								else if(skor_f<15){
									cout<<"anda dominan thinking"<<endl;
								}
								
								else if(skor_t>15){
									cout<<"anda dominan thinking"<<endl;
								}
								else if(skor_t<15){
									cout<<"anda dominan feeling "<<endl;
								}
								
								else if(skor_s>15){
									cout<<"anda dominan sensing "<<endl;
								}
								else if(skor_s<15){
									cout<<"anda dominnan intuisi "<<endl;
								}
								
								else if(skor_n>15){
									cout<<" anda dominan intuisi "<<endl;
								}
								else if(skor_n<15){
									cout<<" anda dominan semsing "<<endl;
								}
								
								else if(skor_j>15){
									cout<<" anda dominan judging "<<endl;
								}
								else if(skor_j<15){
									cout<<" anda dominan pensing"<<endl;
								}
								
								else if (skor_p>15){
									cout<<" anda dominan pensing "<<endl;
								}
								else if(skor_p<15){
									cout<<" anda dominan judging "<<endl;
								}
								*/
						//void indo
								
				//VOID ===================================================================//
								
								
								
									

void menu_indo(){
	cout<<"Selamat datang di Tes MBTI"<<endl;
					cout<<"====================================="<<endl;
					cout<<"1. Blog "<<endl;
					cout<<"2. Profil "<<endl;
					cout<<"3. Mulai "<<endl;
					cout<<"===================================== : "<<endl;
					cin>>pilih_menu_indo;
					
						switch(pilih_menu_indo){
						
						
							case 1 : 
								cout<<"========================"<<endl;
								cout<<" 1. Refrensi "<<endl;
								cout<<" 2. Pencipta "<<endl;
								cout<<" 3. Tujuan "<<endl;
								cout<<" 4. Menu "<<endl;
								cout<<"========================"<<endl;
								cin>>pilih_menu3_indo;
								
							
									switch(pilih_menu3_indo){
									
										case 1 : 
											cout<<" Refrensi Psikotes ini diambil dari website asli Psikotes berikut adalah link nya :  "<<endl;
											cout<<"  -> https://www.16personalities.com/free-personality-test "<<endl;
											cout<<"  -> https://akupintar.id/info-pintar/-/blogs/tes-mbti-16-tipe-kepribadian-klasifikasi-dan-penjelasannya"<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<"Ingin Kembali ke Menu utama ? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
												
											}
									
										case 2 : 
											cout<<" Scrip C++ Dibuat Oleh : "<<endl;
											cout<<" Siswa SMAIT Ulil Albab Batam yang bernama Ahmad Naufal Fadhlurrahman "<<endl;
											cout<<" yang berumur 16 Tahun yang kini berada di kelas X.5 "<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<" Ingin kembali ke Menu utama ? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
											}
								
										case 3 : 
											cout<<" Tujuan Kami membuat Psikotes ini "<<endl;
											cout<<" Agar seseorang dapat mengenali identitas mereka serta kepribadian mereka "<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<" Ingin kembali ke menu utama? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
											}
										
										case 4 : 
											menu_indo();
									}//menu 3indo
							case 2 : 
								
								
								cout<<"Nama Pengguna Anda : "<<username<<endl;
							
								
								sleep(1);
								cout<<"Kata Sandi Anda : "<<pass<<endl;
								
								sleep(1);
							
								cout<<" Ingin kembali ke menu utama? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
												}
							case 3 : 
								cout<<"Tersedia 40 Pertanyaan, jawab jawaban sesuai dengan dirimu "<<endl;
								cout<<"========================================================================"<<endl;
								cout<<endl;
								sleep(3);
								cout<<"1. Anda mudah mendapatkan teman "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								 
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								}
							
								
							
								cout<<"2. Ide-ide kompleks dan baru membuat Anda lebih bersemangat daripada ide-ide sederhana dan lugas "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								if(options=="e"){
									skor_n = skor_n + 1;
								}
							
								
								
								cout<<"3. Cerita dan emosi orang berbicara lebih keras kepada Anda dibandingkan angka atau data."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								if(options=="e"){
									skor_f = skor_f + 1;
								}
						
								
								
								cout<<"4. Anda senang berpartisipasi dalam aktivitas berbasis tim."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								}
																
								cout<<"5. Anda memprioritaskan sikap sensitif daripada jujur ​​sepenuhnya."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"6. Anda memprioritaskan fakta dibandingkan perasaan orang lain saat menentukan tindakan."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"7. Anda lebih menikmati hobi atau aktivitas sendirian daripada aktivitas berkelompok."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"8. Suasana hati anda dapat berubah secara cepat. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"9. Anda biasanya menunggu orang lain untuk memperkenalkan diri terlebih dahulu di pertemuan sosial."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"10. Anda tidak mudah terpengaruh oleh argumen emosional."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"11. Anda biasanya lebih suka berada di dekat orang lain daripada sendirian."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"12. Anda menjadi bosan atau kehilangan minat ketika diskusi menjadi sangat teoretis."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"13. Ketika fakta dan perasaan bertentangan, Anda biasanya mengikuti kata hati Anda."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"14. Anda merasa sulit untuk mempertahankan jadwal kerja atau belajar yang konsisten."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"15. Anda jarang menebak-nebak pilihan yang telah Anda buat. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"16.Teman-teman Anda akan menggambarkan Anda sebagai orang yang lincah dan ramah."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"17. Anda ingin memiliki daftar tugas untuk setiap hari."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"18. Anda menghindari panggilan suara."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"19. Anda dapat dengan mudah terhubung dengan orang yang baru Anda temui."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"20. Emosi Anda mengendalikan Anda lebih dari Anda mengendalikannya."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"21. Saat mengambil keputusan, Anda lebih fokus pada apa yang mungkin dirasakan"<<endl;
								cout<<"  oleh orang-orang yang terkena dampak dibandingkan pada apa yang paling logis atau efisien."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"22. Gaya kerja pribadi Anda lebih mirip dengan ledakan energi spontan daripada upaya yang terorganisir dan konsisten."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"23. Anda akan menyukai pekerjaan yang mengharuskan Anda bekerja sendiri hampir sepanjang waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"24. Anda percaya bahwa merenungkan pertanyaan filosofis yang abstrak hanya membuang-buang waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"25. Jika suatu keputusan dirasa tepat bagi Anda, Anda sering kali bertindak berdasarkan keputusan tersebut tanpa memerlukan bukti lebih lanjut."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"26.Anda lebih cenderung mengandalkan intuisi emosional daripada alasan logis saat membuat pilihan. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"27. Anda berjuang dengan tenggat waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"28. Ruang tamu dan ruang kerja Anda bersih dan teratur."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"29. Anda menganggap gagasan membangun jaringan atau mempromosikan diri Anda kepada orang asing sangat menakutkan. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"30. Anda memprioritaskan dan merencanakan tugas secara efektif, sering kali menyelesaikannya jauh sebelum tenggat waktu. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"31. Anda suka menggunakan alat pengorganisasian seperti jadwal dan daftar."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"32. Anda tidak terlalu tertarik dengan diskusi tentang berbagai penafsiran terhadap karya kreatif."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								 
								cout<<"33. Anda sering kali membiarkan hari berjalan tanpa jadwal sama sekali."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"34. Anda jarang khawatir apakah Anda memberikan kesan yang baik pada orang yang Anda temui."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"35. Anda tidak dapat membayangkan diri Anda menulis cerita fiksi untuk mencari nafkah."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"36. Anda menyukai efisiensi dalam pengambilan keputusan, meskipun itu berarti mengabaikan beberapa aspek emosional."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"37. Anda lebih suka melakukan tugas-tugas Anda sebelum membiarkan diri Anda bersantai. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"38. Dalam perselisihan, Anda memprioritaskan pembuktian pendapat Anda daripada menjaga perasaan orang lain. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"39. Anda tidak mudah panik dalam situasi yang berubah-ubah"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
									if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"40. Anda akan lebih mudah belajar jika langsung berlatih dan tidak fokus pada teori "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								
								
								cout<<"skor anda : "<<endl;
								cout<<endl;
								
								if(skor_ext>15){
									cout<<" anda dominan extrovert "<<endl;
								}
								
								
								else if(skor_int>=15){
									cout<<" anda dominan introvert "<<endl;
								}
								
								
								else if(skor_f>=15){
									cout<<" anda dominan feeling"<<endl;
								}
								
								
								else if(skor_t>=15){
									cout<<"anda dominan thinking"<<endl;
								}
								
								
								else if(skor_s>=15){
									cout<<"anda dominan sensing "<<endl;
								}
								
								
								else if(skor_n>=15){
									cout<<" anda dominan intuisi "<<endl;
								}
								
								
								else if(skor_j>=15){
									cout<<" anda dominan judging "<<endl;
								}
								
								else if (skor_p>=15){
									cout<<" anda dominan pensing "<<endl;
								}
						}//
					
					
}//VOID////////////////////////////////////////////////////////////
void v_menu_el_indo(){

	cout<<"Hasil total elemen: "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
								
	cout<<" 1. Hasil total Extrovert (E) : "<<skor_ext<<endl;
	sleep(1);
	cout<<" 2. Hasil total Introvert (I): "<<skor_int<<endl;
	sleep(1);
	cout<<" 3. Hasil total Intuisi (N) :"<<skor_n<<endl;
	sleep(1);
	cout<<" 4. Hasil total Sensing (S) : "<<skor_s<<endl;
	sleep(1);
	cout<<" 5. Hasil total berfikir secara Feeling (F) : "<<skor_f<<endl;
	sleep(1);
	cout<<" 6. Hasil total berfikir secara Thinking (T): "<<skor_t<<endl;
	sleep(1);
	cout<<" 7. Hasil total Judging (J) : "<<skor_j<<endl;
	sleep(1);
	cout<<" 8. Hasil total Perceiving (P) : "<<skor_p<<endl;	
	cout<<endl;
	cout<<" 9. Tipe - Tipe Personaliti "<<endl;	
	cout<<"========================="<<endl;
	cout<<endl;
	cout<<"* Jika elemen diatas berada diatas 15 point atau sama dengan 15 point maka, anda dapat dikatakan dominan"<<endl;
	cout<<" namun jika dibawah 15 point maka anda tidak dominan "<<endl;
	cout<<endl;
	cout<<"Pilih elemen diatas untuk informasi lebih lengkap : "<<endl;
	cin>>pilihan_el;
	
		switch (pilihan_el){
			
			case 1 : 
				cout<<" Extrovert merupakan kepribadian yang memiliki Sumber energi yang mana nyaman "<<endl;
				cout<<" dalam lingkungan yang ramai, dan banyak mengutarakan ide kepada orang-orang "<<endl;
				cout<<" sekitarnya. Kepribadiaan ini suka menjadi pusat perhatian pada orang-orang "<<endl;
				cout<<" sekitarnya oleh sebab itu cara mereka mendapatkan energi yaitu dengan bersosialisasi"<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 2 : 
				cout<<" Introvert merupakan kepribadian yang memiliki sumber energi yang nyaman dalam lingkungan "<<endl;
				cout<<" yang tidak terlalu ramai, walaupun suka dengan kesendirian namun mereka bukanlah pribadi "<<endl;
				cout<<" yang Anti Sosial. mereka cenderung tidak terlalu terbuka dengan orang baru. Mereka mengisi  "<<endl;
				cout<<" energi sosial mereka dengan menjahui keramaian"<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 3 : 
				cout<<" Intuisi merupakan kepribadian yang memiliki cara berfikir yang lebih mengandalkan hati nurani "<<endl;
				cout<<" dibandingan dengan sebuah logika. Orang yang memiliki intuitif yang tinggi juga cenderung  "<<endl;
				cout<<" memiliki pemikiran mendalam "<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 4 : 
				cout<<" Sensing merupakan kepribadian yang memiliki cara berfikir yang cendrung lebih logis. "<<endl;
				cout<<" Kepribadian Sensing lebih suka menjadi realistis, spesifik, serta menyukai suatu ide"<<endl;
				cout<<" yang berdasarkan realisme dan masuk akal "<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 5 : 
				cout<<" Feeling merupakan kepribadian yang mengambil keputusan dengan cara berfikir yang didasari oleh emosional"<<endl;
				cout<<" Ketika kepribadian ini yang mengambil keputusan, maka ia akan mempertimbangkan perasaan anggota lainnya"<<endl;
				cout<<" Empati yang ia miliki dapat menjadikannya tempat curhat bagi sebagian orang"<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 6 :
				cout<<" Thinking merupakan kepribadian yang mengambil keputusan dengan cara yang rasional."<<endl;
				cout<<" Ia juga akan memutuskan sebuah pilihan dengan cara mempertimbangkan hal-hal "<<endl;
				cout<<" yang berdasarkan fakta "<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 7 : 
				cout<<" Judging merupakan kepribadian yang sangat menghargai waktu. Karena itulah tipe kepribadian "<<endl;
				cout<<" ini senang untuk membuat sebuah jadwal kesehariannya secara rinci, terencana, dan terjadwal."<<endl;
				cout<<" Kepribadian ini cendrung memiliki lingkungan kerja yang lebih dari dari orang kebanyakan."<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
					
			case 8 : 
				cout<<" Perceiving merupakan kepribadian yang tidak terlalu menyukai kehidupan dengan jadwal yang rinci"<<endl;
				cout<<" Mereka merupakan orang yang fleksibel, spontan, dan selalu dikejar oleh deadline. Tipe kepribadian"<<endl;
				cout<<" ini juga tidak mudah panik apabila ada perubahan situasi yang tiba-tiba "<<endl;
				cout<<"-----------------------------------------------------------------------------------------"<<endl;
				cout<<" Kembali ke menu ? (Ya) "<<endl;
				cin>>menu_el_2;
				
				if(menu_el_2=="ya"){
				v_menu_el_indo();
				break;
				}
				
			case 9 : 
			
				cout<<" Tipe - Tipe personaliti "<<endl;
				cout<<" ==========================="<<endl;
				cout<<endl;
				cout<<"*Sesuaikan dengan elemen anda ! "<<endl;
				cout<<"1. INFJ "<<endl;
				cout<<"2. INFP "<<endl;
				cout<<"3. INTJ "<<endl;
				cout<<"4. INTP "<<endl;
				cout<<"5. ISFJ "<<endl;
				cout<<"6. ISFP "<<endl;
				cout<<"7. ISTJ "<<endl;
				cout<<"8. ISTP "<<endl;
				cout<<"9. ENFJ "<<endl;
				cout<<"10. ENFP "<<endl;
				cout<<"11. ENTJ "<<endl;
				cout<<"12. ENTP "<<endl;
				cout<<"13. ESFJ "<<endl;
				cout<<"14. ESFP "<<endl;
				cout<<"15. ESTJ "<<endl;
				cout<<"16. ESTP "<<endl;
				cout<<"=============================="<<endl;
				cout<<"17. Kembali ke menu  "<<endl;
				cout<<"18. Exit "<<endl;
				cout<<" Pilih : "<<endl;
				cin>>menuel_2;
										
										 
					switch(menuel_2){
											
						case 1: 
							cout<<" INFJ adalah si pencari makna. Ia tertarik untuk memahami pemikiran orang lain, hubungan antar ide, bahkan hubungan sosial."<<endl;
							cout<<" Punya komitmen tinggi dalam bekerja, tipe kepribadian MBTI ini ingin melayani orang-orang di sekitarnya sebaik mungkin."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
						case 2: 
							cout<<" INFP adalah seseorang yang idealis, teguh memegang prinsip, dan setia terutama pada orang-orang penting dalam hidupnya."<<endl;
							cout<<" Tipe kepribadian MBTI ini memiliki rasa ingin tahu yang tinggi, terbuka dengan berbagai kemungkinan. "<<endl;
							cout<<"Ia adalah sosok yang fleksibel dan adaptif, kecuali pada prinsip yang dipegangnya."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 3: 
							cout<<" INTJ adalah orang-orang yang dapat dengan cepat memahami pola atas suatu "<<endl;
							cout<<"peristiwa yang tengah terjadi, kemudian menyusun perspektif dalam jangka panjang."<<endl;
							cout<<" Mereka mandiri, terorganisir, serta memiliki standar kompetensi dan kinerja yang tinggi untuk diri sendiri dan orang lain."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 4: 
							cout<<" Tipe kepribadian MBTI ini lebih tertarik dengan ide ketimbang interaksi sosial. "<<endl;
							cout<<" Mereka adalah orang-orang yang teoretis dan abstrak, dengan tampilan yang cerdas dan tenang. "<<endl;
							cout<<" Jika memiliki minat, mereka mampu fokus mendalami suatu masalah sampai menemukan solusi."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 5: 
							cout<<" ISFJ itu tenang, teliti, bertanggungjawab, berkomitmen, telaten, cermat, baik hati, loyal, dan perhatian. "<<endl;
							cout<<" Sesuatu yang penting akan diingatnya secara spesifik. Kepribadian MBTI ini menyukai ketertiban di tempat tinggal maupun tempat kerja."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 6:
							cout<<"  Kepribadian MBTI ISFP adalah sosok yang tenang, sensitif, dan baik hati. Mereka membutuhkan ruang sendiri, bekerja sesuai "<<endl;
							cout<<" dengan waktunya sendiri, hadir dan menikmati masa kini. Mereka berkomitmen pada orang atau prinsip yang penting bagi dirinya."<<endl;
							cout<<" Karena tak menyukai perselisihan atau konflik, ISFP takkan memaksakan pendapat atau prinsipnya. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 7 :
							cout<<" ISTJ berkarakter tenang, serius, teliti, tekun, handal, realistis, praktis, dan logis. Orientasinya pada "<<endl;
							cout<<"  tanggung jawab dan fakta, mengedepankan logika saat memutuskan sesuatu. Ia menyukai pekerjaan dan kehidupan yang tertib dan teratur. "<<endl;
							cout<<" Tak heran bila sosok ini loyal dan memegang teguh tradisi."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
											
						case 8 : 
							cout<<" Tipe kepribadian MBTI ini berkarakter toleran dan fleksibel. Ketenangannya dalam menganalisis membuatnya"<<endl;
							cout<<" mampu bertindak cepat menemukan solusi. Berminat pada hubungan sebab-akibat, ISTP dapat mengolah fakta secara efisien dan logis. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 9 : 
							cout<<" ENFJ adalah sosok yang hangat, berempati tinggi, dan pendengar yang baik. "<<endl;
							cout<<" Tipe kepribadian MBTI ini senang bergaul, suka memudahkan urusan dan mendorong orang lain mencapai potensinya."<<endl;
							cout<<"  Ia mampu menerima kritik dan pujian dengan baik."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 10 : 
							cout<<" ENFP juga berkarakter hangat. Ia adalah sosok yang imajinatif dengan antusiasme tinggi. Kemampuannya dalam memahami"<<endl;
							cout<<" pola dan hubungan suatu informasi dengan kejadian tertentu membuat ENFP percaya diri dalam melakukan sesuatu. "<<endl;
							cout<<" Tipe kepribadian MBTI ini suportif, fleksibel, spontan, dan fasih berbicara. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 11 : 
							cout<<" Berkat pengetahuannya yang luas, ENTJ adalah pembaca keadaan yang baik."<<endl;
							cout<<" Ia peka dalam memilah prosedur atau kebijakan yang kurang efisien, bahkan mampu mengembangkan sistem guna "<<endl;
							cout<<" mengatasi persoalan dalam organisasi. Tipe kepribadian MBTI ini tak segan memaksakan idenya. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 12 :
							cout<<" Sisi ekstrovert kepribadian MBTI ini menjadikannya sosok yang blak-blakan. "<<endl;
							cout<<" Mereka tak ragu bila harus memecahkan masalah dengan cara-cara yang menantang, namun sekaligus "<<endl;
							cout<<"  strategis. Tipe ENTP menyukai kegiatan-kegiatan yang menarik dan mudah merasa jenuh dengan rutinitas. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 13 : 
							cout<<" ESFJ adalah karakter yang suka bekerja sama dalam lingkungan yang harmonis."<<endl;
							cout<<" Mereka mampu memahami kebutuhan orang lain berusahan memenuhinya. Kepribadian MBTI ESFJ ingin dihargai"<<endl;
							cout<<" sebagai pribadi dan atas apa yang telah dikerjakannya."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 14 : 
							cout<<" Tipe kepribadian MBTI ini adalah sosok yang ramah, bersahat, fleksibel, adaptif, spontan, "<<endl;
							cout<<" mencintai kehidupannya sendiri dan orang lain. Ia suka belajar dan bekerja bersama orang lain dengan"<<endl;
							cout<<" pendekatan yang logis dan realistis. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 15 : 
							cout<<" ESTJ adalah tipe yang praktis, realistis, berorientasi fakta, dan tegas."<<endl;
							cout<<" Ia tahu bagaimana mengatur pekerjaan secara efisien agar diperoleh hasil terbaik. "<<endl;
							cout<<" Standar logika yang dimiliki ESTJ membantunya membuat keputusan dengan cepat, hingga terkadang memaksakan rencananya. "<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 16 : 
							cout<<" Kepribadian MBTI ESTP adalah sosok yang fleksibel dan toleran, suka menjalin berkomunikasi aktif."<<endl;
							cout<<" Bagi ESTP, teori itu membosankan. Justru mereka belajar dengan baik saat harus melakukan sesuatu secara langsung."<<endl;
							cout<<"__________________________________________________________________________________________________________________________________"<<endl;
							cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
										
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
												
						case 17 : 
							v_menu_el_indo();
							break;
							
						case 18 : 
							cout<<"_____________________________________________________________________________________________________________________"<<endl;
							cout<<" Terimakasih telah menggunakan Program ini "<<username<< " mohon maaf jika terdapat banyak kesalahan penulisan "<<endl;
							cout<<"			 maupun ketidak akuratan dalam program kami." <<endl;
							cout<<"______________________________________________________________________________________________________________________"<<endl;
							cout<<" Kembali ke Menu utama ? (Ya) "<<endl;
							cin>>menu_utama;
								if(menu_utama=="ya"){
									v_menu_el_indo;
								}
								break;


					
					

					}			
				


					
					

		}
				
				

					
					

	
}


int main (){


	
	cout<<"Start the program ? (Y/T)"<<endl;
	cin>>pilihan; 
		if(pilihan=="y"){
			cout<<"Loading Program "<<endl;
			cout<<"======================"<<endl;
			sleep(3);
			cout<<"Welcome to MBTI Test "<<endl;
			cout<<"====================================="<<endl;
			sleep(1);
			cout<<"Chose your language : "<<endl;
			cout<<" 1. English "<<endl;
			cout<<" 2. Indonesian "<<endl;
			cout<<"========================== : "<<endl;
			cin>>pilih_bahasa; 
			
			switch(pilih_bahasa){
			
				
				case 1: //utk bahasa ingris
					cout<<" Loading..."<<endl;
					sleep(3);
					cout<<" English Language has been successfully applied"<<endl;
					cout<<"================================================"<<endl;
					sleep(2);
					cout<<" Your account is not yet log in "<<endl;
								cout<<" Login here -> (Yes) "<<endl;
								cout<<"======================="<<endl;
								cin>>login;
								if(login=="yes"){
									cout<<" Username : "<<endl;
									cout<<"*Username must be a maximum of 20 characters"<<endl;
									cin.ignore();
									cin.getline(username,20);
									cout<<"================"<<endl;
									cout<<" Password : "<<endl;
									cout<<"password must be a maximum of 8 characters"<<endl;
									cin.ignore();
									cin.getline(pass,8);
									cout<<"================"<<endl;
									}
									
					
					cout<<"Welcome To MBTI Test"<<endl;
					cout<<"====================================="<<endl;
					cout<<"1. Blog "<<endl;
					cout<<"2. Profile "<<endl;
					cout<<"3. Play "<<endl;
					cout<<"===================================== : "<<endl;
					cin>>pilih_menu_ing;
					
						switch(pilih_menu_ing){//untuk menu
						
							case 1 : 
							cout<<"========================"<<endl;
							cout<<" 1. Reference "<<endl;
							cout<<" 2. Created "<<endl;
							cout<<" 3. Purpose "<<endl;
							cout<<" 4. Back Menu "<<endl;
							cout<<"========================"<<endl;
							cin>>pilih_menu3_ing;
						
								switch(pilih_menu3_ing){	
								
								
								
									case 1 : 
										cout<<" This Psychotest reference was taken from the original MBTI test Website. Here is the link: "<<endl;
										cout<<"  -> https://www.16personalities.com/free-personality-test "<<endl;
										cout<<"  -> https://akupintar.id/info-pintar/-/blogs/tes-mbti-16-tipe-kepribadian-klasifikasi-dan-penjelasannya"<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break; 
										}
									
									case 2 : 
										cout<<" This C++ script was created by : "<<endl;
										cout<<" a SMAIT Ulil Albab Batam student named Ahmad Naufal Fadhlurrahman"<<endl;
										cout<<" 16 year old who is currently in grade X.5 "<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break;
										}
								
									case 3 : 
										cout<<" Our purposed is to create this psychological test"<<endl;
										cout<<"so that someone who uses it can know their personal identity"<<endl;
										sleep(2);
										cout<<"================================================"<<endl;
										cout<<"Want to go back to the main menu ? (back)"<<endl;
										cin>>ke_menu_utama_ing;
										if(ke_menu_utama_ing=="back"){
											menu_ing();
											break;
										}
										
									case 4 : 
										menu_ing();
										break;
										
								}//menu 3 ing
					
										
							case 2 :
								cout<<" Your Username : "<<username<<endl;
								sleep(1);
								cout<<" Your Password : "<<pass<<endl;
								sleep(1);
								cout<<" Your Personality : "<<endl;
								sleep(1);
								cout<<"================================================"<<endl;
								cout<<"Want to go back to the main menu ? (back)"<<endl;
								cin>>ke_menu_utama_ing;
									if(ke_menu_utama_ing=="back"){
										menu_ing();
										break;
										}
									
									
							case 3 : 
								
								cout<<" There are 40 questions, please fill them in according to yourself"<<endl;
								cout<<"=============================================================================="<<endl;
								sleep(3);
								cout<<"1. You regularly make new friends "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								 
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
							
								
							
								cout<<"2. Complex and novel ideas excite you more than simple and straightforward ones"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
							
								
								
								cout<<"3. People’s stories and emotions speak louder to you than numbers or data."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
						
								
								
								cout<<"4. You enjoy participating in team-based activities."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
							
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"5. You prioritize being sensitive over being completely honest."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"6. You prioritize facts over people’s feelings when determining a course of action. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"7. You enjoy solitary hobbies or activities more than group ones."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"8. Your mood can change very quickly."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								
								cout<<"9. You usually wait for others to introduce themselves first at social gatherings."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"10. You are not easily swayed by emotional arguments."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"11. You usually prefer to be around others rather than on your own."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"12. You become bored or lose interest when the discussion gets highly theoretical."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"13. When facts and feelings conflict, you usually find yourself following your heart."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"14. You find it challenging to maintain a consistent work or study schedule."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"15. You rarely second-guess the choices that you have made. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"16. Your friends would describe you as lively and outgoing."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"17. You like to have a to-do list for each day."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"18. You avoid making phone calls."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"19. You can easily connect with people you have just met."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else if(options=="d"){
									skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								
								}
								
								cout<<"20. Your emotions control you more than you control them."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"21. When making decisions, you focus more on how the affected people might feel than on what is most logical or efficient."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"22. Your personal work style is closer to spontaneous bursts of energy than organized and consistent efforts. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"23. You would love a job that requires you to work alone most of the time."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"24. You believe that pondering abstract philosophical questions is a waste of time."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"25. If a decision feels right to you, you often act on it without needing further proof. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"26. You are more likely to rely on emotional intuition than logical reasoning when making a choice. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"27. You struggle with deadlines."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"28. Your living and working spaces are clean and organized. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"29. You find the idea of networking or promoting yourself to strangers very daunting. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								
								
					
								
								cout<<"30. You prioritize and plan tasks effectively, often completing them well in advance. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								
								cout<<"31. You like to use organizing tools like schedules and lists."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								
								cout<<"32. You are not too interested in discussions about various interpretations of creative works."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								 
								cout<<"33. You often allow the day to unfold without any schedule at all."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"34. You rarely worry about whether you make a good impression on people you meet."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"35. You cannot imagine yourself writing fictional stories for a living."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"36. You favor efficiency in decisions, even if it means disregarding some emotional aspects. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"37. You prefer to do your chores before allowing yourself to relax. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2; 
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1; 
								
								}
								
								cout<<"38. In disagreements, you prioritize proving your point over preserving the feelings of others. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"39. You don't panic easily in changing situations"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p = 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p = 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p = 2; 
								
								}
								
								else if(options=="e"){
									skor_p = skor_p = 1;
								
								}
								
								cout<<"40. It's easier for you to learn if you practice straight away and don't focus on theory  "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Yes Of Course "<<endl;
								cout<<"b. Often "<<endl;
								cout<<"c. Sometimes"<<endl;
								cout<<"d. Rarely "<<endl;
								cout<<"e. Never "<<endl;
								cin>>options;
								sleep(1);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3; 
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
					
					cout<<"Total element results: "<<endl;
					cout<<"========================"<<endl;
					cout<<endl;

					cout<<" 1. Extrovert (E) total results: "<<skor_ext<<endl;
					sleep(1);
					cout<<" 2. Introvert (I) total results: "<<skor_int<<endl;
					sleep(1);
					cout<<" 3. Total Intuition Results (N):"<<skor_n<<endl;
					sleep(1);
					cout<<" 4. Total Sensing results (S)): "<<skor_s<<endl;
					sleep(1);
					cout<<" 5. Total results of thinking using Feeling (F): "<<skor_f<<endl;
					sleep(1);
					cout<<" 6. Total results of Thinking (T): "<<skor_t<<endl;
					sleep(1);
					cout<<" 7. Total Judging results (J): "<<skor_j<<endl;
					sleep(1);
					cout<<" 8. Total Perceiving results (P): "<<skor_p<<endl;
					cout<<endl;
					cout<<" 9. Types - Personality Types "<<endl;
					cout<<"========================="<<endl;
					cout<<endl;
					cout<<"* If the elements above are above 15 points or equal to 15 points then you can be said to be dominant"<<endl;
					cout<<" but if it is below 15 points then you are not dominant "<<endl;
					cout<<endl;
					cout<<"Select the element above for more complete information: "<<endl;
					cin>>menu_el;
					
					switch (menu_el){

						case 1 :
							cout<<"Extrovert is a personality who has a comfortable source of energy"<<endl;
							cout<<" in a busy environment, and share lots of ideas with people "<<endl;
							cout<<" surroundings. This personality likes to be the center of attention of people "<<endl;
							cout<<"around them, therefore the way they get energy is by socializing"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 2:
							cout<<" An introvert is a personality who has a source of energy that is comfortable in the environment "<<endl;
							cout<<" who are not too busy, although they like solitude but they are not private "<<endl;
							cout<<" are Anti Social. they tend not to be very open with new people. They fill in "<<endl;
							cout<<"their social energy by staying away from the crowd"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;
	
							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
	
						case 3:
							cout<<"Intuition is a personality that has a way of thinking that relies more on conscience"<<endl;
							cout<<" compared to logic. People who are highly intuitive also tend to "<<endl;
							cout<<"having deep thoughts"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 4:
							cout<<"Sensing is a personality that has a way of thinking that tends to be more logical."<<endl;
							cout<<"Sensing personalities prefer to be realistic, specific, and like ideas"<<endl;
							cout<<" which is based on realism and plausibility "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 5 :
							cout<<"Feeling is a personality that makes decisions by thinking based on emotions"<<endl;
							cout<<"When this personality makes a decision, he will consider the feelings of other members"<<endl;
							cout<<"The empathy he has can make him a place to confide in for some people"<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 6 :
							cout<<"Thinking is a personality that makes decisions in a rational way."<<endl;
							cout<<"He will also decide on a choice by considering things "<<endl;
							cout<<" fact-based "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 7 :
							cout<<" Judging is a personality that really values ​​time. That's why the personality type "<<endl;
							cout<<"I like to make a detailed, planned and scheduled daily schedule."<<endl;
							cout<<"This personality tends to have a more work environment than most people."<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}

						case 8 :
							cout<<"Perceiving is a personality who doesn't really like life with a detailed schedule"<<endl;
							cout<<"They are people who are flexible, spontaneous, and always chased by deadlines. Personality type"<<endl;
							cout<<" This is also not easy to panic if there is a sudden change in situation "<<endl;
							cout<<"---------------------------------------------- -------------------------------------------"<<endl;
							cout<<" Return to menu? (Yes) "<<endl;
							cin>>menu_el_2;

							if(menu_el_2=="yes"){
							v_menu_el_ing();
							break;
							}
							
						case 9 :
							cout<<"Type - Personality type"<<endl;
							cout<<" ==========================="<<endl;
							cout<<endl;
							cout<<"*Adjust to your element ! "<<endl;
							cout<<"1. INFJ "<<endl;
							cout<<"2. INFP "<<endl;
							cout<<"3. INTJ "<<endl;
							cout<<"4. INTP "<<endl;
							cout<<"5. ISFJ "<<endl;
							cout<<"6. ISFP "<<endl;
							cout<<"7. ISTJ "<<endl;
							cout<<"8. ISTP "<<endl;
							cout<<"9. ENFJ "<<endl;
							cout<<"10. ENFP "<<endl;
							cout<<"11. ENTJ "<<endl;
							cout<<"12. ENTP "<<endl;
							cout<<"13. ESFJ "<<endl;
							cout<<"14. ESFP "<<endl;
							cout<<"15. ESTJ "<<endl;
							cout<<"16. ESTP "<<endl;
							cout<<"=============================="<<endl;
							cout<<"17. Return to menu "<<endl;
							cout<<"18. Exit "<<endl;
							cout<<" Select : "<<endl;
							cin>>menuel_2;
							
							switch(menuel_2){

								case 1:
									cout<<"INFJ is a seeker of meaning. He is interested in understanding other people's thoughts, relationships between ideas, even social relationships."<<endl;
									cout<<"Having a high commitment to work, this MBTI personality type wants to serve the people around them as best as possible."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 2:
									cout<<" INFP is someone who is idealistic, sticks to his principles, and is loyal, especially to the important people in his life."<<endl;
									cout<<"This MBTI personality type has high curiosity, is open to various possibilities. "<<endl;
									cout<<"He is a flexible and adaptive figure, except for the principles he holds."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 3:
									cout<<" INTJs are people who can quickly understand the pattern of a "<<endl;
									cout<<"events that are currently happening, then develop a long-term perspective."<<endl;
									cout<<"They are independent, organized, and have high standards of competence and performance for themselves and others."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 4:
									cout<<"This MBTI personality type is more interested in ideas than social interactions."<<endl;
									cout<<"They are theoretical and abstract people, with an intelligent and calm look."<<endl;
									cout<<"If they have interest, they are able to focus on exploring a problem until they find a solution."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 5:
									cout<<" ISFJ is calm, thorough, responsible, committed, painstaking, careful, kind, loyal, and caring. "<<endl;
									cout<<"He will remember something important specifically. This MBTI personality likes order at home and at work."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 6:
									cout<<"The MBTI ISFP personality is calm, sensitive, and kind. They need their own space, work accordingly"<<endl;
									cout<<" on their own time, present and enjoying the moment. They are committed to people or principles that are important to them."<<endl;
									cout<<"Because they don't like disputes or conflict, ISFPs will not enforce their opinions or principles. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 7 :
									cout<<" ISTJ has a calm, serious, thorough, diligent, reliable, realistic, practical and logical character. His orientation is "<<endl;
									cout<<" responsibility and facts, prioritizing logic when deciding things. He likes work and life that is orderly and orderly. "<<endl;
									cout<<"It's no surprise that this figure is loyal and upholds tradition."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
								
								case 8 :
									cout<<"This MBTI personality type is tolerant and flexible. His calmness in analyzing makes him"<<endl;
									cout<<" able to act quickly to find a solution. Interested in cause-and-effect relationships, ISTP can process facts efficiently and logically. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 9 :
									cout<<" ENFJs are warm, highly empathetic, and good listeners. "<<endl;
									cout<<"This MBTI personality type is sociable, likes to make things easier and encourages others to reach their potential."<<endl;
									cout<<"He is able to accept criticism and praise well."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 10 :
									cout<<" ENFP also has a warm character. He is an imaginative person with high enthusiasm. His ability to understand"<<endl;
									cout<<"the pattern and relationship of information to certain events makes ENFP confident in doing something."<<endl;
									cout<<"This MBTI personality type is supportive, flexible, spontaneous, and articulate."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 11 :
									cout<<"Thanks to their extensive knowledge, ENTJs are good readers of situations."<<endl;
									cout<<"He is sensitive in sorting out less efficient procedures or policies, and is even able to develop systems for "<<endl;
									cout<<"overcoming problems in the organization. This MBTI personality type does not hesitate to impose their ideas. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 12 :
									cout<<" The extroverted side of the MBTI personality makes him an outspoken person. "<<endl;
									cout<<"They don't hesitate when they have to solve problems in ways that are challenging, but at the same time "<<endl;
									cout<<" strategic. ENTP types like interesting activities and easily get bored with routine. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;
	
									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 13 :
									cout<<"ESFJ is a character who likes to work together in a harmonious environment."<<endl;
									cout<<"They are able to understand other people's needs and try to fulfill them. The MBTI ESFJ personality wants to be appreciated"<<endl;
									cout<<"as a person and for what he has done."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing;
									break;
									}

								case 14 :
									cout<<"This MBTI personality type is friendly, friendly, flexible, adaptive, spontaneous,"<<endl;
									cout<<" loves his own life and other people. He likes learning and working with other people with"<<endl;
									cout<<"a logical and realistic approach."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 15 :
									cout<<" ESTJs are practical, realistic, fact-oriented, and firm."<<endl;
									cout<<"He knows how to organize work efficiently to obtain the best results. "<<endl;
									cout<<"The ESTJ's logical standards help him make decisions quickly, to the point of sometimes forcing his plans. "<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}
									
								case 16 :
									cout<<"The MBTI ESTP personality is flexible and tolerant, likes to communicate actively."<<endl;
									cout<<"For ESTPs, theory is boring. In fact, they learn best when they have to do something directly."<<endl;
									cout<<"__________________________________________________________________________________________________________________"<<endl;
									cout<<" Want to go back to the menu? (Yes) "<<endl;
									cin>>menu_el_2;

									if(menu_el_2=="yes"){
									v_menu_el_ing();
									break;
									}

								case 17 :
									v_menu_el_ing();
									break;

								case 18 :
									cout<<"_____________________________________________________________________________________________________"<<endl;
									cout<<" Thank you for using this program "<<username<< "I apologize if there are many writing errors"<<endl;
									cout<<" or inaccuracies in our program." <<endl;
									cout<<"_______________________________________________________________________________________________________"<<endl;
									cout<<"want to go back to the main menu? (yes) "<<endl;
									cin>>menu_utama;
										if(menu_utama=="yes"){
											menu_ing();
										}
									break;
							}			
									
					}			
							
								
								
								
								

								
								 
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
	
										
							
								
						} //kemenuutamaing
								
					
						
								
								
				case 2 : //utk bahasa indo
					cout<<"Memuat..."<<endl;
					sleep(3);
					cout<<"Bahasa Indonesia Berhasil diterapkan "<<endl;
					cout<<"==========================================="<<endl;
					sleep(2);
					cout<<" Akun anda belum di tautkan "<<endl;
								cout<<" Tautkan disini -> (Ya) "<<endl;
								cout<<"=========================="<<endl;
								cin>>login;
								if(login=="ya"){
									cout<<" Username : "<<endl;
									cout<<"* Nama Pengguna maksimal 20 Karakter "<<endl;
									cin.ignore();
									cin.getline(username,20);
									cout<<"============================"<<endl;
									cout<<" Password : "<<endl;
									cout<<" Kata Sandi maksmal 8 Karakter "<<endl;
									cin.ignore();
									cin.getline(pass,8);
									cout<<" ==========================="<<endl;
									cout<<endl;
								}
					
					cout<<"Selamat datang di Tes MBTI "<<endl;
					cout<<"====================================="<<endl;
					cout<<"1. Blog "<<endl;
					cout<<"2. Profil "<<endl;
					cout<<"3. Mulai "<<endl;
					cout<<"===================================== : "<<endl;
					cin>>pilih_menu_indo;
					
						switch(pilih_menu_indo){
						
						
							case 1 : 
								cout<<"========================"<<endl;
								cout<<" 1. Refrensi "<<endl;
								cout<<" 2. Pencipta "<<endl;
								cout<<" 3. Tujuan "<<endl;
								cout<<" 4. Menu "<<endl;
								cout<<"========================"<<endl;
								cin>>pilih_menu3_indo;
								
							
									switch(pilih_menu3_indo){
									
										case 1 : 
											cout<<" Refrensi Psikotes ini diambil dari website asli Psikotes berikut adalah link nya :  "<<endl;
											cout<<"  -> https://www.16personalities.com/free-personality-test "<<endl;
											cout<<"  -> https://akupintar.id/info-pintar/-/blogs/tes-mbti-16-tipe-kepribadian-klasifikasi-dan-penjelasannya"<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<"Ingin Kembali ke Menu utama ? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
												
											}
									
										case 2 : 
											cout<<" Scrip C++ Dibuat Oleh : "<<endl;
											cout<<" Siswa SMAIT Ulil Albab Batam yang bernama Ahmad Naufal Fadhlurrahman "<<endl;
											cout<<" yang berumur 16 Tahun yang kini berada di kelas X.5 "<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<" Ingin kembali ke Menu utama ? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
											}
								
										case 3 : 
											cout<<" Tujuan Kami membuat MBTI Tes ini "<<endl;
											cout<<" Agar seseorang dapat mengenali identitas mereka serta kepribadian mereka "<<endl;
											sleep(2);
											cout<<"================================================"<<endl;
											cout<<" Ingin kembali ke menu utama? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
											}
										
										case 4 : 
											menu_indo();
									}//menu 3indo
							case 2 : 
								
								
								cout<<"Nama Pengguna Anda : "<<username<<endl;
								
								sleep(1);
								cout<<"Kata Sandi Anda : "<<pass<<endl;
							
								sleep(1);
								
								cout<<" Ingin kembali ke menu utama? (menu)"<<endl;
											cin>>ke_menu_utama_indo;
												if(ke_menu_utama_indo=="menu"){
												menu_indo();
												break;
												}
							case 3 : 
								cout<<"Tersedia 40 Pertanyaan, jawab jawaban sesuai dengan dirimu "<<endl;
								cout<<"========================================================================"<<endl;
								cout<<endl;
								sleep(3);
								cout<<"1. Anda mudah mendapatkan teman "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								 
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								}
							
								
							
								cout<<"2. Ide-ide kompleks dan baru membuat Anda lebih bersemangat daripada ide-ide sederhana dan lugas "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								if(options=="e"){
									skor_n = skor_n + 1;
								}
							
								
								
								cout<<"3. Cerita dan emosi orang berbicara lebih keras kepada Anda dibandingkan angka atau data."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								if(options=="e"){
									skor_f = skor_f + 1;
								}
						
								
								
								cout<<"4. Anda senang berpartisipasi dalam aktivitas berbasis tim."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								 if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								if(options=="e"){
									skor_ext = skor_ext + 1;
								}
																
								cout<<"5. Anda memprioritaskan sikap sensitif daripada jujur ​​sepenuhnya."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"6. Anda memprioritaskan fakta dibandingkan perasaan orang lain saat menentukan tindakan."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"7. Anda lebih menikmati hobi atau aktivitas sendirian daripada aktivitas berkelompok."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"8. Suasana hati anda dapat berubah secara cepat. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"9. Anda biasanya menunggu orang lain untuk memperkenalkan diri terlebih dahulu di pertemuan sosial."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"10. Anda tidak mudah terpengaruh oleh argumen emosional."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"11. Anda biasanya lebih suka berada di dekat orang lain daripada sendirian."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"12. Anda menjadi bosan atau kehilangan minat ketika diskusi menjadi sangat teoretis."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"13. Ketika fakta dan perasaan bertentangan, Anda biasanya mengikuti kata hati Anda."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"14. Anda merasa sulit untuk mempertahankan jadwal kerja atau belajar yang konsisten."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"15. Anda jarang menebak-nebak pilihan yang telah Anda buat. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"16.Teman-teman Anda akan menggambarkan Anda sebagai orang yang lincah dan ramah."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"17. Anda ingin memiliki daftar tugas untuk setiap hari."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"18. Anda menghindari panggilan suara."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"19. Anda dapat dengan mudah terhubung dengan orang yang baru Anda temui."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_ext = skor_ext + 5;
								}
								
								
								else if(options=="b"){
									skor_ext = skor_ext + 4;
								}
							
								
								else if(options=="c"){
									skor_ext = skor_ext + 3;
								}
							
								 
								else  if(options=="d"){
								 	skor_ext = skor_ext + 2;
								 }
				
								
								else if(options=="e"){
									skor_ext = skor_ext + 1;
								}
								
								cout<<"20. Emosi Anda mengendalikan Anda lebih dari Anda mengendalikannya."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"21. Saat mengambil keputusan, Anda lebih fokus pada apa yang mungkin dirasakan"<<endl;
								cout<<"  oleh orang-orang yang terkena dampak dibandingkan pada apa yang paling logis atau efisien."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_f = skor_f + 5;
								}
						
								
								else if(options =="b"){
									skor_f = skor_f + 4;
								}
						
								
								else if(options =="c"){
									skor_f = skor_f + 3;
								}
				
								
								else if(options=="d"){
									skor_f = skor_f + 2;
								}
							
								
								else if(options=="e"){
									skor_f = skor_f + 1;
								}
								
								cout<<"22. Gaya kerja pribadi Anda lebih mirip dengan ledakan energi spontan daripada upaya yang terorganisir dan konsisten."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"23. Anda akan menyukai pekerjaan yang mengharuskan Anda bekerja sendiri hampir sepanjang waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"24. Anda percaya bahwa merenungkan pertanyaan filosofis yang abstrak hanya membuang-buang waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"25. Jika suatu keputusan dirasa tepat bagi Anda, Anda sering kali bertindak berdasarkan keputusan tersebut tanpa memerlukan bukti lebih lanjut."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"26.Anda lebih cenderung mengandalkan intuisi emosional daripada alasan logis saat membuat pilihan. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_n = skor_n + 5;
								}
							
								
								else if(options =="b"){
									skor_n = skor_n + 4;
								}
							
								
								else if(options =="c"){
									skor_n = skor_n + 3;
								}
							
								
								else if(options=="d"){
									skor_n = skor_n + 2;
								}
							
								
								else if(options=="e"){
									skor_n = skor_n + 1;
								}
								
								cout<<"27. Anda berjuang dengan tenggat waktu."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"28. Ruang tamu dan ruang kerja Anda bersih dan teratur."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"29. Anda menganggap gagasan membangun jaringan atau mempromosikan diri Anda kepada orang asing sangat menakutkan. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_int = skor_int + 5;
								}
								
								else if(options =="b"){
									skor_int = skor_int + 4;
								
								}
								
								else if(options =="c"){
									skor_int = skor_int + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_int = skor_int + 2;
								
								}
								
								else if(options=="e"){
									skor_int = skor_int + 1;
								
								}
								
								cout<<"30. Anda memprioritaskan dan merencanakan tugas secara efektif, sering kali menyelesaikannya jauh sebelum tenggat waktu. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"31. Anda suka menggunakan alat pengorganisasian seperti jadwal dan daftar."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"32. Anda tidak terlalu tertarik dengan diskusi tentang berbagai penafsiran terhadap karya kreatif."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								 
								cout<<"33. Anda sering kali membiarkan hari berjalan tanpa jadwal sama sekali."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"34. Anda jarang khawatir apakah Anda memberikan kesan yang baik pada orang yang Anda temui."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"35. Anda tidak dapat membayangkan diri Anda menulis cerita fiksi untuk mencari nafkah."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
								cout<<"36. Anda menyukai efisiensi dalam pengambilan keputusan, meskipun itu berarti mengabaikan beberapa aspek emosional."<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"37. Anda lebih suka melakukan tugas-tugas Anda sebelum membiarkan diri Anda bersantai. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_j = skor_j + 5;
								}
								
								else if(options =="b"){
									skor_j = skor_j + 4;
								
								}
								
								else if(options =="c"){
									skor_j = skor_j + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_j = skor_j + 2;
								
								}
								
								else if(options=="e"){
									skor_j = skor_j + 1;
								
								}
								
								cout<<"38. Dalam perselisihan, Anda memprioritaskan pembuktian pendapat Anda daripada menjaga perasaan orang lain. "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_t = skor_t + 5;
								}
								
								else if(options =="b"){
									skor_t = skor_t + 4;
								
								}
								
								else if(options =="c"){
									skor_t = skor_t + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_t = skor_t + 2;
								
								}
								
								else if(options=="e"){
									skor_t = skor_t + 1;
								
								}
								
								cout<<"39. Anda tidak mudah panik dalam situasi yang berubah-ubah"<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
									if(options=="a"){
									skor_p = skor_p + 5;
								}
								
								else if(options =="b"){
									skor_p = skor_p + 4;
								
								}
								
								else if(options =="c"){
									skor_p = skor_p + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_p = skor_p + 2;
								
								}
								
								else if(options=="e"){
									skor_p = skor_p + 1;
								
								}
								
								cout<<"40. Anda akan lebih mudah belajar jika langsung berlatih dan tidak fokus pada teori "<<endl;
								cout<<"======================================="<<endl;
								cout<<"a. Ya, Tentu saja "<<endl;
								cout<<"b. Sering "<<endl;
								cout<<"c. Terkadang "<<endl;
								cout<<"d. Jarang "<<endl;
								cout<<"e. Tidak Pernah "<<endl;
								cin>>options;
								sleep(3);
								
								if(options=="a"){
									skor_s = skor_s + 5;
								}
								
								else if(options =="b"){
									skor_s = skor_s + 4;
								
								}
								
								else if(options =="c"){
									skor_s = skor_s + 3;
								
							 	}
					 
								else if(options=="d"){
									skor_s = skor_s + 2;
								
								}
								
								else if(options=="e"){
									skor_s = skor_s + 1;
								
								}
								
	
					cout<<"Hasil total elemen: "<<endl;
					cout<<"========================"<<endl;
					cout<<endl;
								
					cout<<" 1. Hasil total Extrovert (E) : "<<skor_ext<<endl;
					sleep(1);
					cout<<" 2. Hasil total Introvert (I): "<<skor_int<<endl;
					sleep(1);
					cout<<" 3. Hasil total Intuisi (N) :"<<skor_n<<endl;
					sleep(1);
					cout<<" 4. Hasil total Sensing (S) : "<<skor_s<<endl;
					sleep(1);
					cout<<" 5. Hasil total berfikir secara Feeling (F) : "<<skor_f<<endl;
					sleep(1);
					cout<<" 6. Hasil total berfikir secara Thinking (T): "<<skor_t<<endl;
					sleep(1);
					cout<<" 7. Hasil total Judging (J) : "<<skor_j<<endl;
					sleep(1);
					cout<<" 8. Hasil total Perceiving (P) : "<<skor_p<<endl;	
					cout<<endl;
					cout<<" 9. Tipe - Tipe Personaliti "<<endl;	
					cout<<"========================="<<endl;
					cout<<endl;
					cout<<"* Jika elemen diatas berada diatas 15 point atau sama dengan 15 point maka, anda dapat dikatakan dominan"<<endl;
					cout<<" namun jika dibawah 15 point maka anda tidak dominan "<<endl;
					cout<<endl;
					cout<<"Pilih elemen diatas untuk informasi lebih lengkap : "<<endl;
					cin>>pilihan_el;
	
					switch (pilihan_el){
			
						case 1 : 
							cout<<" Extrovert merupakan kepribadian yang memiliki Sumber energi yang mana nyaman "<<endl;
							cout<<" dalam lingkungan yang ramai, dan banyak mengutarakan ide kepada orang-orang "<<endl;
							cout<<" sekitarnya. Kepribadiaan ini suka menjadi pusat perhatian pada orang-orang "<<endl;
							cout<<" sekitarnya oleh sebab itu cara mereka mendapatkan energi yaitu dengan bersosialisasi"<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 2 : 
							cout<<" Introvert merupakan kepribadian yang memiliki sumber energi yang nyaman dalam lingkungan "<<endl;
							cout<<" yang tidak terlalu ramai, walaupun suka dengan kesendirian namun mereka bukanlah pribadi "<<endl;
							cout<<" yang Anti Sosial. mereka cenderung tidak terlalu terbuka dengan orang baru. Mereka mengisi  "<<endl;
							cout<<" energi sosial mereka dengan menjahui keramaian"<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 3 : 
							cout<<" Intuisi merupakan kepribadian yang memiliki cara berfikir yang lebih mengandalkan hati nurani "<<endl;
							cout<<" dibandingan dengan sebuah logika. Orang yang memiliki intuitif yang tinggi juga cenderung  "<<endl;
							cout<<" memiliki pemikiran mendalam "<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 4 : 
							cout<<" Sensing merupakan kepribadian yang memiliki cara berfikir yang cendrung lebih logis. "<<endl;
							cout<<" Kepribadian Sensing lebih suka menjadi realistis, spesifik, serta menyukai suatu ide"<<endl;
							cout<<" yang berdasarkan realisme dan masuk akal "<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 5 : 
							cout<<" Feeling merupakan kepribadian yang mengambil keputusan dengan cara berfikir yang didasari oleh emosional"<<endl;
							cout<<" Ketika kepribadian ini yang mengambil keputusan, maka ia akan mempertimbangkan perasaan anggota lainnya"<<endl;
							cout<<" Empati yang ia miliki dapat menjadikannya tempat curhat bagi sebagian orang"<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
						
						case 6 :
							cout<<" Thinking merupakan kepribadian yang mengambil keputusan dengan cara yang rasional."<<endl;
							cout<<" Ia juga akan memutuskan sebuah pilihan dengan cara mempertimbangkan hal-hal "<<endl;
							cout<<" yang berdasarkan fakta "<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 7 : 
							cout<<" Judging merupakan kepribadian yang sangat menghargai waktu. Karena itulah tipe kepribadian "<<endl;
							cout<<" ini senang untuk membuat sebuah jadwal kesehariannya secara rinci, terencana, dan terjadwal."<<endl;
							cout<<" Kepribadian ini cendrung memiliki lingkungan kerja yang lebih dari dari orang kebanyakan."<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
					
						case 8 : 
							cout<<" Perceiving merupakan kepribadian yang tidak terlalu menyukai kehidupan dengan jadwal yang rinci"<<endl;
							cout<<" Mereka merupakan orang yang fleksibel, spontan, dan selalu dikejar oleh deadline. Tipe kepribadian"<<endl;
							cout<<" ini juga tidak mudah panik apabila ada perubahan situasi yang tiba-tiba "<<endl;
							cout<<"-----------------------------------------------------------------------------------------"<<endl;
							cout<<" Kembali ke menu ? (Ya) "<<endl;
							cin>>menu_el_2;
				
								if(menu_el_2=="ya"){
								v_menu_el_indo();
								break;
								}
								
						case 9 : 
							cout<<" Tipe - Tipe personaliti "<<endl;
							cout<<" ==========================="<<endl;
							cout<<endl;
							cout<<"*Sesuaikan dengan elemen anda ! "<<endl;
							cout<<"1. INFJ "<<endl;
							cout<<"2. INFP "<<endl;
							cout<<"3. INTJ "<<endl;
							cout<<"4. INTP "<<endl;
							cout<<"5. ISFJ "<<endl;
							cout<<"6. ISFP "<<endl;
							cout<<"7. ISTJ "<<endl;
							cout<<"8. ISTP "<<endl;
							cout<<"9. ENFJ "<<endl;
							cout<<"10. ENFP "<<endl;
							cout<<"11. ENTJ "<<endl;
							cout<<"12. ENTP "<<endl;
							cout<<"13. ESFJ "<<endl;
							cout<<"14. ESFP "<<endl;
							cout<<"15. ESTJ "<<endl;
							cout<<"16. ESTP "<<endl;
							cout<<"=============================="<<endl;
							cout<<"17. Kembali ke menu  "<<endl;
							cout<<"18. Exit "<<endl;
							cout<<" Pilih : "<<endl;
							cin>>menuel_2;
										
										 
								switch(menuel_2){
											
									case 1: 
										cout<<" INFJ adalah si pencari makna. Ia tertarik untuk memahami pemikiran orang lain, hubungan antar ide, bahkan hubungan sosial."<<endl;
										cout<<" Punya komitmen tinggi dalam bekerja, tipe kepribadian MBTI ini ingin melayani orang-orang di sekitarnya sebaik mungkin."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
									case 2: 
										cout<<" INFP adalah seseorang yang idealis, teguh memegang prinsip, dan setia terutama pada orang-orang penting dalam hidupnya."<<endl;
										cout<<" Tipe kepribadian MBTI ini memiliki rasa ingin tahu yang tinggi, terbuka dengan berbagai kemungkinan. "<<endl;
										cout<<"Ia adalah sosok yang fleksibel dan adaptif, kecuali pada prinsip yang dipegangnya."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 3: 
										cout<<" INTJ adalah orang-orang yang dapat dengan cepat memahami pola atas suatu "<<endl;
										cout<<"peristiwa yang tengah terjadi, kemudian menyusun perspektif dalam jangka panjang."<<endl;
										cout<<" Mereka mandiri, terorganisir, serta memiliki standar kompetensi dan kinerja yang tinggi untuk diri sendiri dan orang lain."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 4: 
										cout<<" Tipe kepribadian MBTI ini lebih tertarik dengan ide ketimbang interaksi sosial. "<<endl;
										cout<<" Mereka adalah orang-orang yang teoretis dan abstrak, dengan tampilan yang cerdas dan tenang. "<<endl;
										cout<<" Jika memiliki minat, mereka mampu fokus mendalami suatu masalah sampai menemukan solusi."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 5: 
										cout<<" ISFJ itu tenang, teliti, bertanggungjawab, berkomitmen, telaten, cermat, baik hati, loyal, dan perhatian. "<<endl;
										cout<<" Sesuatu yang penting akan diingatnya secara spesifik. Kepribadian MBTI ini menyukai ketertiban di tempat tinggal maupun tempat kerja."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 6:
										cout<<"  Kepribadian MBTI ISFP adalah sosok yang tenang, sensitif, dan baik hati. Mereka membutuhkan ruang sendiri, bekerja sesuai "<<endl;
										cout<<" dengan waktunya sendiri, hadir dan menikmati masa kini. Mereka berkomitmen pada orang atau prinsip yang penting bagi dirinya."<<endl;
										cout<<" Karena tak menyukai perselisihan atau konflik, ISFP takkan memaksakan pendapat atau prinsipnya. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 7 :
										cout<<" ISTJ berkarakter tenang, serius, teliti, tekun, handal, realistis, praktis, dan logis. Orientasinya pada "<<endl;
										cout<<"  tanggung jawab dan fakta, mengedepankan logika saat memutuskan sesuatu. Ia menyukai pekerjaan dan kehidupan yang tertib dan teratur. "<<endl;
										cout<<" Tak heran bila sosok ini loyal dan memegang teguh tradisi."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 8 : 
										cout<<" Tipe kepribadian MBTI ini berkarakter toleran dan fleksibel. Ketenangannya dalam menganalisis membuatnya"<<endl;
										cout<<" mampu bertindak cepat menemukan solusi. Berminat pada hubungan sebab-akibat, ISTP dapat mengolah fakta secara efisien dan logis. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 9 : 
										cout<<" ENFJ adalah sosok yang hangat, berempati tinggi, dan pendengar yang baik. "<<endl;
										cout<<" Tipe kepribadian MBTI ini senang bergaul, suka memudahkan urusan dan mendorong orang lain mencapai potensinya."<<endl;
										cout<<"  Ia mampu menerima kritik dan pujian dengan baik."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 10 : 
										cout<<" ENFP juga berkarakter hangat. Ia adalah sosok yang imajinatif dengan antusiasme tinggi. Kemampuannya dalam memahami"<<endl;
										cout<<" pola dan hubungan suatu informasi dengan kejadian tertentu membuat ENFP percaya diri dalam melakukan sesuatu. "<<endl;
										cout<<" Tipe kepribadian MBTI ini suportif, fleksibel, spontan, dan fasih berbicara. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 11 : 
										cout<<" Berkat pengetahuannya yang luas, ENTJ adalah pembaca keadaan yang baik."<<endl;
										cout<<" Ia peka dalam memilah prosedur atau kebijakan yang kurang efisien, bahkan mampu mengembangkan sistem guna "<<endl;
										cout<<" mengatasi persoalan dalam organisasi. Tipe kepribadian MBTI ini tak segan memaksakan idenya. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 12 :
										cout<<" Sisi ekstrovert kepribadian MBTI ini menjadikannya sosok yang blak-blakan. "<<endl;
										cout<<" Mereka tak ragu bila harus memecahkan masalah dengan cara-cara yang menantang, namun sekaligus "<<endl;
										cout<<"  strategis. Tipe ENTP menyukai kegiatan-kegiatan yang menarik dan mudah merasa jenuh dengan rutinitas. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 13 : 
										cout<<" ESFJ adalah karakter yang suka bekerja sama dalam lingkungan yang harmonis."<<endl;
										cout<<" Mereka mampu memahami kebutuhan orang lain berusahan memenuhinya. Kepribadian MBTI ESFJ ingin dihargai"<<endl;
										cout<<" sebagai pribadi dan atas apa yang telah dikerjakannya."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 14 : 
										cout<<" Tipe kepribadian MBTI ini adalah sosok yang ramah, bersahat, fleksibel, adaptif, spontan, "<<endl;
										cout<<" mencintai kehidupannya sendiri dan orang lain. Ia suka belajar dan bekerja bersama orang lain dengan"<<endl;
										cout<<" pendekatan yang logis dan realistis. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 15 : 
										cout<<" ESTJ adalah tipe yang praktis, realistis, berorientasi fakta, dan tegas."<<endl;
										cout<<" Ia tahu bagaimana mengatur pekerjaan secara efisien agar diperoleh hasil terbaik. "<<endl;
										cout<<" Standar logika yang dimiliki ESTJ membantunya membuat keputusan dengan cepat, hingga terkadang memaksakan rencananya. "<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 16 : 
										cout<<" Kepribadian MBTI ESTP adalah sosok yang fleksibel dan toleran, suka menjalin berkomunikasi aktif."<<endl;
										cout<<" Bagi ESTP, teori itu membosankan. Justru mereka belajar dengan baik saat harus melakukan sesuatu secara langsung."<<endl;
										cout<<"__________________________________________________________________________________________________________________________________"<<endl;
										cout<<" Ingin kembali ke menu ? (Ya) "<<endl;
										cin>>menu_el_2;
										
											if(menu_el_2=="ya"){
												v_menu_el_indo();
												break;
											}
												
									case 17 : 
										v_menu_el_indo();
										break;
										
									case 18 : 
										cout<<"_____________________________________________________________________________________________________________________"<<endl;
										cout<<" Terimakasih telah menggunakan Program ini "<<username<< " mohon maaf jika terdapat banyak kesalahan penulisan "<<endl;
										cout<<"			 maupun ketidak akuratan dalam program kami." <<endl;
										cout<<"______________________________________________________________________________________________________________________"<<endl;
										cout<<" Kembali ke Menu utama ? (Ya) "<<endl;
										cin>>menu_utama;
											if(menu_utama=="ya"){
											menu_indo();
											}
										break;
								}


					
					

					}			
								
								
							
								
								
								
								/*
								cout<<"skor anda : "<<endl;
								cout<<endl;
								
								if(skor_ext>15){
									cout<<" anda dominan  "<<endl;
								}
								else if(skor_ext<15){
									cout<<" anda dominan introvert"<<endl;
								}
								
								
								else if(skor_int>15){
									cout<<" anda dominan introvert "<<endl;
								}
								else if(skor_int<15){
									cout<<" anda dominan extrovert"<<endl;
								}
								
								else if(skor_f>15){
									cout<<" anda dominan feeling"<<endl;
								}
								else if(skor_f<15){
									cout<<"anda dominan thinking"<<endl;
								}
								
								else if(skor_t>15){
									cout<<"anda dominan thinking"<<endl;
								}
								else if(skor_t<15){
									cout<<"anda dominan feeling "<<endl;
								}
								
								else if(skor_s>15){
									cout<<"anda dominan sensing "<<endl;
								}
								else if(skor_s<15){
									cout<<"anda dominnan intuisi "<<endl;
								}
								
								else if(skor_n>15){
									cout<<" anda dominan intuisi "<<endl;
								}
								else if(skor_n<15){
									cout<<" anda dominan semsing "<<endl;
								}
								
								else if(skor_j>15){
									cout<<" anda dominan judging "<<endl;
								}
								else if(skor_j<15){
									cout<<" anda dominan pensing"<<endl;
								}
								
								else if (skor_p>15){
									cout<<" anda dominan pensing "<<endl;
								}
								else if(skor_p<15){
									cout<<" anda dominan judging "<<endl;
								}
								*/
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
						}
			}
		}
			
			
			
		
		
								
						
				
		
		
				
			
		
	
		
		else if(pilihan=="t"){
				cout<<"Terimakasih"<<endl;
		}
		
		
	
	
}
	
