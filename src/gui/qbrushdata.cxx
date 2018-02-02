//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

// QBrushData is pure virtual: false
// QBrushData has virtual projected: false
//  header block end

//  main block begin

class MyQBrushData : public QBrushData {
public:
  virtual ~MyQBrushData() {}
};


extern "C"
void C_ZN10QBrushDataD2Ev(void *this_) {
  delete (QBrushData*)(this_);
}
//  main block end
