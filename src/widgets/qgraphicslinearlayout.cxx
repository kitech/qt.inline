//  header block begin
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h
#include <qgraphicslinearlayout.h>
#include <QtWidgets>

// QGraphicsLinearLayout is pure virtual: false
// QGraphicsLinearLayout has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsLinearLayout : public QGraphicsLinearLayout {
public:
  virtual ~MyQGraphicsLinearLayout() {}
// void QGraphicsLinearLayout(class QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(parent) {}
// void QGraphicsLinearLayout(Qt::Orientation, class QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(orientation, parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:56
// [-2] void QGraphicsLinearLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsLinearLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return  new QGraphicsLinearLayout(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:57
// [-2] void QGraphicsLinearLayout(Qt::Orientation, class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsLinearLayoutC2EN2Qt11OrientationEP19QGraphicsLayoutItem(Qt::Orientation orientation, QGraphicsLayoutItem * parent) {
  return  new QGraphicsLinearLayout(orientation, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:58
// [-2] void ~QGraphicsLinearLayout()
extern "C"
void C_ZN21QGraphicsLinearLayoutD2Ev(void *this_) {
  delete (QGraphicsLinearLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:60
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN21QGraphicsLinearLayout14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QGraphicsLinearLayout*)this_)->setOrientation(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:61
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK21QGraphicsLinearLayout11orientationEv(void *this_) {
  return (Qt::Orientation)((QGraphicsLinearLayout*)this_)->orientation();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:63
// [-2] void addItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->addItem(item);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:64
// [-2] void addStretch(int)
extern "C"
void C_ZN21QGraphicsLinearLayout10addStretchEi(void *this_, int stretch) {
  ((QGraphicsLinearLayout*)this_)->addStretch(stretch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:66
// [-2] void insertItem(int, class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout10insertItemEiP19QGraphicsLayoutItem(void *this_, int index, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->insertItem(index, item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:67
// [-2] void insertStretch(int, int)
extern "C"
void C_ZN21QGraphicsLinearLayout13insertStretchEii(void *this_, int index, int stretch) {
  ((QGraphicsLinearLayout*)this_)->insertStretch(index, stretch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:69
// [-2] void removeItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->removeItem(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:70
// [-2] void removeAt(int)
extern "C"
void C_ZN21QGraphicsLinearLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsLinearLayout*)this_)->removeAt(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:72
// [-2] void setSpacing(qreal)
extern "C"
void C_ZN21QGraphicsLinearLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setSpacing(spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:73
// [8] qreal spacing()
extern "C"
qreal C_ZNK21QGraphicsLinearLayout7spacingEv(void *this_) {
  return (qreal)((QGraphicsLinearLayout*)this_)->spacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:74
// [-2] void setItemSpacing(int, qreal)
extern "C"
void C_ZN21QGraphicsLinearLayout14setItemSpacingEid(void *this_, int index, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setItemSpacing(index, spacing);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:75
// [8] qreal itemSpacing(int)
extern "C"
qreal C_ZNK21QGraphicsLinearLayout11itemSpacingEi(void *this_, int index) {
  return (qreal)((QGraphicsLinearLayout*)this_)->itemSpacing(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:77
// [-2] void setStretchFactor(class QGraphicsLayoutItem *, int)
extern "C"
void C_ZN21QGraphicsLinearLayout16setStretchFactorEP19QGraphicsLayoutItemi(void *this_, QGraphicsLayoutItem * item, int stretch) {
  ((QGraphicsLinearLayout*)this_)->setStretchFactor(item, stretch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:78
// [4] int stretchFactor(class QGraphicsLayoutItem *)
extern "C"
int C_ZNK21QGraphicsLinearLayout13stretchFactorEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (int)((QGraphicsLinearLayout*)this_)->stretchFactor(item);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:81
// [4] Qt::Alignment alignment(class QGraphicsLayoutItem *)
extern "C"
Qt::Alignment C_ZNK21QGraphicsLinearLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (Qt::Alignment)((QGraphicsLinearLayout*)this_)->alignment(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:83
// [-2] void setGeometry(const class QRectF &)
extern "C"
void C_ZN21QGraphicsLinearLayout11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsLinearLayout*)this_)->setGeometry(rect);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:85
// [4] int count()
extern "C"
int C_ZNK21QGraphicsLinearLayout5countEv(void *this_) {
  return (int)((QGraphicsLinearLayout*)this_)->count();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:86
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C"
void* C_ZNK21QGraphicsLinearLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsLinearLayout*)this_)->itemAt(index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:88
// [-2] void invalidate()
extern "C"
void C_ZN21QGraphicsLinearLayout10invalidateEv(void *this_) {
  ((QGraphicsLinearLayout*)this_)->invalidate();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:89
// [16] QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void* C_ZNK21QGraphicsLinearLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, const QSizeF & constraint) {
  auto rv = ((QGraphicsLinearLayout*)this_)->sizeHint(which, constraint);
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:95
// [-2] void dump(int)
extern "C"
void C_ZNK21QGraphicsLinearLayout4dumpEi(void *this_, int indent) {
  ((QGraphicsLinearLayout*)this_)->dump(indent);
}
//  main block end
