//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:702
// void QWhatsThisClickedEvent(const class QString &)
extern "C"
void* C_ZN22QWhatsThisClickedEventC1ERK7QString(const QString & href) {
  return new QWhatsThisClickedEvent(href);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:703
// void ~QWhatsThisClickedEvent()
extern "C"
void C_ZN22QWhatsThisClickedEventD1Ev(void *this_) {
  delete (QWhatsThisClickedEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:705
// QString href()
extern "C"
void C_ZNK22QWhatsThisClickedEvent4hrefEv(void *this_) {
  /*return*/ ((QWhatsThisClickedEvent*)this_)->href();
}
//  main block end
