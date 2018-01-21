//  header block begin
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h
#include <qgraphicslinearlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:56
// void QGraphicsLinearLayout(class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsLinearLayoutC1EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return new QGraphicsLinearLayout(parent);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:57
// void QGraphicsLinearLayout(Qt::Orientation, class QGraphicsLayoutItem *)
extern "C"
void* C_ZN21QGraphicsLinearLayoutC1EN2Qt11OrientationEP19QGraphicsLayoutItem(Qt::Orientation orientation, QGraphicsLayoutItem * parent) {
  return new QGraphicsLinearLayout(orientation, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:58
// void ~QGraphicsLinearLayout()
extern "C"
void C_ZN21QGraphicsLinearLayoutD1Ev(void *this_) {
  delete (QGraphicsLinearLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:60
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN21QGraphicsLinearLayout14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QGraphicsLinearLayout*)this_)->setOrientation(orientation);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:61
// Qt::Orientation orientation()
extern "C"
void C_ZNK21QGraphicsLinearLayout11orientationEv(void *this_) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->orientation();
}
// inline
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:63
// void addItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->addItem(item);
}
// inline
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:64
// void addStretch(int)
extern "C"
void C_ZN21QGraphicsLinearLayout10addStretchEi(void *this_, int stretch) {
  ((QGraphicsLinearLayout*)this_)->addStretch(stretch);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:66
// void insertItem(int, class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout10insertItemEiP19QGraphicsLayoutItem(void *this_, int index, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->insertItem(index, item);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:67
// void insertStretch(int, int)
extern "C"
void C_ZN21QGraphicsLinearLayout13insertStretchEii(void *this_, int index, int stretch) {
  ((QGraphicsLinearLayout*)this_)->insertStretch(index, stretch);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:69
// void removeItem(class QGraphicsLayoutItem *)
extern "C"
void C_ZN21QGraphicsLinearLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->removeItem(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:70
// void removeAt(int)
extern "C"
void C_ZN21QGraphicsLinearLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsLinearLayout*)this_)->removeAt(index);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:72
// void setSpacing(qreal)
extern "C"
void C_ZN21QGraphicsLinearLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:73
// qreal spacing()
extern "C"
void C_ZNK21QGraphicsLinearLayout7spacingEv(void *this_) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->spacing();
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:74
// void setItemSpacing(int, qreal)
extern "C"
void C_ZN21QGraphicsLinearLayout14setItemSpacingEid(void *this_, int index, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setItemSpacing(index, spacing);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:75
// qreal itemSpacing(int)
extern "C"
void C_ZNK21QGraphicsLinearLayout11itemSpacingEi(void *this_, int index) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->itemSpacing(index);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:77
// void setStretchFactor(class QGraphicsLayoutItem *, int)
extern "C"
void C_ZN21QGraphicsLinearLayout16setStretchFactorEP19QGraphicsLayoutItemi(void *this_, QGraphicsLayoutItem * item, int stretch) {
  ((QGraphicsLinearLayout*)this_)->setStretchFactor(item, stretch);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:78
// int stretchFactor(class QGraphicsLayoutItem *)
extern "C"
void C_ZNK21QGraphicsLinearLayout13stretchFactorEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->stretchFactor(item);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:80
// void setAlignment(class QGraphicsLayoutItem *, Qt::Alignment)
extern "C"
void C_ZN21QGraphicsLinearLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsLinearLayout*)this_)->setAlignment(item, alignment);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:81
// Qt::Alignment alignment(class QGraphicsLayoutItem *)
extern "C"
void C_ZNK21QGraphicsLinearLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->alignment(item);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:83
// void setGeometry(const class QRectF &)
extern "C"
void C_ZN21QGraphicsLinearLayout11setGeometryERK6QRectF(void *this_, const QRectF & rect) {
  ((QGraphicsLinearLayout*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:85
// int count()
extern "C"
void C_ZNK21QGraphicsLinearLayout5countEv(void *this_) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:86
// QGraphicsLayoutItem * itemAt(int)
extern "C"
void C_ZNK21QGraphicsLinearLayout6itemAtEi(void *this_, int index) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->itemAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:88
// void invalidate()
extern "C"
void C_ZN21QGraphicsLinearLayout10invalidateEv(void *this_) {
  ((QGraphicsLinearLayout*)this_)->invalidate();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:89
// QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
void C_ZNK21QGraphicsLinearLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, const QSizeF & constraint) {
  /*return*/ ((QGraphicsLinearLayout*)this_)->sizeHint(which, constraint);
}
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:95
// void dump(int)
extern "C"
void C_ZNK21QGraphicsLinearLayout4dumpEi(void *this_, int indent) {
  ((QGraphicsLinearLayout*)this_)->dump(indent);
}
//  main block end
