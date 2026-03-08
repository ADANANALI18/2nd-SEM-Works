#include<stdio.h>
#include<string.h>

int main(){
	char str[100], word[50], result[100];
	int i,j=0, k, found;
	
	printf("Enter the main string: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")]= '\0';
	printf("Enter word to remove: ");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")]= '\0';
	
	for(i=0; str[i]; i++){
		found = 1;
	for(k=0; k< strlen(word);k++){
		if (str[i+k] != word[k]){
			found= 0;
			break;
		}
	}
	
	if(found && (str[i+strlen(word)] == ' ' || str[i+strlen(word)] == '\0')) {
		i += strlen(word) - 1;
		continue;
	}	
	
	result[j++] = str[i];
	}
	result[j]= '\0';
	
	printf("string after removing word: %s", result);
	return 0;
}









