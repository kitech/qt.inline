// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qframe.h
// dst-file: /src/widgets/qframe.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qframe.h>


#include <qrect.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qframe_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFrame_Class_Size()
{
  return sizeof(QFrame);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 101, column 10>
//   // proto:  void QFrame::setFrameRect(const QRect & );
// _ZN6QFrame12setFrameRectERK5QRect setFrameRect(const class QRect &)
extern "C"
void
C_ZN6QFrame12setFrameRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QFrame*)qthis)->setFrameRect(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 94, column 9>
//   // proto:  int QFrame::lineWidth();
// _ZNK6QFrame9lineWidthEv lineWidth()
extern "C"
int
C_ZNK6QFrame9lineWidthEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->lineWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 61, column 10>
//   // proto:  void QFrame::setFrameStyle(int );
// _ZN6QFrame13setFrameStyleEi setFrameStyle(int)
extern "C"
void
C_ZN6QFrame13setFrameStyleEi(void *qthis,
int arg1) {
  ((QFrame*)qthis)->setFrameStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 57, column 14>
//   // proto:  void QFrame::QFrame(QWidget * parent, Qt::WindowFlags f);
extern "C"
QFrame*
C_ZN6QFrameC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QFrame(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 89, column 11>
//   // proto:  QFrame::Shape QFrame::frameShape();
// _ZNK6QFrame10frameShapeEv frameShape()
extern "C"
QFrame::Shape
C_ZNK6QFrame10frameShapeEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->frameShape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 100, column 11>
//   // proto:  QRect QFrame::frameRect();
// _ZNK6QFrame9frameRectEv frameRect()
extern "C"
QRect*
C_ZNK6QFrame9frameRectEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->frameRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 65, column 11>
//   // proto:  QSize QFrame::sizeHint();
// _ZNK6QFrame8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK6QFrame8sizeHintEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 60, column 9>
//   // proto:  int QFrame::frameStyle();
// _ZNK6QFrame10frameStyleEv frameStyle()
extern "C"
int
C_ZNK6QFrame10frameStyleEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->frameStyle();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 97, column 9>
//   // proto:  int QFrame::midLineWidth();
// _ZNK6QFrame12midLineWidthEv midLineWidth()
extern "C"
int
C_ZNK6QFrame12midLineWidthEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->midLineWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 95, column 10>
//   // proto:  void QFrame::setLineWidth(int );
// _ZN6QFrame12setLineWidthEi setLineWidth(int)
extern "C"
void
C_ZN6QFrame12setLineWidthEi(void *qthis,
int arg1) {
  ((QFrame*)qthis)->setLineWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 92, column 10>
//   // proto:  void QFrame::setFrameShadow(QFrame::Shadow );
// _ZN6QFrame14setFrameShadowENS_6ShadowE setFrameShadow(enum QFrame::Shadow)
extern "C"
void
C_ZN6QFrame14setFrameShadowENS_6ShadowE(void *qthis,
QFrame::Shadow arg1) {
  ((QFrame*)qthis)->setFrameShadow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 98, column 10>
//   // proto:  void QFrame::setMidLineWidth(int );
// _ZN6QFrame15setMidLineWidthEi setMidLineWidth(int)
extern "C"
void
C_ZN6QFrame15setMidLineWidthEi(void *qthis,
int arg1) {
  ((QFrame*)qthis)->setMidLineWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 47, column 5>
//   // proto:  const QMetaObject * QFrame::metaObject();
// _ZNK6QFrame10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QFrame10metaObjectEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 63, column 9>
//   // proto:  int QFrame::frameWidth();
// _ZNK6QFrame10frameWidthEv frameWidth()
extern "C"
int
C_ZNK6QFrame10frameWidthEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->frameWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 91, column 12>
//   // proto:  QFrame::Shadow QFrame::frameShadow();
// _ZNK6QFrame11frameShadowEv frameShadow()
extern "C"
QFrame::Shadow
C_ZNK6QFrame11frameShadowEv(void *qthis) {
  auto ret =
  ((QFrame*)qthis)->frameShadow();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QFrame::~QFrame();
extern "C"
void C_ZN6QFrameD2Ev(void *qthis) {
  delete (QFrame*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qframe.h', line 90, column 10>
//   // proto:  void QFrame::setFrameShape(QFrame::Shape );
// _ZN6QFrame13setFrameShapeENS_5ShapeE setFrameShape(enum QFrame::Shape)
extern "C"
void
C_ZN6QFrame13setFrameShapeENS_5ShapeE(void *qthis,
QFrame::Shape arg1) {
  ((QFrame*)qthis)->setFrameShape(arg1);
}
// <= ext block end

// body block begin =>
// QFrame_SlotProxy here
class QFrame_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFrame_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qframe.moc"

extern "C" {
  QFrame_SlotProxy* QFrame_SlotProxy_new()
  {
    return new QFrame_SlotProxy();
  }
};

// <= body block end

