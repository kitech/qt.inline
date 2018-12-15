//  header block begin

// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLayoutItem is pure virtual: true
// QGraphicsLayoutItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLayoutItem_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLayoutItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLayoutItem_t qt_meta_stringdata_MyQGraphicsLayoutItem = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsLayoutItem"
  },
  "MyQGraphicsLayoutItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLayoutItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsLayoutItem : public QGraphicsLayoutItem {
public:
  virtual ~MyQGraphicsLayoutItem() {}
// void QGraphicsLayoutItem(QGraphicsLayoutItem *, bool)
MyQGraphicsLayoutItem(QGraphicsLayoutItem * parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return (QSizeF){};
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:110
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:58
// [-2] void QGraphicsLayoutItem(QGraphicsLayoutItem *, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsLayoutItemC2EPS_b(QGraphicsLayoutItem * parent, bool isLayout) {
  auto _nilp = (MyQGraphicsLayoutItem*)(0);
  return 0; // new MyQGraphicsLayoutItem(parent, isLayout);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:59
// [-2] void ~QGraphicsLayoutItem()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItemD2Ev(void *this_) {
  delete (QGraphicsLayoutItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:61
// [-2] void setSizePolicy(const QSizePolicy &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem13setSizePolicyERK11QSizePolicy(void *this_, QSizePolicy* policy) {
  ((QGraphicsLayoutItem*)this_)->setSizePolicy(*policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:62
// [-2] void setSizePolicy(QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem13setSizePolicyEN11QSizePolicy6PolicyES1_NS0_11ControlTypeE(void *this_, QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType) {
  ((QGraphicsLayoutItem*)this_)->setSizePolicy(hPolicy, vPolicy, controlType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:63
// [4] QSizePolicy sizePolicy()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem10sizePolicyEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->sizePolicy();
return new QSizePolicy(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:65
// [-2] void setMinimumSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem14setMinimumSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsLayoutItem*)this_)->setMinimumSize(*size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:66
// [-2] void setMinimumSize(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem14setMinimumSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setMinimumSize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:67
// [16] QSizeF minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem11minimumSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->minimumSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:68
// [-2] void setMinimumWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem15setMinimumWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setMinimumWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:69
// [8] qreal minimumWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem12minimumWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->minimumWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:70
// [-2] void setMinimumHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem16setMinimumHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setMinimumHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:71
// [8] qreal minimumHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem13minimumHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->minimumHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:73
// [-2] void setPreferredSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem16setPreferredSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsLayoutItem*)this_)->setPreferredSize(*size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:74
// [-2] void setPreferredSize(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem16setPreferredSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setPreferredSize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:75
// [16] QSizeF preferredSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem13preferredSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->preferredSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:76
// [-2] void setPreferredWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem17setPreferredWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setPreferredWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:77
// [8] qreal preferredWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem14preferredWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->preferredWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:78
// [-2] void setPreferredHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem18setPreferredHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setPreferredHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:79
// [8] qreal preferredHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem15preferredHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->preferredHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:81
// [-2] void setMaximumSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem14setMaximumSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsLayoutItem*)this_)->setMaximumSize(*size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:82
// [-2] void setMaximumSize(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem14setMaximumSizeEdd(void *this_, qreal w, qreal h) {
  ((QGraphicsLayoutItem*)this_)->setMaximumSize(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:83
// [16] QSizeF maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem11maximumSizeEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->maximumSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:84
// [-2] void setMaximumWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem15setMaximumWidthEd(void *this_, qreal width) {
  ((QGraphicsLayoutItem*)this_)->setMaximumWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:85
// [8] qreal maximumWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem12maximumWidthEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->maximumWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:86
// [-2] void setMaximumHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem16setMaximumHeightEd(void *this_, qreal height) {
  ((QGraphicsLayoutItem*)this_)->setMaximumHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:87
// [8] qreal maximumHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsLayoutItem13maximumHeightEv(void *this_) {
  return (qreal)((QGraphicsLayoutItem*)this_)->maximumHeight();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:89
// [-2] void setGeometry(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem11setGeometryERK6QRectF(void *this_, QRectF* rect) {
  ((QGraphicsLayoutItem*)this_)->setGeometry(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:90
// [32] QRectF geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem8geometryEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->geometry();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:91
// [-2] void getContentsMargins(qreal *, qreal *, qreal *, qreal *)
extern "C" Q_DECL_EXPORT
void C_ZNK19QGraphicsLayoutItem18getContentsMarginsEPdS0_S0_S0_(void *this_, qreal * left, qreal * top, qreal * right, qreal * bottom) {
  ((QGraphicsLayoutItem*)this_)->getContentsMargins(left, top, right, bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:92
// [32] QRectF contentsRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem12contentsRectEv(void *this_) {
  auto rv = ((QGraphicsLayoutItem*)this_)->contentsRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:94
// [16] QSizeF effectiveSizeHint(Qt::SizeHint, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem17effectiveSizeHintEN2Qt8SizeHintERK6QSizeF(void *this_, Qt::SizeHint which, QSizeF* constraint) {
  auto rv = ((QGraphicsLayoutItem*)this_)->effectiveSizeHint(which, *constraint);
return new QSizeF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:96
// [-2] void updateGeometry()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem14updateGeometryEv(void *this_) {
  ((QGraphicsLayoutItem*)this_)->updateGeometry();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:98
// [8] QGraphicsLayoutItem * parentLayoutItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem16parentLayoutItemEv(void *this_) {
  return (void*)((QGraphicsLayoutItem*)this_)->parentLayoutItem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:99
// [-2] void setParentLayoutItem(QGraphicsLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsLayoutItem19setParentLayoutItemEPS_(void *this_, QGraphicsLayoutItem * parent) {
  ((QGraphicsLayoutItem*)this_)->setParentLayoutItem(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:101
// [1] bool isLayout()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGraphicsLayoutItem8isLayoutEv(void *this_) {
  return (bool)((QGraphicsLayoutItem*)this_)->isLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:102
// [8] QGraphicsItem * graphicsItem()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsLayoutItem12graphicsItemEv(void *this_) {
  return (void*)((QGraphicsLayoutItem*)this_)->graphicsItem();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:103
// [1] bool ownedByLayout()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGraphicsLayoutItem13ownedByLayoutEv(void *this_) {
  return (bool)((QGraphicsLayoutItem*)this_)->ownedByLayout();
}
#endif // QT_VERSION >= 0x040600

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
