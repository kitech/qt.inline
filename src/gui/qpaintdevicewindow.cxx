// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qpaintdevicewindow.h
// dst-file: /src/gui/qpaintdevicewindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpaintdevicewindow.h>


// <= header block end

// main block begin =>
void __keep_qpaintdevicewindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPaintDeviceWindow_Class_Size()
{
  return sizeof(QPaintDeviceWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpaintdevicewindow.h', line 52, column 10>
//   // proto:  void QPaintDeviceWindow::update(const QRegion & region);
// _ZN18QPaintDeviceWindow6updateERK7QRegion update(const class QRegion &)
extern "C"
void
C_ZN18QPaintDeviceWindow6updateERK7QRegion(void *qthis,
const QRegion* arg1) {
  ((QPaintDeviceWindow*)qthis)->update(*((const QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintdevicewindow.h', line 59, column 10>
//   // proto:  void QPaintDeviceWindow::update();
// _ZN18QPaintDeviceWindow6updateEv update()
extern "C"
void
C_ZN18QPaintDeviceWindow6updateEv(void *qthis) {
  ((QPaintDeviceWindow*)qthis)->update();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintdevicewindow.h', line 47, column 5>
//   // proto:  const QMetaObject * QPaintDeviceWindow::metaObject();
// _ZNK18QPaintDeviceWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QPaintDeviceWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QPaintDeviceWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintdevicewindow.h', line 51, column 10>
//   // proto:  void QPaintDeviceWindow::update(const QRect & rect);
// _ZN18QPaintDeviceWindow6updateERK5QRect update(const class QRect &)
extern "C"
void
C_ZN18QPaintDeviceWindow6updateERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPaintDeviceWindow*)qthis)->update(*((const QRect*)arg1));
}
// <= ext block end

// body block begin =>
// QPaintDeviceWindow_SlotProxy here
class QPaintDeviceWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPaintDeviceWindow_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qpaintdevicewindow.moc"

extern "C" {
  QPaintDeviceWindow_SlotProxy* QPaintDeviceWindow_SlotProxy_new()
  {
    return new QPaintDeviceWindow_SlotProxy();
  }
};

// <= body block end

