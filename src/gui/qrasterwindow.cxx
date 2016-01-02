// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qrasterwindow.h
// dst-file: /src/gui/qrasterwindow.cxx
//

// header block begin =>
#include <qrasterwindow.h>

extern "C" {

int QRasterWindow_Class_Size()
{
  return sizeof(QRasterWindow);
}

// QRasterWindow(class QWindow *)
QRasterWindow* dector_ZN13QRasterWindowC1EP7QWindow(QWindow * parent)
{
  // static_assert(sizeof(QRasterWindow) == 32, "tyszerr");
  QRasterWindow* rthis = new QRasterWindow(parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

