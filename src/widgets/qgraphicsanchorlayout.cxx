//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#ifndef protected
#define protected public
#endif
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsAnchorLayout is pure virtual: false
// QGraphicsAnchorLayout has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsAnchorLayout : public QGraphicsAnchorLayout {
public:
  virtual ~MyQGraphicsAnchorLayout() {}
// void QGraphicsAnchorLayout(QGraphicsLayoutItem *)
MyQGraphicsAnchorLayout(QGraphicsLayoutItem * parent) : QGraphicsAnchorLayout(parent) {}
// Protected virtual Visibility=Default Availability=Available
// QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSizeF*)(irv);
      // RecordRecordQSizeF
    } else {
    return QGraphicsAnchorLayout::sizeHint(which, constraint);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:107
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsAnchorLayout*)this_)->QGraphicsAnchorLayout::sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:79
// [-2] void QGraphicsAnchorLayout(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  auto _nilp = (MyQGraphicsAnchorLayout*)(0);
  return  new MyQGraphicsAnchorLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:80
// [-2] void ~QGraphicsAnchorLayout()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayoutD2Ev(void *this_) {
  delete (QGraphicsAnchorLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:82
// [8] QGraphicsAnchor * addAnchor(QGraphicsLayoutItem *, Qt::AnchorPoint, QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->addAnchor(firstItem, firstEdge, secondItem, secondEdge);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:84
// [8] QGraphicsAnchor * anchor(QGraphicsLayoutItem *, Qt::AnchorPoint, QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->anchor(firstItem, firstEdge, secondItem, secondEdge);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:87
// [-2] void addCornerAnchors(QGraphicsLayoutItem *, Qt::Corner, QGraphicsLayoutItem *, Qt::Corner)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner) {
  ((QGraphicsAnchorLayout*)this_)->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:90
// [-2] void addAnchors(QGraphicsLayoutItem *, QGraphicsLayoutItem *, Qt::Orientations)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10addAnchorsEP19QGraphicsLayoutItemS1_6QFlagsIN2Qt11OrientationEE(void *this_, QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem, QFlags<Qt::Orientation> orientations) {
  ((QGraphicsAnchorLayout*)this_)->addAnchors(firstItem, secondItem, orientations);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:94
// [-2] void setHorizontalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:95
// [-2] void setVerticalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:96
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:97
// [8] qreal horizontalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsAnchorLayout17horizontalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:98
// [8] qreal verticalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsAnchorLayout15verticalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->verticalSpacing();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:100
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsAnchorLayout*)this_)->removeAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:101
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsAnchorLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:102
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK21QGraphicsAnchorLayout5countEv(void *this_) {
  return (int)((QGraphicsAnchorLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:103
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsAnchorLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsAnchorLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:105
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10invalidateEv(void *this_) {
  ((QGraphicsAnchorLayout*)this_)->invalidate();
}

//  main block end
