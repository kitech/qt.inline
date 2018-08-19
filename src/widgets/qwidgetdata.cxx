//  header block begin
// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetData is pure virtual: false
// QWidgetData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWidgetData : public QWidgetData {
public:
  virtual ~MyQWidgetData() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN11QWidgetDataD2Ev(void *this_) {
  delete (QWidgetData*)(this_);
}
//  main block end
