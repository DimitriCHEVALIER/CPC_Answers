//no finished
#include <iostream>

using namespace std;

typedef struct Animal
{
    int nbr;
    struct Animal *mange;
    struct Animal *estMange;
    struct Animal *pareil;
}Animal;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int nbrAnimaux, nbrAffi;
    //cout<<"nombre d animaux"<<endl;
    cin>>nbrAnimaux;
    //cout<<"nombre d affirmations"<<endl;
    cin>>nbrAffi;

    Animal tab[nbrAnimaux];
    for (int i=0;i<nbrAnimaux;i++)
    {
        tab[i].estMange=NULL;
        tab[i].mange=NULL;
        tab[i].pareil=NULL;
        tab[i].pareil=0;
    }
    int nbrFaux=0;
    for(int i=0;i<nbrAffi;i++)
    {
        //on entre l affirmation
        int type, an1,an2;
        //cout<<"type"<<endl;
        cin>>type;
        //cout<<"animal 1 puis animal 2"<<endl;
        cin>>an1;
        cin>>an2;

        //verification de l affirmation
        bool vrai=true;
        //meme animal se mange
        if(type==2 && an1==an2)
        {
            vrai=false;
            nbrFaux++;
        }
        //animaux superieurs au nbr animaux
        if(an1>nbrAnimaux || nbrAnimaux<an2)
        {
            vrai=false;
            nbrFaux++;
        }
        //conflit avec affirmations précédentes
        //si meme type, on verifie que pour cet animal, et tout ceux de la meme espece, ne se mangent pas entre eux.

            for(int j=0;j<nbrAnimaux;j++)
            {
                if(tab[j].nbr==an1)
                {
                    bool fin=false;
                    Animal *tamp=tab[j]->estMange;
                    Animal *tamp2=tab[j]->mange;
                    Animal *tampPasToujours=tab[j]->pareil;
                    while(!fin)
                    {
                        if(tamp!=NULL)
                        {
                            //si il est mange par son pote
                            if(an2==tamp->nbr)
                            {
                                fin=true;
                                j=nbrAnimaux;
                                nbrFaux++;
                                vrai=false;
                                if(tamp->estMange!=NULL)
                                {
                                    tamp=tamp->estMange;
                                }
                            }
                            //si il mange son pote
                            if(an2==tamp2->nbr)
                            {
                                fin=true;
                                j=nbrAnimaux;
                                nbrFaux++;
                                vrai=false;
                                if(tamp2->mange!=NULL)
                                {
                                    tamp2=tamp2->mange;
                                }
                            }
                            if(type==2)
                            {
                                if(an2==tampPasToujours->nbr)
                                {
                                    fin=true;
                                    j=nbrAnimaux;
                                    nbrFaux++;
                                    vrai=false;
                                    if(tampPasToujours->mange!=NULL)
                                    {
                                        tampPasToujours=tampPasToujours->mange;
                                    }
                                }
                            }



                        }

                        if (tamp==NULL && tamp2==NULL)
                            fin=true;
                    }
                }
            }


        //on enregistre l affirmation
        //il faudrait actualiser le premier, puis copier ses infos

    }




    return 0;
}







