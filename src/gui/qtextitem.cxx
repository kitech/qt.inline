//  header block begin
// /usr/include/qt/QtGui/qpaintengine.h
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextItem is pure virtual: false
// QTextItem has virtual projected: false
//  header block end

//  main block begin

class MyQTextItem : public QTextItem {
public:
  virtual ~MyQTextItem() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:75
// [8] qreal descent()
extern "C"
qreal C_ZNK9QTextItem7descentEv(void *this_) {
  return (qreal)((QTextItem*)this_)->descent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:76
// [8] qreal ascent()
extern "C"
qreal C_ZNK9QTextItem6ascentEv(void *this_) {
  return (qreal)((QTextItem*)this_)->ascent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:77
// [8] qreal width()
extern "C"
qreal C_ZNK9QTextItem5widthEv(void *this_) {
  return (qreal)((QTextItem*)this_)->width();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:79
// [4] QTextItem::RenderFlags renderFlags()
extern "C"
void C_ZNK9QTextItem11renderFlagsEv(void *this_) {
  auto rv = ((QTextItem*)this_)->renderFlags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:80
// [8] QString text()
extern "C"
void* C_ZNK9QTextItem4textEv(void *this_) {
  auto rv = ((QTextItem*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:81
// [16] QFont font()
extern "C"
void* C_ZNK9QTextItem4fontEv(void *this_) {
  auto rv = ((QTextItem*)this_)->font();
return new QFont(rv);
}

extern "C"
void C_ZN9QTextItemD2Ev(void *this_) {
  delete (QTextItem*)(this_);
}
//  main block end
