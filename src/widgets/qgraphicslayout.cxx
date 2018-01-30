//  header block begin
// /usr/include/qt/QtWidgets/qgraphicslayout.h
#include <qgraphicslayout.h>
#include <QtWidgets>

// QGraphicsLayout is pure virtual: true
// QGraphicsLayout has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:78
// [-2] void addChildLayoutItem(class QGraphicsLayoutItem *)
extern "C"
void* callback_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem = 0;
extern "C" void set_callback_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem(void*cbfn)
{ callback_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem = cbfn; }

class MyQGraphicsLayout : public QGraphicsLayout {
public:
  virtual ~MyQGraphicsLayout() {}
// void QGraphicsLayout(class QGraphicsLayoutItem *)
MyQGraphicsLayout(QGraphicsLayoutItem * parent) : QGraphicsLayout(parent) {}
// void addChildLayoutItem(class QGraphicsLayoutItem *)
  virtual void addChildLayoutItem(QGraphicsLayoutItem * layoutItem) {
    if (callback_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem != 0) {
      // callback_ZN15QGraphicsLayout18addChildLayoutItemEP19QGraphicsLayoutItem(layoutItem);
    }
    QGraphicsLayout::addChildLayoutItem(layoutItem);
  }
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:57
// [-2] void QGraphicsLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN15QGraphicsLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  auto _nilp = (MyQGraphicsLayout*)(0);
  return 0; // new MyQGraphicsLayout(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:58
// [-2] void ~QGraphicsLayout()
extern "C"
void C_ZN15QGraphicsLayoutD2Ev(void *this_) {
  delete (QGraphicsLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:60
// [-2] void setContentsMargins(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN15QGraphicsLayout18setContentsMarginsEdddd(void *this_, qreal left, qreal top, qreal right, qreal bottom) {
  ((QGraphicsLayout*)this_)->setContentsMargins(left, top, right, bottom);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:61
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK15QGraphicsLayout18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsLayout*)this_)->getContentsMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:63
// [-2] void activate()
extern "C"
void C_ZN15QGraphicsLayout8activateEv(void *this_) {
  ((QGraphicsLayout*)this_)->activate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:64
// [1] bool isActivated()
extern "C"
bool C_ZNK15QGraphicsLayout11isActivatedEv(void *this_) {
  return (bool)((QGraphicsLayout*)this_)->isActivated();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:65
// [-2] void invalidate()
extern "C"
void C_ZN15QGraphicsLayout10invalidateEv(void *this_) {
  ((QGraphicsLayout*)this_)->invalidate();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:66
// [-2] void updateGeometry()
extern "C"
void C_ZN15QGraphicsLayout14updateGeometryEv(void *this_) {
  ((QGraphicsLayout*)this_)->updateGeometry();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:68
// [-2] void widgetEvent(class QEvent *)
extern "C"
void C_ZN15QGraphicsLayout11widgetEventEP6QEvent(void *this_, QEvent * e) {
  ((QGraphicsLayout*)this_)->widgetEvent(e);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:70
// [4] int count()
extern "C"
int C_ZNK15QGraphicsLayout5countEv(void *this_) {
  return (int)((QGraphicsLayout*)this_)->count();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:71
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C"
void* C_ZNK15QGraphicsLayout6itemAtEi(void *this_, int i) {
  return (void*)((QGraphicsLayout*)this_)->itemAt(i);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:72
// [-2] void removeAt(int)
extern "C"
void C_ZN15QGraphicsLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsLayout*)this_)->removeAt(index);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:74
// [-2] void setInstantInvalidatePropagation(_Bool)
extern "C"
void C_ZN15QGraphicsLayout31setInstantInvalidatePropagationEb(bool enable) {
  QGraphicsLayout::setInstantInvalidatePropagation(enable);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayout.h:75
// [1] bool instantInvalidatePropagation()
extern "C"
bool C_ZN15QGraphicsLayout28instantInvalidatePropagationEv() {
  return (bool)QGraphicsLayout::instantInvalidatePropagation();
}
//  main block end
