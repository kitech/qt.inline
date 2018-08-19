//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QScreenOrientationChangeEvent is pure virtual: false
// QScreenOrientationChangeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQScreenOrientationChangeEvent : public QScreenOrientationChangeEvent {
public:
  virtual ~MyQScreenOrientationChangeEvent() {}
// void QScreenOrientationChangeEvent(QScreen *, Qt::ScreenOrientation)
MyQScreenOrientationChangeEvent(QScreen * screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1038
// [-2] void QScreenOrientationChangeEvent(QScreen *, Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
void* C_ZN29QScreenOrientationChangeEventC2EP7QScreenN2Qt17ScreenOrientationE(QScreen * screen, Qt::ScreenOrientation orientation) {
  return  new QScreenOrientationChangeEvent(screen, orientation);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1039
// [-2] void ~QScreenOrientationChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN29QScreenOrientationChangeEventD2Ev(void *this_) {
  delete (QScreenOrientationChangeEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1041
// [8] QScreen * screen()
extern "C" Q_DECL_EXPORT
void* C_ZNK29QScreenOrientationChangeEvent6screenEv(void *this_) {
  return (void*)((QScreenOrientationChangeEvent*)this_)->screen();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1042
// [4] Qt::ScreenOrientation orientation()
extern "C" Q_DECL_EXPORT
Qt::ScreenOrientation C_ZNK29QScreenOrientationChangeEvent11orientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QScreenOrientationChangeEvent*)this_)->orientation();
}

//  main block end
