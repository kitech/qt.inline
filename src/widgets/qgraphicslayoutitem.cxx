//  header block begin
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h
#include <qgraphicslayoutitem.h>
#include <QtWidgets>

// QGraphicsLayoutItem is pure virtual: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:105
// [-2] void setGraphicsItem(class QGraphicsItem *)
extern "C"
void* callback_ZN19QGraphicsLayoutItem15setGraphicsItemEP13QGraphicsItem = 0;
extern "C" void set_callback_ZN19QGraphicsLayoutItem15setGraphicsItemEP13QGraphicsItem(void*cbfn)
{ callback_ZN19QGraphicsLayoutItem15setGraphicsItemEP13QGraphicsItem = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:106
// [-2] void setOwnedByLayout(_Bool)
extern "C"
void* callback_ZN19QGraphicsLayoutItem16setOwnedByLayoutEb = 0;
extern "C" void set_callback_ZN19QGraphicsLayoutItem16setOwnedByLayoutEb(void*cbfn)
{ callback_ZN19QGraphicsLayoutItem16setOwnedByLayoutEb = cbfn; }
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:109
// [16] QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void* callback_ZNK19QGraphicsLayoutItem8sizeHintEN2Qt8SizeHintERK6QSizeF = 0;
extern "C" void set_callback_ZNK19QGraphicsLayoutItem8sizeHintEN2Qt8SizeHintERK6QSizeF(void*cbfn)
{ callback_ZNK19QGraphicsLayoutItem8sizeHintEN2Qt8SizeHintERK6QSizeF = cbfn; }

class MyQGraphicsLayoutItem : public QGraphicsLayoutItem {
public:
MyQGraphicsLayoutItem(QGraphicsLayoutItem * parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout) {}
// void setGraphicsItem(class QGraphicsItem *)
// void setGraphicsItem(class QGraphicsItem *)
virtual void setGraphicsItem(QGraphicsItem * item) {
  if (callback_ZN19QGraphicsLayoutItem15setGraphicsItemEP13QGraphicsItem != 0) {
  // callback_ZN19QGraphicsLayoutItem15setGraphicsItemEP13QGraphicsItem(item);
}}
// void setOwnedByLayout(_Bool)
// void setOwnedByLayout(_Bool)
virtual void setOwnedByLayout(bool ownedByLayout) {
  if (callback_ZN19QGraphicsLayoutItem16setOwnedByLayoutEb != 0) {
  // callback_ZN19QGraphicsLayoutItem16setOwnedByLayoutEb(ownedByLayout);
}}
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) {
  if (callback_ZNK19QGraphicsLayoutItem8sizeHintEN2Qt8SizeHintERK6QSizeF != 0) {
  // callback_ZNK19QGraphicsLayoutItem8sizeHintEN2Qt8SizeHintERK6QSizeF(which, constraint);
}}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:57
// [-2] void QGraphicsLayoutItem(class QGraphicsLayoutItem *, _Bool)
extern "C"
void* C_ZN19QGraphicsLayoutItemC1EPS_b(QGraphicsLayoutItem * parent, bool isLayout) {
  (MyQGraphicsLayoutItem*)(0);
  return 0; // new MyQGraphicsLayoutItem(parent, isLayout);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:58
// [-2] void ~QGraphicsLayoutItem()
extern "C"
void C_ZN19QGraphicsLayoutItemD1Ev(void *this_) {
  delete (QGraphicsLayoutItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:60
// [-2] void setSizePolicy(const class QSizePolicy &)
extern "C"
void C_ZN19QGraphicsLayoutItem13setSizePolicyERK11QSizePolicy(void *this_, const QSizePolicy & policy) {
  ((QGraphicsLayoutItem*)this_)->setSizePolicy(policy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:61
// [-2] void setSizePolicy(class QSizePolicy::Policy, class QSizePolicy::Policy, class QSizePolicy::ControlType)
extern "C"
void C_ZN19QGraphicsLayoutItem13setSizePolicyEN11QSizePolicy6PolicyES1_NS0_11ControlTypeE(void *this_, QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType) {
  ((QGraphicsLayoutItem*)this_)->setSizePolicy(hPolicy, vPolicy, controlType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:62
// [4] QSizePolicy sizePolicy()
extern "C"
void* C_ZNK19QGraphicsLayoutItem10sizePolicyEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->sizePolicy();
return new QSizePolicy(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:64
// [-2] void setMinimumSize(const class QSizeF &)
extern "C"
void C_ZN19QGraphicsLayoutItem14setMinimumSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsLayoutItem*)this_)->setMinimumSize(size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:65
// [-2] void setMinimumSize(qreal, qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem14setMinimumSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setMinimumSize(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:66
// [16] QSizeF minimumSize()
extern "C"
void* C_ZNK19QGraphicsLayoutItem11minimumSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->minimumSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:67
// [-2] void setMinimumWidth(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem15setMinimumWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setMinimumWidth(width);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:68
// [8] qreal minimumWidth()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem12minimumWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->minimumWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:69
// [-2] void setMinimumHeight(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem16setMinimumHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setMinimumHeight(height);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:70
// [8] qreal minimumHeight()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem13minimumHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->minimumHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:72
// [-2] void setPreferredSize(const class QSizeF &)
extern "C"
void C_ZN19QGraphicsLayoutItem16setPreferredSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsLayoutItem*)this_)->setPreferredSize(size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:73
// [-2] void setPreferredSize(qreal, qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem16setPreferredSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setPreferredSize(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:74
// [16] QSizeF preferredSize()
extern "C"
void* C_ZNK19QGraphicsLayoutItem13preferredSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->preferredSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:75
// [-2] void setPreferredWidth(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem17setPreferredWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setPreferredWidth(width);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:76
// [8] qreal preferredWidth()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem14preferredWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->preferredWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:77
// [-2] void setPreferredHeight(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem18setPreferredHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setPreferredHeight(height);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:78
// [8] qreal preferredHeight()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem15preferredHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->preferredHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:80
// [-2] void setMaximumSize(const class QSizeF &)
extern "C"
void C_ZN19QGraphicsLayoutItem14setMaximumSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QGraphicsLayoutItem*)this_)->setMaximumSize(size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:81
// [-2] void setMaximumSize(qreal, qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem14setMaximumSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setMaximumSize(w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:82
// [16] QSizeF maximumSize()
extern "C"
void* C_ZNK19QGraphicsLayoutItem11maximumSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->maximumSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:83
// [-2] void setMaximumWidth(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem15setMaximumWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setMaximumWidth(width);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:84
// [8] qreal maximumWidth()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem12maximumWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->maximumWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:85
// [-2] void setMaximumHeight(qreal)
extern "C"
void C_ZN19QGraphicsLayoutItem16setMaximumHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setMaximumHeight(height);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:86
// [8] qreal maximumHeight()
extern "C"
qreal C_ZNK19QGraphicsLayoutItem13maximumHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->maximumHeight();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:88
// [-2] void setGeometry(const class QRectF &)
extern "C"
void C_ZN19QGraphicsLayoutItem11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsLayoutItem*)this_)->setGeometry(rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:89
// [32] QRectF geometry()
extern "C"
void* C_ZNK19QGraphicsLayoutItem8geometryEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->geometry();
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:90
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C"
void C_ZNK19QGraphicsLayoutItem18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsLayoutItem*)this_)->getContentsMargins(left, top, right, bottom);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:91
// [32] QRectF contentsRect()
extern "C"
void* C_ZNK19QGraphicsLayoutItem12contentsRectEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->contentsRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:93
// [16] QSizeF effectiveSizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void* C_ZNK19QGraphicsLayoutItem17effectiveSizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, const QSizeF & constraint) {
  auto rv = ((QGraphicsLayoutItem*)this_)->effectiveSizeHint(which, constraint);
return new QSizeF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:95
// [-2] void updateGeometry()
extern "C"
void C_ZN19QGraphicsLayoutItem14updateGeometryEv(void *this_) {
  ((QGraphicsLayoutItem*)this_)->updateGeometry();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:97
// [8] QGraphicsLayoutItem * parentLayoutItem()
extern "C"
void* C_ZNK19QGraphicsLayoutItem16parentLayoutItemEv(void *this_) {
  return (void*)((QGraphicsLayoutItem*)this_)->parentLayoutItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:98
// [-2] void setParentLayoutItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN19QGraphicsLayoutItem19setParentLayoutItemEPS_(void *this_, QGraphicsLayoutItem * parent) {
  ((QGraphicsLayoutItem*)this_)->setParentLayoutItem(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:100
// [1] bool isLayout()
extern "C"
bool C_ZNK19QGraphicsLayoutItem8isLayoutEv(void *this_) {
  return (bool)((QGraphicsLayoutItem*)this_)->isLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:101
// [8] QGraphicsItem * graphicsItem()
extern "C"
void* C_ZNK19QGraphicsLayoutItem12graphicsItemEv(void *this_) {
  return (void*)((QGraphicsLayoutItem*)this_)->graphicsItem();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:102
// [1] bool ownedByLayout()
extern "C"
bool C_ZNK19QGraphicsLayoutItem13ownedByLayoutEv(void *this_) {
  return (bool)((QGraphicsLayoutItem*)this_)->ownedByLayout();
}
//  main block end
