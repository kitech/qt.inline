//  header block begin

// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsAnchorLayout is pure virtual: false
// QGraphicsAnchorLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsAnchorLayout_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsAnchorLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsAnchorLayout_t qt_meta_stringdata_MyQGraphicsAnchorLayout = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGraphicsAnchorLayout"
  },
  "MyQGraphicsAnchorLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsAnchorLayout[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGraphicsAnchorLayout : public QGraphicsAnchorLayout {
public:
  virtual ~MyQGraphicsAnchorLayout() {}
// void QGraphicsAnchorLayout(QGraphicsLayoutItem *)
MyQGraphicsAnchorLayout(QGraphicsLayoutItem * parent) : QGraphicsAnchorLayout(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return QGraphicsAnchorLayout::sizeHint(which, constraint);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:109
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsAnchorLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsAnchorLayout*)this_)->QGraphicsAnchorLayout::sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:81
// [-2] void QGraphicsAnchorLayout(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  auto _nilp = (MyQGraphicsAnchorLayout*)(0);
  return  new MyQGraphicsAnchorLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:82
// [-2] void ~QGraphicsAnchorLayout()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayoutD2Ev(void *this_) {
  delete (QGraphicsAnchorLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:84
// [8] QGraphicsAnchor * addAnchor(QGraphicsLayoutItem *, Qt::AnchorPoint, QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayout9addAnchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->addAnchor(firstItem, firstEdge, secondItem, secondEdge);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:86
// [8] QGraphicsAnchor * anchor(QGraphicsLayoutItem *, Qt::AnchorPoint, QGraphicsLayoutItem *, Qt::AnchorPoint)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsAnchorLayout6anchorEP19QGraphicsLayoutItemN2Qt11AnchorPointES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem * secondItem, Qt::AnchorPoint secondEdge) {
  return (void*)((QGraphicsAnchorLayout*)this_)->anchor(firstItem, firstEdge, secondItem, secondEdge);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:89
// [-2] void addCornerAnchors(QGraphicsLayoutItem *, Qt::Corner, QGraphicsLayoutItem *, Qt::Corner)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout16addCornerAnchorsEP19QGraphicsLayoutItemN2Qt6CornerES1_S3_(void *this_, QGraphicsLayoutItem * firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem * secondItem, Qt::Corner secondCorner) {
  ((QGraphicsAnchorLayout*)this_)->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:92
// [-2] void addAnchors(QGraphicsLayoutItem *, QGraphicsLayoutItem *, Qt::Orientations)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10addAnchorsEP19QGraphicsLayoutItemS1_6QFlagsIN2Qt11OrientationEE(void *this_, QGraphicsLayoutItem * firstItem, QGraphicsLayoutItem * secondItem, QFlags<Qt::Orientation> orientations) {
  ((QGraphicsAnchorLayout*)this_)->addAnchors(firstItem, secondItem, orientations);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:96
// [-2] void setHorizontalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout20setHorizontalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:97
// [-2] void setVerticalSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout18setVerticalSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:98
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchorLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:99
// [8] qreal horizontalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsAnchorLayout17horizontalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:100
// [8] qreal verticalSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsAnchorLayout15verticalSpacingEv(void *this_) {
  return (qreal)((QGraphicsAnchorLayout*)this_)->verticalSpacing();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:102
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsAnchorLayout*)this_)->removeAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:103
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsAnchorLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:104
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK21QGraphicsAnchorLayout5countEv(void *this_) {
  return (int)((QGraphicsAnchorLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:105
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsAnchorLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsAnchorLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:107
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsAnchorLayout10invalidateEv(void *this_) {
  ((QGraphicsAnchorLayout*)this_)->invalidate();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
