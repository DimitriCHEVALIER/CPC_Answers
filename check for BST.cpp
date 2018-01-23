//comlexity : n

#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* left, * right;
};

bool isBST(Node* root, int prec);
Node* trouveNoeud(Node* root, int tamp);
void afficheBST(Node* root);
int prec;



bool isBST(Node* root, int prec)
{
    Node *copie=new Node;
    copie=root;


    if(copie->left!=NULL)
    {
        return trouveNoeud(copie->left, tamp);
    }
    if(prec>copie->data)
    {
        return false;
    }
    if(copie->right!=NULL)
    {
        return trouveNoeud(copie->right, tamp);
    }

}





int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //pour appeler isBST:
    Node *root=new Node;
    bool resultat=true;
    resultat=isBST(root,0);

    /*int diffTest;
    int tamp;
    cout<<"nbr difftest"<<endl;
    cin>>diffTest;
    for(int o=0;o<diffTest;o++)
    {
        int nbNoeuds;
        cout<<"nombre noeuds"<<endl;
        cin>>nbNoeuds;
        Node *arbre=new Node;
        cout<<"base"<<endl;
        cin>>arbre->data;
        tamp=arbre->data;
        arbre->left=NULL;
        arbre->right=NULL;


        for(int i=0;i<nbNoeuds;i++)
        {
            Node *cop=new Node;
            Node *nouveau= new Node;
            nouveau->right=NULL;
            nouveau->left=NULL;

            char tampChar;
            if(i!=0)
            {
                cout<<"Noeud originel"<<endl;
                cin>>tamp;
            }
            cout<<"nouveau noeud"<<endl;
            cin>>nouveau->data;
            cout<<"Coté"<<endl;
            cin>>tampChar;
            //recherche du noeud originiel dans tout l arbre
            cop=trouveNoeud(arbre, tamp);


            if(tampChar=='L')
                cop->left=nouveau;
            if(tampChar=='R')
                cop->right=nouveau;

            cout<<"arbre"<<endl<<endl<<endl;
            afficheBST(arbre);
        }

    }*/


    return 0;
}

Node* trouveNoeud(Node* root, int tamp)
{
    //cout<<"passe"<<endl;
    Node *copie=new Node;
    copie=root;
    if(copie->data==tamp)
    {
        return copie;
    }
    else
    {
        if(copie->left!=NULL)
        {
            //cout<<"passeLeft :"<<copie->data<<endl;
            return trouveNoeud(copie->left, tamp);
        }
            //cout<<"sortLeft data :"<<copie->data<<endl;
        if(copie->right!=NULL)
        {
            //cout<<"entreDroit"<<endl;
            return trouveNoeud(copie->right, tamp);
        }
    }
}

void afficheBST(Node* root)
{

    Node *copie=new Node;
    copie=root;
    if(copie->left!=NULL)
        afficheBST(copie->left);
    cout<<copie->data;
    if(copie->right!=NULL)
        afficheBST(copie->right);
}

















