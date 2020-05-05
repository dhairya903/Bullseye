#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[20][30];
struct Questions
{
    char quest[20];
    char avg[2];
    char good[2];
    char out[2];
    char solution[25][25];
    int sol;
}q[25];

void insturctions()
{
    printf("\t\t\t\t\t\t***WELCOME TO BULL'S EYE GAME***\n\n");
    printf("\t\t->How many word of four or more letters can you make from the letters shown in the puzzle.\n");
    printf("\t\t->In making a word, a letter can be used as many times as it appears in the puzzle.\n");
    printf("\t\t->Each word must contain the letter central letter mentioned in capital.\n");
    printf("\t\t->There should be at least one seven letter word.\n");
    printf("\t\t->Plurals, foreign words and proper names are not allowed.\n");
    printf("\t\t->British English Dictionary is used as reference.\n");
}

int ini()
{
    strcpy(q[0].quest,"uitHwto");
    strcpy(q[0].avg,"5");
    strcpy(q[0].good,"6");
    strcpy(q[0].out,"7");
    strcpy(q[0].solution[0],"without");
    strcpy(q[0].solution[1],"with");
    strcpy(q[0].solution[2],"whit");
    strcpy(q[0].solution[3],"hit");
    strcpy(q[0].solution[4],"out");
    strcpy(q[0].solution[5],"how");
    strcpy(q[0].solution[6],"tow");
    q[0].sol=7;


    strcpy(q[1].quest,"uttSoal");
    strcpy(q[1].avg,"6");
    strcpy(q[1].good,"8");
    strcpy(q[1].out,"10");
    strcpy(q[1].solution[0],"outlast");
    strcpy(q[1].solution[1],"also");
    strcpy(q[1].solution[2],"last");
    strcpy(q[1].solution[3],"lost");
    strcpy(q[1].solution[4],"lust");
    strcpy(q[1].solution[5],"oust");
    strcpy(q[1].solution[6],"slat");
    strcpy(q[1].solution[7],"slot");
    strcpy(q[1].solution[8],"soul");
    strcpy(q[1].solution[9],"stout");
    strcpy(q[1].solution[10],"toast");
    q[1].sol=11;

    strcpy(q[2].quest,"aonByut");
    strcpy(q[2].avg,"7");
    strcpy(q[2].good,"9");
    strcpy(q[2].out,"11");
    strcpy(q[2].solution[0],"buoyant");
    strcpy(q[2].solution[1],"about");
    strcpy(q[2].solution[2],"baton");
    strcpy(q[2].solution[3],"abut");
    strcpy(q[2].solution[4],"bony");
    strcpy(q[2].solution[5],"bony");
    strcpy(q[2].solution[6],"boat");
    strcpy(q[2].solution[7],"botany");
    strcpy(q[2].solution[8],"bounty");
    strcpy(q[2].solution[9],"bout");
    strcpy(q[2].solution[10],"bunt");
    strcpy(q[2].solution[11],"buoy");
    strcpy(q[2].solution[12],"tuba");
    q[2].sol=13;

    strcpy(q[3].quest,"ennGpio");
    strcpy(q[3].avg,"4");
    strcpy(q[3].good,"5");
    strcpy(q[3].out,"6");
    strcpy(q[3].solution[0],"opening");
    strcpy(q[3].solution[1],"pigeon");
    strcpy(q[3].solution[2],"gone");
    strcpy(q[3].solution[3],"ping");
    strcpy(q[3].solution[4],"pin");
    strcpy(q[3].solution[6],"pen");
    q[3].sol=6;

    strcpy(q[4].quest,"agnYlao");
    strcpy(q[4].avg,"2");
    strcpy(q[4].good,"3");
    strcpy(q[4].out,"4");
    strcpy(q[4].solution[0],"analogy");
    strcpy(q[4].solution[1],"agony");
    strcpy(q[4].solution[2],"only");
    strcpy(q[4].solution[3],"yoga");
    q[4].sol=4;

    strcpy(q[5].quest,"iuwAtsl");
    strcpy(q[5].avg,"8");
    strcpy(q[5].good,"9");
    strcpy(q[5].out,"11");
    strcpy(q[5].solution[0],"lawsuit");
    strcpy(q[5].solution[1],"last");
    strcpy(q[5].solution[2],"sail");
    strcpy(q[5].solution[3],"salt");
    strcpy(q[5].solution[4],"slat");
    strcpy(q[5].solution[5],"slaw");
    strcpy(q[5].solution[6],"swat");
    strcpy(q[5].solution[7],"tall");
    strcpy(q[5].solution[8],"wail");
    strcpy(q[5].solution[9],"waist");
    strcpy(q[5].solution[10],"wait");
    q[5].sol=11;

    strcpy(q[6].quest,"cdcUsae");
    strcpy(q[6].avg,"4");
    strcpy(q[6].good,"5");
    strcpy(q[6].out,"7");
    strcpy(q[6].solution[0],"accused");
    strcpy(q[6].solution[1],"accuse");
    strcpy(q[6].solution[2],"cause");
    strcpy(q[6].solution[3],"caused");
    strcpy(q[6].solution[4],"cued");
    strcpy(q[6].solution[5],"sauce");
    strcpy(q[6].solution[6],"used");
    q[6].sol=7;

    strcpy(q[7].quest,"nelCegt");
    strcpy(q[7].avg,"5");
    strcpy(q[7].good,"6");
    strcpy(q[7].out,"8");
    strcpy(q[7].solution[0],"neglect");
    strcpy(q[7].solution[1],"cent");
    strcpy(q[7].solution[2],"elect");
    strcpy(q[7].solution[3],"ten");
    strcpy(q[7].solution[4],"get");
    strcpy(q[7].solution[5],"let");
    strcpy(q[7].solution[6],"net");
    strcpy(q[7].solution[7],"gent");
    q[7].sol=8;

    strcpy(q[8].quest,"telPiny");
    strcpy(q[8].avg,"7");
    strcpy(q[8].good,"9");
    strcpy(q[8].out,"11");
    strcpy(q[8].solution[0],"ineptly");
    strcpy(q[8].solution[1],"inept");
    strcpy(q[8].solution[2],"pelt");
    strcpy(q[8].solution[3],"plenty");
    strcpy(q[8].solution[4],"pile");
    strcpy(q[8].solution[5],"pint");
    strcpy(q[8].solution[6],"pine");
    strcpy(q[8].solution[7],"pity");
    strcpy(q[8].solution[8],"type");
    strcpy(q[8].solution[9],"yelp");
    strcpy(q[8].solution[10],"tiny");
    strcpy(q[8].solution[11],"intel");
    strcpy(q[8].solution[12],"pet");
    q[8].sol=13;

    strcpy(q[9].quest,"falUdhn");
    strcpy(q[9].avg,"5");
    strcpy(q[9].good,"6");
    strcpy(q[9].out,"8");
    strcpy(q[9].solution[0],"handful");
    strcpy(q[9].solution[1],"dual");
    strcpy(q[9].solution[2],"fund");
    strcpy(q[9].solution[3],"faun");
    strcpy(q[9].solution[4],"haul");
    strcpy(q[9].solution[5],"hula");
    strcpy(q[9].solution[6],"laud");
    strcpy(q[9].solution[7],"ulna");
    strcpy(q[9].solution[8],"hand");
    q[9].sol=9;

    strcpy(q[10].quest,"dacKdho");
    strcpy(q[10].avg,"2");
    strcpy(q[10].good,"3");
    strcpy(q[10].out,"4");
    strcpy(q[10].solution[0],"haddock");
    strcpy(q[10].solution[1],"dock");
    strcpy(q[10].solution[2],"hack");
    strcpy(q[10].solution[3],"hock");
    strcpy(q[10].solution[4],"dad");
    q[10].sol=5;

    strcpy(q[11].quest,"veaItde");
    strcpy(q[11].avg,"7");
    strcpy(q[11].good,"9");
    strcpy(q[11].out,"12");
    strcpy(q[11].solution[0],"deviate");
    strcpy(q[11].solution[1],"aide");
    strcpy(q[11].solution[2],"aid");
    strcpy(q[11].solution[3],"avid");
    strcpy(q[11].solution[4],"diet");
    strcpy(q[11].solution[5],"diva");
    strcpy(q[11].solution[6],"dive");
    strcpy(q[11].solution[7],"edit");
    strcpy(q[11].solution[8],"idea");
    strcpy(q[11].solution[9],"tide");
    strcpy(q[11].solution[10],"tied");
    strcpy(q[11].solution[11],"vied");
    q[11].sol=12;

    strcpy(q[12].quest,"nofYurd");
    strcpy(q[12].avg,"3");
    strcpy(q[12].good,"4");
    strcpy(q[12].out,"7");
    strcpy(q[12].solution[0],"foundry");
    strcpy(q[12].solution[1],"fury");
    strcpy(q[12].solution[2],"your");
    strcpy(q[12].solution[3],"nod");
    strcpy(q[12].solution[2],"your");
    strcpy(q[12].solution[3],"dry");
    strcpy(q[12].solution[4],"found");
    strcpy(q[12].solution[5],"undo");
    strcpy(q[12].solution[6],"fun");
    q[12].sol=7;

    strcpy(q[13].quest,"nocTuoc");
    strcpy(q[13].avg,"4");
    strcpy(q[13].good,"5");
    strcpy(q[13].out,"6");
    strcpy(q[13].solution[0],"coconut");
    strcpy(q[13].solution[1],"coot");
    strcpy(q[13].solution[2],"count");
    strcpy(q[13].solution[3],"onto");
    strcpy(q[13].solution[4],"unto");
    strcpy(q[13].solution[5],"nut");
    strcpy(q[13].solution[6],"ton");
    q[13].sol=7;

    strcpy(q[14].quest,"mncGnii");
    strcpy(q[14].avg,"1");
    strcpy(q[14].good,"2");
    strcpy(q[14].out,"3");
    strcpy(q[14].solution[0],"icing");
    strcpy(q[14].solution[1],"mincing");
    strcpy(q[14].solution[2],"mining");
    q[14].sol=3;

    strcpy(q[15].quest,"cinNlei");
    strcpy(q[15].avg,"4");
    strcpy(q[15].good,"5");
    strcpy(q[15].out,"6");
    strcpy(q[15].solution[0],"incline");
    strcpy(q[15].solution[1],"lien");
    strcpy(q[15].solution[2],"line");
    strcpy(q[15].solution[3],"linen");
    strcpy(q[15].solution[4],"nice");
    strcpy(q[15].solution[5],"nine");
    q[15].sol=6;

    strcpy(q[16].quest,"nikPege");
    strcpy(q[16].avg,"6");
    strcpy(q[16].good,"7");
    strcpy(q[16].out,"9");
    strcpy(q[16].solution[0],"keep");
    strcpy(q[16].solution[1],"keeping");
    strcpy(q[16].solution[2],"peeing");
    strcpy(q[16].solution[3],"peek");
    strcpy(q[16].solution[4],"peeking");
    strcpy(q[16].solution[5],"pike");
    strcpy(q[16].solution[6],"pine");
    strcpy(q[16].solution[7],"ping");
    strcpy(q[16].solution[8],"pink");
    q[16].sol=9;

    strcpy(q[17].quest,"dveHsri");
    strcpy(q[17].avg,"10");
    strcpy(q[17].good,"11");
    strcpy(q[17].out,"13");
    strcpy(q[17].solution[0],"dervish");
    strcpy(q[17].solution[1],"dish");
    strcpy(q[17].solution[2],"heir");
    strcpy(q[17].solution[3],"herd");
    strcpy(q[17].solution[4],"hide");
    strcpy(q[17].solution[5],"hire");
    strcpy(q[17].solution[6],"hired");
    strcpy(q[17].solution[7],"hive");
    strcpy(q[17].solution[8],"shed");
    strcpy(q[17].solution[9],"shied");
    strcpy(q[17].solution[10],"shire");
    strcpy(q[17].solution[11],"shiver");
    strcpy(q[17].solution[12],"shred");
    q[17].sol=13;

    strcpy(q[18].quest,"ieeVtni");
    strcpy(q[18].avg,"4");
    strcpy(q[18].good,"5");
    strcpy(q[18].out,"7");
    strcpy(q[18].solution[0],"vine");
    strcpy(q[18].solution[1],"vent");
    strcpy(q[18].solution[2],"vein");
    strcpy(q[18].solution[3],"invitee");
    strcpy(q[18].solution[4],"invite");
    strcpy(q[18].solution[5],"event");
    strcpy(q[18].solution[6],"even");
    q[18].sol=7;

    strcpy(q[19].quest,"rsnToco");
    strcpy(q[19].avg,"10");
    strcpy(q[19].good,"11");
    strcpy(q[19].out,"12");
    strcpy(q[19].solution[0],"consort");
    strcpy(q[19].solution[1],"coot");
    strcpy(q[19].solution[2],"cost");
    strcpy(q[19].solution[3],"onto");
    strcpy(q[19].solution[4],"roost");
    strcpy(q[19].solution[5],"root");
    strcpy(q[19].solution[6],"scoot");
    strcpy(q[19].solution[7],"snort");
    strcpy(q[19].solution[8],"soot");
    strcpy(q[19].solution[9],"sort");
    strcpy(q[19].solution[10],"torn");
    strcpy(q[19].solution[11],"torso");
    q[19].sol=12;

    strcpy(q[20].quest,"joaClkw");
    strcpy(q[20].avg,"5");
    strcpy(q[20].good,"7");
    strcpy(q[20].out,"9");
    strcpy(q[20].solution[0],"claw");
    strcpy(q[20].solution[1],"cloak");
    strcpy(q[20].solution[2],"coal");
    strcpy(q[20].solution[3],"cowl");
    strcpy(q[20].solution[4],"jack");
    strcpy(q[20].solution[5],"jock");
    strcpy(q[20].solution[6],"lack");
    strcpy(q[20].solution[7],"lock");
    strcpy(q[20].solution[8],"lockjaw");
    q[20].sol=9;

    strcpy(q[21].quest,"itsFlet");
    strcpy(q[21].avg,"10");
    strcpy(q[21].good,"11");
    strcpy(q[21].out,"13");
    strcpy(q[21].solution[0],"felt");
    strcpy(q[21].solution[1],"file");
    strcpy(q[21].solution[2],"filet");
    strcpy(q[21].solution[3],"fist");
    strcpy(q[21].solution[4],"flit");
    strcpy(q[21].solution[5],"itself");
    strcpy(q[21].solution[6],"left");
    strcpy(q[21].solution[7],"leftist");
    strcpy(q[21].solution[8],"life");
    strcpy(q[21].solution[9],"lift");
    strcpy(q[21].solution[10],"self");
    strcpy(q[21].solution[11],"sift");
    strcpy(q[21].solution[12],"stiff");
    q[21].sol=13;

    strcpy(q[22].quest,"haoMnyr");
    strcpy(q[22].avg,"9");
    strcpy(q[22].good,"10");
    strcpy(q[22].out,"12");
    strcpy(q[22].solution[0],"army");
    strcpy(q[22].solution[1],"harm");
    strcpy(q[22].solution[2],"harmony");
    strcpy(q[22].solution[3],"hymn");
    strcpy(q[22].solution[4],"manor");
    strcpy(q[22].solution[5],"many");
    strcpy(q[22].solution[6],"mayor");
    strcpy(q[22].solution[7],"moan");
    strcpy(q[22].solution[8],"moray");
    strcpy(q[22].solution[9],"morn");
    strcpy(q[22].solution[10],"norm");
    strcpy(q[22].solution[11],"roam");
    q[21].sol=12;

    strcpy(q[23].quest,"lreIvee");
    strcpy(q[23].avg,"6");
    strcpy(q[23].good,"9");
    strcpy(q[23].out,"11");
    strcpy(q[23].solution[0],"eerie");
    strcpy(q[23].solution[1],"evil");
    strcpy(q[23].solution[2],"lire");
    strcpy(q[23].solution[3],"liver");
    strcpy(q[23].solution[4],"live");
    strcpy(q[23].solution[5],"relieve");
    strcpy(q[23].solution[6],"relive");
    strcpy(q[23].solution[7],"revile");
    strcpy(q[23].solution[8],"rile");
    strcpy(q[23].solution[9],"veil");
    strcpy(q[23].solution[10],"vile");
    q[23].sol=11;

    strcpy(q[24].quest,"ulfMroo");
    strcpy(q[24].avg,"5");
    strcpy(q[24].good,"6");
    strcpy(q[24].out,"7");
    strcpy(q[24].solution[0],"form");
    strcpy(q[24].solution[1],"forum");
    strcpy(q[24].solution[2],"from");
    strcpy(q[24].solution[3],"room");
    strcpy(q[24].solution[4],"roomful");
    strcpy(q[24].solution[5],"moor");
    strcpy(q[24].solution[6],"loom");
    q[24].sol=7;

    return 0;
}


int input()
{
  int ans=1;
  int checks=0;
  int i=0;
  int j=0;
  for(i=0;i<20;i++)
  {
    printf("Enter your answer/s : \n");
    checks=0;
    scanf("%s",&arr[i]);
     printf("do you wish to continue answering ? \n");      printf("enter 1 to stop \n");
      printf("enter 0 to continue \n");
      scanf("%d",&checks);
      j=i;
      if(checks==0)
      {
        ans++;
      }
      else if(checks==1)
      {
        break;
      }
      else
      {
        printf("wrong input hence program terminated");
        break;
      }
  }
  return (ans);
}


int printques(char h[])
{
  printf("\n");
  int i=0;
  for(i=0;i<strlen(h)*4;i++)
  {
    printf("_");
  }
  printf("\n");
  printf("\n");
  for(i=0;i<strlen(h);i++)
  {
    printf("| %c ",h[i]);
  }
  printf("|\n");
  for(i=0;i<strlen(h)*4;i++)
  {
    printf("_");
  }
  printf("\n");
  printf("\n");
}


int markingscheme(int level)
{
  printf("The marking scheme is follows : \n");
  printf("Average : %s \n",&q[level].avg);
  printf("Good : %s \n",&q[level].good);
  printf("Outstanding : %s \n",&q[level].out);
  printf("\n");
  return 0;
}


int main()
{
  insturctions();
  int level=0;
  ini();
  printf("enter level (1-24) : \n");
  scanf("%d",&level);
  if(level==1||level==2||level==3||level==4||level==5||level==6||level==7||level==8||level==9||level==10||level==11||level==12||level==13||level==14||level==15||level==16||level==17||level==18||level==19||level==20||level==21||level==22||level==23||level==24)
  {
    level--;
    printques(q[level].quest);
    markingscheme(level);
    int correct=0;
    int i=0;
    int j=0;
    int ans=0;
    ans=input();
    for(i=0;i<q[level].sol;i++)
    {
      for(j=0;j<ans;j++)
      {
        if(strcmp(q[level].solution[i],arr[j])==0)
        {
          correct++;
          break;
        }
      }
    }
    printf(" Score is : %d \n",correct);
  }
  else
  {
    printf("Wrong input hence program terminated");
  }
  return 0;
}
