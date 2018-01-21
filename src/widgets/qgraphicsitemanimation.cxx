//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h
#include <qgraphicsitemanimation.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:59
// const QMetaObject * metaObject()
extern "C"
void C_ZNK22QGraphicsItemAnimation10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:61
// void QGraphicsItemAnimation(class QObject *)
extern "C"
void* C_ZN22QGraphicsItemAnimationC1EP7QObject(QObject * parent) {
  return new QGraphicsItemAnimation(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:62
// void ~QGraphicsItemAnimation()
extern "C"
void C_ZN22QGraphicsItemAnimationD1Ev(void *this_) {
  delete (QGraphicsItemAnimation*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:64
// QGraphicsItem * item()
extern "C"
void C_ZNK22QGraphicsItemAnimation4itemEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->item();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:65
// void setItem(class QGraphicsItem *)
extern "C"
void C_ZN22QGraphicsItemAnimation7setItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemAnimation*)this_)->setItem(item);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:67
// QTimeLine * timeLine()
extern "C"
void C_ZNK22QGraphicsItemAnimation8timeLineEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->timeLine();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:68
// void setTimeLine(class QTimeLine *)
extern "C"
void C_ZN22QGraphicsItemAnimation11setTimeLineEP9QTimeLine(void *this_, QTimeLine * timeLine) {
  ((QGraphicsItemAnimation*)this_)->setTimeLine(timeLine);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:70
// QPointF posAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation5posAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->posAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:71
// QList<QPair<qreal, QPointF> > posList()
extern "C"
void C_ZNK22QGraphicsItemAnimation7posListEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->posList();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:72
// void setPosAt(qreal, const class QPointF &)
extern "C"
void C_ZN22QGraphicsItemAnimation8setPosAtEdRK7QPointF(void *this_, qreal step, const QPointF & pos) {
  ((QGraphicsItemAnimation*)this_)->setPosAt(step, pos);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:74
// QMatrix matrixAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation8matrixAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->matrixAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:76
// qreal rotationAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation10rotationAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->rotationAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:77
// QList<QPair<qreal, qreal> > rotationList()
extern "C"
void C_ZNK22QGraphicsItemAnimation12rotationListEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->rotationList();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:78
// void setRotationAt(qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation13setRotationAtEdd(void *this_, qreal step, qreal angle) {
  ((QGraphicsItemAnimation*)this_)->setRotationAt(step, angle);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:80
// qreal xTranslationAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation14xTranslationAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->xTranslationAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:81
// qreal yTranslationAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation14yTranslationAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->yTranslationAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:82
// QList<QPair<qreal, QPointF> > translationList()
extern "C"
void C_ZNK22QGraphicsItemAnimation15translationListEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->translationList();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:83
// void setTranslationAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation16setTranslationAtEddd(void *this_, qreal step, qreal dx, qreal dy) {
  ((QGraphicsItemAnimation*)this_)->setTranslationAt(step, dx, dy);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:85
// qreal verticalScaleAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation15verticalScaleAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->verticalScaleAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:86
// qreal horizontalScaleAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation17horizontalScaleAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->horizontalScaleAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:87
// QList<QPair<qreal, QPointF> > scaleList()
extern "C"
void C_ZNK22QGraphicsItemAnimation9scaleListEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->scaleList();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:88
// void setScaleAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation10setScaleAtEddd(void *this_, qreal step, qreal sx, qreal sy) {
  ((QGraphicsItemAnimation*)this_)->setScaleAt(step, sx, sy);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:90
// qreal verticalShearAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation15verticalShearAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->verticalShearAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:91
// qreal horizontalShearAt(qreal)
extern "C"
void C_ZNK22QGraphicsItemAnimation17horizontalShearAtEd(void *this_, qreal step) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->horizontalShearAt(step);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:92
// QList<QPair<qreal, QPointF> > shearList()
extern "C"
void C_ZNK22QGraphicsItemAnimation9shearListEv(void *this_) {
  /*return*/ ((QGraphicsItemAnimation*)this_)->shearList();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:93
// void setShearAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation10setShearAtEddd(void *this_, qreal step, qreal sh, qreal sv) {
  ((QGraphicsItemAnimation*)this_)->setShearAt(step, sh, sv);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:95
// void clear()
extern "C"
void C_ZN22QGraphicsItemAnimation5clearEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:98
// void setStep(qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation7setStepEd(void *this_, qreal x) {
  ((QGraphicsItemAnimation*)this_)->setStep(x);
}
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:99
// void reset()
extern "C"
void C_ZN22QGraphicsItemAnimation5resetEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->reset();
}
//  main block end
