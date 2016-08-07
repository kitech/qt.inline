// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgraphicsitemanimation.h
// dst-file: /src/widgets/qgraphicsitemanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsitemanimation.h>


#include <qglobal.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qpoint.h>
#include <qmatrix.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsitemanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsItemAnimation_Class_Size()
{
  return sizeof(QGraphicsItemAnimation);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 72, column 10>
//   // proto:  void QGraphicsItemAnimation::setPosAt(qreal step, const QPointF & pos);
// _ZN22QGraphicsItemAnimation8setPosAtEdRK7QPointF setPosAt(qreal, const class QPointF &)
extern "C"
void
C_ZN22QGraphicsItemAnimation8setPosAtEdRK7QPointF(void *qthis,
qreal arg1,
const QPointF* arg2) {
  ((QGraphicsItemAnimation*)qthis)->setPosAt(arg1,
*((const QPointF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 80, column 11>
//   // proto:  qreal QGraphicsItemAnimation::xTranslationAt(qreal step);
// _ZNK22QGraphicsItemAnimation14xTranslationAtEd xTranslationAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation14xTranslationAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->xTranslationAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 78, column 10>
//   // proto:  void QGraphicsItemAnimation::setRotationAt(qreal step, qreal angle);
// _ZN22QGraphicsItemAnimation13setRotationAtEdd setRotationAt(qreal, qreal)
extern "C"
void
C_ZN22QGraphicsItemAnimation13setRotationAtEdd(void *qthis,
qreal arg1,
qreal arg2) {
  ((QGraphicsItemAnimation*)qthis)->setRotationAt(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 71, column 35>
//   // proto:  QList<QPair<qreal, QPointF> > QGraphicsItemAnimation::posList();
// _ZNK22QGraphicsItemAnimation7posListEv posList()
extern "C"
QList<QPair<double, QPointF> >*
C_ZNK22QGraphicsItemAnimation7posListEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->posList();
  return new QList<QPair<double, QPointF> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 85, column 11>
//   // proto:  qreal QGraphicsItemAnimation::verticalScaleAt(qreal step);
// _ZNK22QGraphicsItemAnimation15verticalScaleAtEd verticalScaleAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation15verticalScaleAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->verticalScaleAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 70, column 13>
//   // proto:  QPointF QGraphicsItemAnimation::posAt(qreal step);
// _ZNK22QGraphicsItemAnimation5posAtEd posAt(qreal)
extern "C"
QPointF*
C_ZNK22QGraphicsItemAnimation5posAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->posAt(arg1);
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 91, column 11>
//   // proto:  qreal QGraphicsItemAnimation::horizontalShearAt(qreal step);
// _ZNK22QGraphicsItemAnimation17horizontalShearAtEd horizontalShearAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation17horizontalShearAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->horizontalShearAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 81, column 11>
//   // proto:  qreal QGraphicsItemAnimation::yTranslationAt(qreal step);
// _ZNK22QGraphicsItemAnimation14yTranslationAtEd yTranslationAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation14yTranslationAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->yTranslationAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 74, column 13>
//   // proto:  QMatrix QGraphicsItemAnimation::matrixAt(qreal step);
// _ZNK22QGraphicsItemAnimation8matrixAtEd matrixAt(qreal)
extern "C"
QMatrix*
C_ZNK22QGraphicsItemAnimation8matrixAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->matrixAt(arg1);
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 64, column 20>
//   // proto:  QGraphicsItem * QGraphicsItemAnimation::item();
// _ZNK22QGraphicsItemAnimation4itemEv item()
extern "C"
void*
C_ZNK22QGraphicsItemAnimation4itemEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->item();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 61, column 5>
//   // proto:  void QGraphicsItemAnimation::QGraphicsItemAnimation(QObject * parent);
extern "C"
QGraphicsItemAnimation*
C_ZN22QGraphicsItemAnimationC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsItemAnimation(arg1);
  return ret;
}
//   // proto:  void QGraphicsItemAnimation::~QGraphicsItemAnimation();
extern "C"
void C_ZN22QGraphicsItemAnimationD2Ev(void *qthis) {
  delete (QGraphicsItemAnimation*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 88, column 10>
//   // proto:  void QGraphicsItemAnimation::setScaleAt(qreal step, qreal sx, qreal sy);
// _ZN22QGraphicsItemAnimation10setScaleAtEddd setScaleAt(qreal, qreal, qreal)
extern "C"
void
C_ZN22QGraphicsItemAnimation10setScaleAtEddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3) {
  ((QGraphicsItemAnimation*)qthis)->setScaleAt(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 83, column 10>
//   // proto:  void QGraphicsItemAnimation::setTranslationAt(qreal step, qreal dx, qreal dy);
// _ZN22QGraphicsItemAnimation16setTranslationAtEddd setTranslationAt(qreal, qreal, qreal)
extern "C"
void
C_ZN22QGraphicsItemAnimation16setTranslationAtEddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3) {
  ((QGraphicsItemAnimation*)qthis)->setTranslationAt(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 93, column 10>
//   // proto:  void QGraphicsItemAnimation::setShearAt(qreal step, qreal sh, qreal sv);
// _ZN22QGraphicsItemAnimation10setShearAtEddd setShearAt(qreal, qreal, qreal)
extern "C"
void
C_ZN22QGraphicsItemAnimation10setShearAtEddd(void *qthis,
qreal arg1,
qreal arg2,
qreal arg3) {
  ((QGraphicsItemAnimation*)qthis)->setShearAt(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 76, column 11>
//   // proto:  qreal QGraphicsItemAnimation::rotationAt(qreal step);
// _ZNK22QGraphicsItemAnimation10rotationAtEd rotationAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation10rotationAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->rotationAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 59, column 5>
//   // proto:  const QMetaObject * QGraphicsItemAnimation::metaObject();
// _ZNK22QGraphicsItemAnimation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK22QGraphicsItemAnimation10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 87, column 35>
//   // proto:  QList<QPair<qreal, QPointF> > QGraphicsItemAnimation::scaleList();
// _ZNK22QGraphicsItemAnimation9scaleListEv scaleList()
extern "C"
QList<QPair<double, QPointF> >*
C_ZNK22QGraphicsItemAnimation9scaleListEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->scaleList();
  return new QList<QPair<double, QPointF> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 77, column 33>
//   // proto:  QList<QPair<qreal, qreal> > QGraphicsItemAnimation::rotationList();
// _ZNK22QGraphicsItemAnimation12rotationListEv rotationList()
extern "C"
QList<QPair<double, double> >*
C_ZNK22QGraphicsItemAnimation12rotationListEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->rotationList();
  return new QList<QPair<double, double> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 99, column 10>
//   // proto:  void QGraphicsItemAnimation::reset();
// _ZN22QGraphicsItemAnimation5resetEv reset()
extern "C"
void
C_ZN22QGraphicsItemAnimation5resetEv(void *qthis) {
  ((QGraphicsItemAnimation*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 68, column 10>
//   // proto:  void QGraphicsItemAnimation::setTimeLine(QTimeLine * timeLine);
// _ZN22QGraphicsItemAnimation11setTimeLineEP9QTimeLine setTimeLine(class QTimeLine *)
extern "C"
void
C_ZN22QGraphicsItemAnimation11setTimeLineEP9QTimeLine(void *qthis,
QTimeLine * arg1) {
  ((QGraphicsItemAnimation*)qthis)->setTimeLine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 92, column 35>
//   // proto:  QList<QPair<qreal, QPointF> > QGraphicsItemAnimation::shearList();
// _ZNK22QGraphicsItemAnimation9shearListEv shearList()
extern "C"
QList<QPair<double, QPointF> >*
C_ZNK22QGraphicsItemAnimation9shearListEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->shearList();
  return new QList<QPair<double, QPointF> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 95, column 10>
//   // proto:  void QGraphicsItemAnimation::clear();
// _ZN22QGraphicsItemAnimation5clearEv clear()
extern "C"
void
C_ZN22QGraphicsItemAnimation5clearEv(void *qthis) {
  ((QGraphicsItemAnimation*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 82, column 35>
//   // proto:  QList<QPair<qreal, QPointF> > QGraphicsItemAnimation::translationList();
// _ZNK22QGraphicsItemAnimation15translationListEv translationList()
extern "C"
QList<QPair<double, QPointF> >*
C_ZNK22QGraphicsItemAnimation15translationListEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->translationList();
  return new QList<QPair<double, QPointF> >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 65, column 10>
//   // proto:  void QGraphicsItemAnimation::setItem(QGraphicsItem * item);
// _ZN22QGraphicsItemAnimation7setItemEP13QGraphicsItem setItem(class QGraphicsItem *)
extern "C"
void
C_ZN22QGraphicsItemAnimation7setItemEP13QGraphicsItem(void *qthis,
QGraphicsItem * arg1) {
  ((QGraphicsItemAnimation*)qthis)->setItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 98, column 10>
//   // proto:  void QGraphicsItemAnimation::setStep(qreal x);
// _ZN22QGraphicsItemAnimation7setStepEd setStep(qreal)
extern "C"
void
C_ZN22QGraphicsItemAnimation7setStepEd(void *qthis,
qreal arg1) {
  ((QGraphicsItemAnimation*)qthis)->setStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 67, column 16>
//   // proto:  QTimeLine * QGraphicsItemAnimation::timeLine();
// _ZNK22QGraphicsItemAnimation8timeLineEv timeLine()
extern "C"
void*
C_ZNK22QGraphicsItemAnimation8timeLineEv(void *qthis) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->timeLine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 86, column 11>
//   // proto:  qreal QGraphicsItemAnimation::horizontalScaleAt(qreal step);
// _ZNK22QGraphicsItemAnimation17horizontalScaleAtEd horizontalScaleAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation17horizontalScaleAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->horizontalScaleAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsitemanimation.h', line 90, column 11>
//   // proto:  qreal QGraphicsItemAnimation::verticalShearAt(qreal step);
// _ZNK22QGraphicsItemAnimation15verticalShearAtEd verticalShearAt(qreal)
extern "C"
double
C_ZNK22QGraphicsItemAnimation15verticalShearAtEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QGraphicsItemAnimation*)qthis)->verticalShearAt(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// QGraphicsItemAnimation_SlotProxy here
class QGraphicsItemAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsItemAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicsitemanimation.moc"

extern "C" {
  QGraphicsItemAnimation_SlotProxy* QGraphicsItemAnimation_SlotProxy_new()
  {
    return new QGraphicsItemAnimation_SlotProxy();
  }
};

// <= body block end

