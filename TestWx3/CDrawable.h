#ifndef CDRAWABLE_H
#define CDRAWABLE_H

#include <wx/dcbuffer.h>
#include "shot_final_equation.h"

class CDrawable
{
    public:
        double angle1, angle2;
        double x1, y1;
        CDrawable();
        virtual ~CDrawable();
        void Draw(wxBufferedPaintDC& DC, int CWidth, int CHeight);
        void DrawShot(wxBufferedPaintDC& DC, int CWidth, int CHeight, missile_data* m);
    protected:
    private:
        void drawTank(wxBufferedPaintDC& DC, int X, int Y, wxColor C, double angle);
};

#endif // CDRAWABLE_H
