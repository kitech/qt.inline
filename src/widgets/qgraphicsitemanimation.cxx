//  header block begin
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h
#include <qgraphicsitemanimation.h>
#include <QtWidgets>

// QGraphicsItemAnimation is pure virtual: false
// QGraphicsItemAnimation has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:102
// [-2] void beforeAnimationStep(qreal)
extern "C"
void* callback_ZN22QGraphicsItemAnimation19beforeAnimationStepEd = 0;
extern "C" void set_callback_ZN22QGraphicsItemAnimation19beforeAnimationStepEd(void*cbfn)
{ callback_ZN22QGraphicsItemAnimation19beforeAnimationStepEd = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:103
// [-2] void afterAnimationStep(qreal)
extern "C"
void* callback_ZN22QGraphicsItemAnimation18afterAnimationStepEd = 0;
extern "C" void set_callback_ZN22QGraphicsItemAnimation18afterAnimationStepEd(void*cbfn)
{ callback_ZN22QGraphicsItemAnimation18afterAnimationStepEd = cbfn; }

class MyQGraphicsItemAnimation : public QGraphicsItemAnimation {
public:
  virtual ~MyQGraphicsItemAnimation() {}
// void QGraphicsItemAnimation(class QObject *)
MyQGraphicsItemAnimation(QObject * parent) : QGraphicsItemAnimation(parent) {}
// void beforeAnimationStep(qreal)
  virtual void beforeAnimationStep(qreal step) {
    if (callback_ZN22QGraphicsItemAnimation19beforeAnimationStepEd != 0) {
      // callback_ZN22QGraphicsItemAnimation19beforeAnimationStepEd(step);
    }
    QGraphicsItemAnimation::beforeAnimationStep(step);
  }
// void afterAnimationStep(qreal)
  virtual void afterAnimationStep(qreal step) {
    if (callback_ZN22QGraphicsItemAnimation18afterAnimationStepEd != 0) {
      // callback_ZN22QGraphicsItemAnimation18afterAnimationStepEd(step);
    }
    QGraphicsItemAnimation::afterAnimationStep(step);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:59
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK22QGraphicsItemAnimation10metaObjectEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:61
// [-2] void QGraphicsItemAnimation(class QObject *)
extern "C"
void* C_ZN22QGraphicsItemAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsItemAnimation*)(0);
  return  new MyQGraphicsItemAnimation(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:62
// [-2] void ~QGraphicsItemAnimation()
extern "C"
void C_ZN22QGraphicsItemAnimationD2Ev(void *this_) {
  delete (QGraphicsItemAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:64
// [8] QGraphicsItem * item()
extern "C"
void* C_ZNK22QGraphicsItemAnimation4itemEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->item();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:65
// [-2] void setItem(class QGraphicsItem *)
extern "C"
void C_ZN22QGraphicsItemAnimation7setItemEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemAnimation*)this_)->setItem(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:67
// [8] QTimeLine * timeLine()
extern "C"
void* C_ZNK22QGraphicsItemAnimation8timeLineEv(void *this_) {
  return (void*)((QGraphicsItemAnimation*)this_)->timeLine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:68
// [-2] void setTimeLine(class QTimeLine *)
extern "C"
void C_ZN22QGraphicsItemAnimation11setTimeLineEP9QTimeLine(void *this_, QTimeLine * timeLine) {
  ((QGraphicsItemAnimation*)this_)->setTimeLine(timeLine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:70
// [16] QPointF posAt(qreal)
extern "C"
void* C_ZNK22QGraphicsItemAnimation5posAtEd(void *this_, qreal step) {
  auto rv = ((QGraphicsItemAnimation*)this_)->posAt(step);
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:72
// [-2] void setPosAt(qreal, const class QPointF &)
extern "C"
void C_ZN22QGraphicsItemAnimation8setPosAtEdRK7QPointF(void *this_, qreal step, const QPointF & pos) {
  ((QGraphicsItemAnimation*)this_)->setPosAt(step, pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:74
// [48] QMatrix matrixAt(qreal)
extern "C"
void* C_ZNK22QGraphicsItemAnimation8matrixAtEd(void *this_, qreal step) {
  auto rv = ((QGraphicsItemAnimation*)this_)->matrixAt(step);
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:76
// [8] qreal rotationAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation10rotationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->rotationAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:78
// [-2] void setRotationAt(qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation13setRotationAtEdd(void *this_, qreal step, qreal angle) {
  ((QGraphicsItemAnimation*)this_)->setRotationAt(step, angle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:80
// [8] qreal xTranslationAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation14xTranslationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->xTranslationAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:81
// [8] qreal yTranslationAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation14yTranslationAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->yTranslationAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:83
// [-2] void setTranslationAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation16setTranslationAtEddd(void *this_, qreal step, qreal dx, qreal dy) {
  ((QGraphicsItemAnimation*)this_)->setTranslationAt(step, dx, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:85
// [8] qreal verticalScaleAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation15verticalScaleAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->verticalScaleAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:86
// [8] qreal horizontalScaleAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation17horizontalScaleAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->horizontalScaleAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:88
// [-2] void setScaleAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation10setScaleAtEddd(void *this_, qreal step, qreal sx, qreal sy) {
  ((QGraphicsItemAnimation*)this_)->setScaleAt(step, sx, sy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:90
// [8] qreal verticalShearAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation15verticalShearAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->verticalShearAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:91
// [8] qreal horizontalShearAt(qreal)
extern "C"
qreal C_ZNK22QGraphicsItemAnimation17horizontalShearAtEd(void *this_, qreal step) {
  return (qreal)((QGraphicsItemAnimation*)this_)->horizontalShearAt(step);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:93
// [-2] void setShearAt(qreal, qreal, qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation10setShearAtEddd(void *this_, qreal step, qreal sh, qreal sv) {
  ((QGraphicsItemAnimation*)this_)->setShearAt(step, sh, sv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:95
// [-2] void clear()
extern "C"
void C_ZN22QGraphicsItemAnimation5clearEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:98
// [-2] void setStep(qreal)
extern "C"
void C_ZN22QGraphicsItemAnimation7setStepEd(void *this_, qreal x) {
  ((QGraphicsItemAnimation*)this_)->setStep(x);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:99
// [-2] void reset()
extern "C"
void C_ZN22QGraphicsItemAnimation5resetEv(void *this_) {
  ((QGraphicsItemAnimation*)this_)->reset();
}
//  main block end
