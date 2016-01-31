// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgraphicslayout.h
// dst-file: /src/widgets/qgraphicslayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicslayout.h>


// <= header block end

// main block begin =>
void __keep_qgraphicslayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsLayout_Class_Size()
{
  return sizeof(QGraphicsLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 60, column 18>
//   // proto:  void QGraphicsLayout::updateGeometry();
// _ZN15QGraphicsLayout14updateGeometryEv updateGeometry()
extern "C"
void
C_ZN15QGraphicsLayout14updateGeometryEv(void *qthis) {
  ((QGraphicsLayout*)qthis)->updateGeometry();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 58, column 10>
//   // proto:  bool QGraphicsLayout::isActivated();
// _ZNK15QGraphicsLayout11isActivatedEv isActivated()
extern "C"
bool
C_ZNK15QGraphicsLayout11isActivatedEv(void *qthis) {
  auto ret =
  ((QGraphicsLayout*)qthis)->isActivated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 59, column 18>
//   // proto:  void QGraphicsLayout::invalidate();
// _ZN15QGraphicsLayout10invalidateEv invalidate()
extern "C"
void
C_ZN15QGraphicsLayout10invalidateEv(void *qthis) {
  ((QGraphicsLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 66, column 18>
//   // proto:  void QGraphicsLayout::removeAt(int index);
// _ZN15QGraphicsLayout8removeAtEi removeAt(int)
extern "C"
void
C_ZN15QGraphicsLayout8removeAtEi(void *qthis,
int arg1) {
  ((QGraphicsLayout*)qthis)->removeAt(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 65, column 34>
//   // proto:  QGraphicsLayoutItem * QGraphicsLayout::itemAt(int i);
// _ZNK15QGraphicsLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK15QGraphicsLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 55, column 10>
//   // proto:  void QGraphicsLayout::getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom);
// _ZNK15QGraphicsLayout18getContentsMarginsEPdS0_S0_S0_ getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void
C_ZNK15QGraphicsLayout18getContentsMarginsEPdS0_S0_S0_(void *qthis,
qreal * arg1,
qreal * arg2,
qreal * arg3,
qreal * arg4) {
  ((QGraphicsLayout*)qthis)->getContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 54, column 10>
//   // proto:  void QGraphicsLayout::setContentsMargins(qreal left, qreal top, qreal right, qreal bottom);
// _ZN15QGraphicsLayout18setContentsMarginsEdddd setContentsMargins(qreal, qreal, qreal, qreal)
extern "C"
void
C_ZN15QGraphicsLayout18setContentsMarginsEdddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3,
qreal arg4) {
  ((QGraphicsLayout*)qthis)->setContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 62, column 18>
//   // proto:  void QGraphicsLayout::widgetEvent(QEvent * e);
// _ZN15QGraphicsLayout11widgetEventEP6QEvent widgetEvent(class QEvent *)
extern "C"
void
C_ZN15QGraphicsLayout11widgetEventEP6QEvent(void *qthis,
QEvent * arg1) {
  ((QGraphicsLayout*)qthis)->widgetEvent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 69, column 17>
//   // proto: static bool QGraphicsLayout::instantInvalidatePropagation();
// _ZN15QGraphicsLayout28instantInvalidatePropagationEv instantInvalidatePropagation()
extern "C"
bool
C_ZN15QGraphicsLayout28instantInvalidatePropagationEv() {
  auto ret =
  QGraphicsLayout::instantInvalidatePropagation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 68, column 17>
//   // proto: static void QGraphicsLayout::setInstantInvalidatePropagation(bool enable);
// _ZN15QGraphicsLayout31setInstantInvalidatePropagationEb setInstantInvalidatePropagation(_Bool)
extern "C"
void
C_ZN15QGraphicsLayout31setInstantInvalidatePropagationEb(bool arg1) {
  QGraphicsLayout::setInstantInvalidatePropagation(arg1);
}
//   // proto:  void QGraphicsLayout::~QGraphicsLayout();
extern "C"
void C_ZN15QGraphicsLayoutD2Ev(void *qthis) {
  delete (QGraphicsLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 57, column 10>
//   // proto:  void QGraphicsLayout::activate();
// _ZN15QGraphicsLayout8activateEv activate()
extern "C"
void
C_ZN15QGraphicsLayout8activateEv(void *qthis) {
  ((QGraphicsLayout*)qthis)->activate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 64, column 17>
//   // proto:  int QGraphicsLayout::count();
// _ZNK15QGraphicsLayout5countEv count()
extern "C"
int
C_ZNK15QGraphicsLayout5countEv(void *qthis) {
  auto ret =
  ((QGraphicsLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslayout.h', line 51, column 5>
//   // proto:  void QGraphicsLayout::QGraphicsLayout(QGraphicsLayoutItem * parent);
extern "C"
QGraphicsLayout*
C_ZN15QGraphicsLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * arg1) {
  // auto ret = new QGraphicsLayout(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

