
class Screen{
  
private:
  
  char* line1;
  char* line2;
  char* line3;
  char* title;
  
  void draw();

public:

  void update();
  void setLine1(char* line1);
  void setLine2(char* line2);
  void setLine3(char* line3);
  void setTitle(char* title);
}
