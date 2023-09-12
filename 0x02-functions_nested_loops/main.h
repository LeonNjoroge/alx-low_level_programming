int _putchar(word)
{
  int length = strlen(word);
  int i = 0;
  while(word[i] != length)
  {
    putchar(word[i]);
    
  }
  putchar("\n");
      

  
}
