/******************************************************************************/
void InitPre()
{
   EE_INIT();
}
/******************************************************************************/
bool Init()
{
   return true;
}
/******************************************************************************/
void Shut()
{
}
/******************************************************************************/
bool Update()
{
   if(Kb.bp(KB_ESC))return false;
   return true;
}
/******************************************************************************/
void Draw()
{
   D.clear(TURQ);
   REP(1000)D.dot(BLUE, Random(Circle(0.5              ))); // draw 1000 random points inside circle
   REP(1000)D.dot(RED , Random(Rect  (0.5, -0.5, 1, 0.5))); // draw 1000 random points inside rectangle
   D.text(0, 0.7, S+Random(4)+"  "+Random(10, 15)+"  "+RandomF()+"  "+RandomF(10, 15));
}
/******************************************************************************/
