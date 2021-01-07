void shift(int k) {
	// TODO: Add your code here
	int size = mSize;
	k = k % size;
	if(k == 0){
		return;
	}
	node *temp = mHeader;
	if(k>0){
		for(size_t i = 0;i<k;i++){
			temp = temp->next;
		}
	}
	else{
		for(size_t i = 0;i<-k+1;i++){
			temp = temp->prev;
		}
	}
	node *next = temp->next, *begin = mHeader->next , *end = mHeader->prev;
	end->next = begin;
	begin->prev = end;
	temp->next = mHeader;
	mHeader->prev = temp;
	mHeader->next = next;
	next->prev = mHeader;
}
