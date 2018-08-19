//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicslayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLayout is pure virtual: true
// QGraphicsLayout has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsLayout : public QGraphicsLayout {
public:
  virtual ~MyQGraphicsLayout() {}
// void QGraphicsLayout(QGraphicsLayoutItem *)
MyQGraphicsLayout(QGraphicsLayoutItem * parent) : QGraphicsLayout(parent) {}
// void QGraphicsLayout(QGraphicsLayoutPrivate &, QGraphicsLayoutItem *)
MyQGraphicsLayout(QGraphicsLayoutPrivate & arg0, QGraphicsLayoutItem * arg1) : QGraphicsLayout(arg0, arg1) {}
// Protected Visibility=Default Availability=Available
// void addChildLayoutItem(QGraphicsLayoutItem *)
  virtual void addChildLayoutItem(QGraphicsLayoutItem * layoutItem) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addChildLayoutItem", &handled, 1, (uint64_t)layoutItem, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsLayout::addChildLayoutItem(layoutItem);
  }
  }

};

// Protected Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicslayout.h:78
// [-2] void addChildLayoutItem(QGraphicsLayoutItem *)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * layoutItem) {
  ((QGraphicsLayout*)this_)->QGraphicsLayout::addChildLayoutItem(layoutItem);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:57
// [-2] void QGraphicsLayout(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  auto _nilp = (MyQGraphicsLayout*)(0);
  return 0; // new MyQGraphicsLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:58
// [-2] void ~QGraphicsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayoutD2Ev(void *this_) {
  delete (QGraphicsLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:60
// [-2] void setContentsMargins(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout18setContentsMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsLayout*)this_)->setContentsMargins(left, top, right, bottom);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:61
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK15QGraphicsLayout18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsLayout*)this_)->getContentsMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:63
// [-2] void activate()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout8activateEv(void *this_) {
  ((QGraphicsLayout*)this_)->activate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:64
// [1] bool isActivated()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsLayout11isActivatedEv(void *this_) {
  return (bool)((QGraphicsLayout*)this_)->isActivated();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:65
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout10invalidateEv(void *this_) {
  ((QGraphicsLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:66
// [-2] void updateGeometry()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout14updateGeometryEv(void *this_) {
  ((QGraphicsLayout*)this_)->updateGeometry();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:68
// [-2] void widgetEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout11widgetEventEP6QEvent(void *this_, QEvent * e) {
  ((QGraphicsLayout*)this_)->widgetEvent(e);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:70
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK15QGraphicsLayout5countEv(void *this_) {
  return (int)((QGraphicsLayout*)this_)->count();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:71
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsLayout6itemAtEi(void *this_, int i) {
  return (void*)((QGraphicsLayout*)this_)->itemAt(i);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:72
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsLayout*)this_)->removeAt(index);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:74
// [-2] void setInstantInvalidatePropagation(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsLayout31setInstantInvalidatePropagationEb(bool enable) {
  QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:75
// [1] bool instantInvalidatePropagation()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsLayout28instantInvalidatePropagationEv() {
  return (bool)QGraphicsLayout::instantInvalidatePropagation();
}

//  main block end
