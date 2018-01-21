//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:988
// void QScreenOrientationChangeEvent(class QScreen *, Qt::ScreenOrientation)
extern "C"
void* C_ZN29QScreenOrientationChangeEventC1EP7QScreenN2Qt17ScreenOrientationE(QScreen * screen, Qt::ScreenOrientation orientation) {
  return new QScreenOrientationChangeEvent(screen, orientation);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:989
// void ~QScreenOrientationChangeEvent()
extern "C"
void C_ZN29QScreenOrientationChangeEventD1Ev(void *this_) {
  delete (QScreenOrientationChangeEvent*)(this_);
}
// /usr/include/qt/QtGui/qevent.h:991
// QScreen * screen()
extern "C"
void C_ZNK29QScreenOrientationChangeEvent6screenEv(void *this_) {
  /*return*/ ((QScreenOrientationChangeEvent*)this_)->screen();
}
// /usr/include/qt/QtGui/qevent.h:992
// Qt::ScreenOrientation orientation()
extern "C"
void C_ZNK29QScreenOrientationChangeEvent11orientationEv(void *this_) {
  /*return*/ ((QScreenOrientationChangeEvent*)this_)->orientation();
}
//  main block end
