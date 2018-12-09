//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSpacerItem is pure virtual: false
// QSpacerItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSpacerItem_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSpacerItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSpacerItem_t qt_meta_stringdata_MyQSpacerItem = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSpacerItem"
  },
  "MyQSpacerItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSpacerItem[] = {
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
class Q_DECL_EXPORT MyQSpacerItem : public QSpacerItem {
public:
  virtual ~MyQSpacerItem() {}
// void QSpacerItem(int, int, QSizePolicy::Policy, QSizePolicy::Policy)
MyQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) : QSpacerItem(w, h, hData, vData) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:95
// [-2] void QSpacerItem(int, int, QSizePolicy::Policy, QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void* C_ZN11QSpacerItemC2EiiN11QSizePolicy6PolicyES1_(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  return  new QSpacerItem(w, h, hData, vData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:99
// [-2] void ~QSpacerItem()
extern "C" Q_DECL_EXPORT
void C_ZN11QSpacerItemD2Ev(void *this_) {
  delete (QSpacerItem*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:101
// [-2] void changeSize(int, int, QSizePolicy::Policy, QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void C_ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_(void *this_, int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData) {
  ((QSpacerItem*)this_)->changeSize(w, h, hData, vData);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:104
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSpacerItem8sizeHintEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:105
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSpacerItem11minimumSizeEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:106
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSpacerItem11maximumSizeEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:107
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK11QSpacerItem19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QSpacerItem*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:108
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QSpacerItem7isEmptyEv(void *this_) {
  return (bool)((QSpacerItem*)this_)->isEmpty();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:109
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QSpacerItem11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QSpacerItem*)this_)->setGeometry(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:110
// [16] QRect geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSpacerItem8geometryEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->geometry();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:111
// [8] QSpacerItem * spacerItem()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSpacerItem10spacerItemEv(void *this_) {
  return (void*)((QSpacerItem*)this_)->spacerItem();
}

// Public inline Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtWidgets/qlayoutitem.h:112
// [4] QSizePolicy sizePolicy()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSpacerItem10sizePolicyEv(void *this_) {
  auto rv = ((QSpacerItem*)this_)->sizePolicy();
return new QSizePolicy(rv);
}
#endif // QT_VERSION >= 0x050500

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
