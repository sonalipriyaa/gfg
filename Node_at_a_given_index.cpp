int GetNth(struct node* head, int index){
  // Code here
 int count=0;
  node* temp=head;
 while(temp!=NULL){
     count++;//1based indexing
     if(count==index){
         return (temp->data);
     }
     temp=temp->next;
 }
}
