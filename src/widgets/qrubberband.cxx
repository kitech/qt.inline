//  header block begin
// /usr/include/qt/QtWidgets/qrubberband.h
#include <qrubberband.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qrubberband.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QRubberBand10metaObjectEv(void *this_) {
  /*return*/ ((QRubberBand*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qrubberband.h:59
// void QRubberBand(enum QRubberBand::Shape, class QWidget *)
extern "C"
void* C_ZN11QRubberBandC1ENS_5ShapeEP7QWidget(QRubberBand::Shape arg0, QWidget * arg1) {
  return new QRubberBand(arg0, arg1);
}
// virtual
// /usr/include/qt/QtWidgets/qrubberband.h:60
// void ~QRubberBand()
extern "C"
void C_ZN11QRubberBandD1Ev(void *this_) {
  delete (QRubberBand*)(this_);
}
// /usr/include/qt/QtWidgets/qrubberband.h:62
// QRubberBand::Shape shape()
extern "C"
void C_ZNK11QRubberBand5shapeEv(void *this_) {
  /*return*/ ((QRubberBand*)this_)->shape();
}
// /usr/include/qt/QtWidgets/qrubberband.h:64
// void setGeometry(const class QRect &)
extern "C"
void C_ZN11QRubberBand11setGeometryERK5QRect(void *this_, const QRect & r) {
  ((QRubberBand*)this_)->setGeometry(r);
}
// inline
// /usr/include/qt/QtWidgets/qrubberband.h:66
// void setGeometry(int, int, int, int)
extern "C"
void C_ZN11QRubberBand11setGeometryEiiii(void *this_, int x, int y, int w, int h) {
  ((QRubberBand*)this_)->setGeometry(x, y, w, h);
}
// inline
// /usr/include/qt/QtWidgets/qrubberband.h:67
// void move(int, int)
extern "C"
void C_ZN11QRubberBand4moveEii(void *this_, int x, int y) {
  ((QRubberBand*)this_)->move(x, y);
}
// inline
// /usr/include/qt/QtWidgets/qrubberband.h:68
// void move(const class QPoint &)
extern "C"
void C_ZN11QRubberBand4moveERK6QPoint(void *this_, const QPoint & p) {
  ((QRubberBand*)this_)->move(p);
}
// inline
// /usr/include/qt/QtWidgets/qrubberband.h:70
// void resize(int, int)
extern "C"
void C_ZN11QRubberBand6resizeEii(void *this_, int w, int h) {
  ((QRubberBand*)this_)->resize(w, h);
}
// inline
// /usr/include/qt/QtWidgets/qrubberband.h:72
// void resize(const class QSize &)
extern "C"
void C_ZN11QRubberBand6resizeERK5QSize(void *this_, const QSize & s) {
  ((QRubberBand*)this_)->resize(s);
}
//  main block end
