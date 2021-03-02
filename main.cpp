#include "iostream"

using namespace std;

struct Node{
    string info;
    Node *next;
};
class Linked_list{
    Node *head,*last= nullptr;
public:
    Linked_list(){
        Node *temp=new Node;
        head=temp;
        cout<<"enter the first node info"<<endl;
        getline(cin,temp->info);
        temp->next=last;
        last=temp;
    }

    void append(){
        string res;
        while(res!="n"){
            cout<<"do you want to enter another element then press y otherwise press n"<<endl;
            getline(cin,res);
            if(res=="n"){last->next= nullptr;break;};
            Node *temp=new Node;
            cout<<"enter the data for your Node"<<endl;
            getline(cin,temp->info);
            last->next=temp;
            last=temp;
        }
        last->next= nullptr;
    }
    void prepend(){
        string res;
        while(res!="n"){
            cout<<"do you want to prepend another element in the list then press y otherwise press n"<<endl;
            getline(cin,res);
            if(res=="n")break;
            Node *temp=new Node;
            cout<<"enter the data for your Node"<<endl;
            getline(cin,temp->info);
            temp->next=head;
            head=temp;
        }
    }

    auto search(){
        string str;
        cout<<"enter the data to find"<<endl;
        getline(cin,str);
        Node *trv=head;
        while (trv!= nullptr){
            trv=trv->next;
            if(trv== nullptr)cout<<"the data not found in the list"<<endl;
            if(trv->info==str){cout<<trv->info<<" @ location"<<trv<<endl;break;}
        }
        return trv;
    }

    void traverse() {
        Node *trv;
        trv = head;
        while (trv != nullptr) {
            cout << trv->info << " @ "<<trv<<" ";
            trv = trv->next;
        }
    }

    void delete_ele(){
        string todel;
        Node *delele;
        cout<<"which element to delete from the list"<<endl;
        traverse();
        getline(cin,todel);
        if(delele->info==head->info){
            free(head);
            free(last);
        }
        while(todel!=delele->info){

        }
    }

};

int main(){
    Linked_list LL;
    LL.append();
    LL.prepend();
    LL.traverse();
    //LL.delete_ele(); not completed
    LL.search();

    return 0;
}