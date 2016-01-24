// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qrasterwindow.h
// dst-file: /src/gui/qrasterwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qrasterwindow.h>


// <= header block end

// main block begin =>
void __keep_qrasterwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRasterWindow_Class_Size()
{
  return sizeof(QRasterWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qrasterwindow.h', line 49, column 14>
//   // proto:  void QRasterWindow::QRasterWindow(QWindow * parent);
extern "C"
QRasterWindow*
C_ZN13QRasterWindowC2EP7QWindow(QWindow * arg1) {
  auto ret = new QRasterWindow(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrasterwindow.h', line 45, column 5>
//   // proto:  const QMetaObject * QRasterWindow::metaObject();
// _ZNK13QRasterWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QRasterWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QRasterWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QRasterWindow_SlotProxy here
class QRasterWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRasterWindow_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qrasterwindow.moc"

extern "C" {
  QRasterWindow_SlotProxy* QRasterWindow_SlotProxy_new()
  {
    return new QRasterWindow_SlotProxy();
  }
};

// <= body block end

