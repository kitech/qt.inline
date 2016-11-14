// /usr/include/qt/QtGui/qrasterwindow.h
#include <qrasterwindow.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qrasterwindow.h:51
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QRasterWindow10metaObjectEv(void *this_) {
  /*return*/ ((QRasterWindow*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qrasterwindow.h:55
// void QRasterWindow(class QWindow *)
extern "C"
void* C_ZN13QRasterWindowC1EP7QWindow(QWindow * parent) {
  return new QRasterWindow(parent);
}