// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qrubberband.h
// dst-file: /src/widgets/qrubberband.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qrubberband.h>


// <= header block end

// main block begin =>
void __keep_qrubberband_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 66, column 17>
//   // proto:  void QRubberBand::resize(const QSize & s);
if (true) {
  auto f = [](QRubberBand flythis, const QSize & arg1) {
    ((QRubberBand*)0)->resize(arg1);
    flythis.resize(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QRubberBand6resizeERK5QSize resize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 60, column 17>
//   // proto:  void QRubberBand::setGeometry(int x, int y, int w, int h);
if (true) {
  auto f = [](QRubberBand flythis, int arg1, int arg2, int arg3, int arg4) {
    ((QRubberBand*)0)->setGeometry(arg1, arg2, arg3, arg4);
    flythis.setGeometry(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN11QRubberBand11setGeometryEiiii setGeometry(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 62, column 17>
//   // proto:  void QRubberBand::move(const QPoint & p);
if (true) {
  auto f = [](QRubberBand flythis, const QPoint & arg1) {
    ((QRubberBand*)0)->move(arg1);
    flythis.move(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QRubberBand4moveERK6QPoint move(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 61, column 17>
//   // proto:  void QRubberBand::move(int x, int y);
if (true) {
  auto f = [](QRubberBand flythis, int arg1, int arg2) {
    ((QRubberBand*)0)->move(arg1, arg2);
    flythis.move(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN11QRubberBand4moveEii move(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 64, column 17>
//   // proto:  void QRubberBand::resize(int w, int h);
if (true) {
  auto f = [](QRubberBand flythis, int arg1, int arg2) {
    ((QRubberBand*)0)->resize(arg1, arg2);
    flythis.resize(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN11QRubberBand6resizeEii resize(int, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRubberBand_Class_Size()
{
  return sizeof(QRubberBand);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 53, column 14>
//   // proto:  void QRubberBand::QRubberBand(QRubberBand::Shape , QWidget * );
extern "C"
QRubberBand*
C_ZN11QRubberBandC2ENS_5ShapeEP7QWidget(QRubberBand::Shape arg1,
QWidget * arg2) {
  auto ret = new QRubberBand(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 66, column 17>
//   // proto:  void QRubberBand::resize(const QSize & s);
// _ZN11QRubberBand6resizeERK5QSize resize(const class QSize &)
extern "C"
void
C_ZN11QRubberBand6resizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QRubberBand*)qthis)->resize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 60, column 17>
//   // proto:  void QRubberBand::setGeometry(int x, int y, int w, int h);
// _ZN11QRubberBand11setGeometryEiiii setGeometry(int, int, int, int)
extern "C"
void
C_ZN11QRubberBand11setGeometryEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QRubberBand*)qthis)->setGeometry(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 56, column 11>
//   // proto:  QRubberBand::Shape QRubberBand::shape();
// _ZNK11QRubberBand5shapeEv shape()
extern "C"
QRubberBand::Shape
C_ZNK11QRubberBand5shapeEv(void *qthis) {
  auto ret =
  ((QRubberBand*)qthis)->shape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 62, column 17>
//   // proto:  void QRubberBand::move(const QPoint & p);
// _ZN11QRubberBand4moveERK6QPoint move(const class QPoint &)
extern "C"
void
C_ZN11QRubberBand4moveERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QRubberBand*)qthis)->move(*((const QPoint*)arg1));
}
//   // proto:  void QRubberBand::~QRubberBand();
extern "C"
void C_ZN11QRubberBandD2Ev(void *qthis) {
  delete (QRubberBand*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 61, column 17>
//   // proto:  void QRubberBand::move(int x, int y);
// _ZN11QRubberBand4moveEii move(int, int)
extern "C"
void
C_ZN11QRubberBand4moveEii(void *qthis,
int arg1,
int arg2) {
  ((QRubberBand*)qthis)->move(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 49, column 5>
//   // proto:  const QMetaObject * QRubberBand::metaObject();
// _ZNK11QRubberBand10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QRubberBand10metaObjectEv(void *qthis) {
  auto ret =
  ((QRubberBand*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 58, column 10>
//   // proto:  void QRubberBand::setGeometry(const QRect & r);
// _ZN11QRubberBand11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QRubberBand11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QRubberBand*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qrubberband.h', line 64, column 17>
//   // proto:  void QRubberBand::resize(int w, int h);
// _ZN11QRubberBand6resizeEii resize(int, int)
extern "C"
void
C_ZN11QRubberBand6resizeEii(void *qthis,
int arg1,
int arg2) {
  ((QRubberBand*)qthis)->resize(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QRubberBand_SlotProxy here
class QRubberBand_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRubberBand_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qrubberband.moc"

extern "C" {
  QRubberBand_SlotProxy* QRubberBand_SlotProxy_new()
  {
    return new QRubberBand_SlotProxy();
  }
};

// <= body block end

