//  header block begin
// /usr/include/qt/QtWidgets/qwidget.h
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetData is pure virtual: false
// QWidgetData has virtual projected: false
//  header block end

//  main block begin

class MyQWidgetData : public QWidgetData {
public:
  virtual ~MyQWidgetData() {}
};


extern "C"
void C_ZN11QWidgetDataD2Ev(void *this_) {
  delete (QWidgetData*)(this_);
}
//  main block end
