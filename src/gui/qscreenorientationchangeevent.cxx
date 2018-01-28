//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QScreenOrientationChangeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQScreenOrientationChangeEvent : public QScreenOrientationChangeEvent {
public:
MyQScreenOrientationChangeEvent(QScreen * screen, Qt::ScreenOrientation orientation) : QScreenOrientationChangeEvent(screen, orientation) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1038
// [-2] void QScreenOrientationChangeEvent(class QScreen *, Qt::ScreenOrientation)
extern "C"
void* C_ZN29QScreenOrientationChangeEventC1EP7QScreenN2Qt17ScreenOrientationE(QScreen * screen, Qt::ScreenOrientation orientation) {
  (MyQScreenOrientationChangeEvent*)(0);
  return  new MyQScreenOrientationChangeEvent(screen, orientation);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1039
// [-2] void ~QScreenOrientationChangeEvent()
extern "C"
void C_ZN29QScreenOrientationChangeEventD1Ev(void *this_) {
  delete (QScreenOrientationChangeEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1041
// [8] QScreen * screen()
extern "C"
void* C_ZNK29QScreenOrientationChangeEvent6screenEv(void *this_) {
  return (void*)((QScreenOrientationChangeEvent*)this_)->screen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1042
// [4] Qt::ScreenOrientation orientation()
extern "C"
Qt::ScreenOrientation C_ZNK29QScreenOrientationChangeEvent11orientationEv(void *this_) {
  return (Qt::ScreenOrientation)((QScreenOrientationChangeEvent*)this_)->orientation();
}
//  main block end
