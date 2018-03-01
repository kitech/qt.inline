//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QBrushData is pure virtual: false
// QBrushData has virtual projected: false
//  header block end

//  main block begin

class MyQBrushData : public QBrushData {
public:
  virtual ~MyQBrushData() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN10QBrushDataD2Ev(void *this_) {
  delete (QBrushData*)(this_);
}
//  main block end
