//  header block begin

// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslinearlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLinearLayout is pure virtual: false
// QGraphicsLinearLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLinearLayout_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLinearLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLinearLayout_t qt_meta_stringdata_MyQGraphicsLinearLayout = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGraphicsLinearLayout"
  },
  "MyQGraphicsLinearLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLinearLayout[] = {
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
class Q_DECL_EXPORT MyQGraphicsLinearLayout : public QGraphicsLinearLayout {
public:
  virtual ~MyQGraphicsLinearLayout() {}
// void QGraphicsLinearLayout(QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(parent) {}
// void QGraphicsLinearLayout(Qt::Orientation, QGraphicsLayoutItem *)
MyQGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem * parent) : QGraphicsLinearLayout(orientation, parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:57
// [-2] void QGraphicsLinearLayout(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsLinearLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * parent) {
  return  new QGraphicsLinearLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:58
// [-2] void QGraphicsLinearLayout(Qt::Orientation, QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGraphicsLinearLayoutC2EN2Qt11OrientationEP19QGraphicsLayoutItem(Qt::Orientation orientation, QGraphicsLayoutItem * parent) {
  return  new QGraphicsLinearLayout(orientation, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:59
// [-2] void ~QGraphicsLinearLayout()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayoutD2Ev(void *this_) {
  delete (QGraphicsLinearLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:61
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QGraphicsLinearLayout*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:62
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK21QGraphicsLinearLayout11orientationEv(void *this_) {
  return (Qt::Orientation)((QGraphicsLinearLayout*)this_)->orientation();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:64
// [-2] void addItem(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->addItem(item);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:65
// [-2] void addStretch(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout10addStretchEi(void *this_, int stretch) {
  ((QGraphicsLinearLayout*)this_)->addStretch(stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:67
// [-2] void insertItem(int, QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout10insertItemEiP19QGraphicsLayoutItem(void *this_, int index, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->insertItem(index, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:68
// [-2] void insertStretch(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout13insertStretchEii(void *this_, int index, int stretch) {
  ((QGraphicsLinearLayout*)this_)->insertStretch(index, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:70
// [-2] void removeItem(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout10removeItemEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  ((QGraphicsLinearLayout*)this_)->removeItem(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:71
// [-2] void removeAt(int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout8removeAtEi(void *this_, int index) {
  ((QGraphicsLinearLayout*)this_)->removeAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:73
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:74
// [8] qreal spacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsLinearLayout7spacingEv(void *this_) {
  return (qreal)((QGraphicsLinearLayout*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:75
// [-2] void setItemSpacing(int, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout14setItemSpacingEid(void *this_, int index, qreal spacing) {
  ((QGraphicsLinearLayout*)this_)->setItemSpacing(index, spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:76
// [8] qreal itemSpacing(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QGraphicsLinearLayout11itemSpacingEi(void *this_, int index) {
  return (qreal)((QGraphicsLinearLayout*)this_)->itemSpacing(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:78
// [-2] void setStretchFactor(QGraphicsLayoutItem *, int)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout16setStretchFactorEP19QGraphicsLayoutItemi(void *this_, QGraphicsLayoutItem * item, int stretch) {
  ((QGraphicsLinearLayout*)this_)->setStretchFactor(item, stretch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:79
// [4] int stretchFactor(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK21QGraphicsLinearLayout13stretchFactorEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (int)((QGraphicsLinearLayout*)this_)->stretchFactor(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:81
// [-2] void setAlignment(QGraphicsLayoutItem *, Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment) {
  ((QGraphicsLinearLayout*)this_)->setAlignment(item, alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:82
// [4] Qt::Alignment alignment(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK21QGraphicsLinearLayout9alignmentEP19QGraphicsLayoutItem(void *this_, QGraphicsLayoutItem * item) {
  return (Qt::Alignment)((QGraphicsLinearLayout*)this_)->alignment(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:84
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsLinearLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:86
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK21QGraphicsLinearLayout5countEv(void *this_) {
  return (int)((QGraphicsLinearLayout*)this_)->count();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:87
// [8] QGraphicsLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsLinearLayout6itemAtEi(void *this_, int index) {
  return (void*)((QGraphicsLinearLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:89
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN21QGraphicsLinearLayout10invalidateEv(void *this_) {
  ((QGraphicsLinearLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:90
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGraphicsLinearLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsLinearLayout*)this_)->sizeHint(which, *constraint);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslinearlayout.h:96
// [-2] void dump(int)
extern "C" Q_DECL_EXPORT
void C_ZNK21QGraphicsLinearLayout4dumpEi(void *this_, int indent) {
  ((QGraphicsLinearLayout*)this_)->dump(indent);
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
