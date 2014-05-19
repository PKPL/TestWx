#include "CDrawable.h"

CDrawable::CDrawable()
{
    angle1 = M_PI/4;
    angle2 = 2*M_PI/3;
}

CDrawable::~CDrawable()
{
    //dtor
}


void CDrawable::Draw(wxBufferedPaintDC & DC, int CWidth, int CHeight){
	wxBrush Brush(*wxWHITE);
	DC.SetBrush(Brush);
	DC.SetBackground(Brush);
	DC.Clear();
	drawTank(DC, 50, 300, *wxRED, angle1);
	drawTank(DC, 450, 300, *wxBLUE, angle2);
}

void CDrawable::DrawShot(wxBufferedPaintDC & DC, int CWidth, int CHeight, missile_data* m){
    wxPoint p[100];
    for(int i=0; i<100; i++){
       p[i].x = m->x_vector_coordinate[i]*10;
       p[i].y = m->y_vector_coordinate[i]*10;
    }
    DC.DrawLines(100, p);
}

void CDrawable::drawTank(wxBufferedPaintDC& DC, int X, int Y, wxColor C, double angle){
       wxBrush B;
       wxPen P;
       B.SetColour(*wxWHITE);
       DC.SetBrush(B);
       P.SetColour(C);
       P.SetWidth(3);
       DC.SetPen(P);
       DC.DrawCircle(wxPoint(X,Y),wxCoord(10));
       DC.DrawCircle(wxPoint(X+10,Y),wxCoord(10));
       DC.DrawCircle(wxPoint(X+20,Y),wxCoord(10));
       DC.DrawRectangle(wxPoint(X-10,Y-26),wxSize(40,15));
       x1 = X+10+20*cos(angle);
       y1 = Y-26-20*sin(angle);
       DC.DrawLine(wxPoint(X+10,Y-26),wxPoint(x1,y1));
}
