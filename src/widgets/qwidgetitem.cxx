//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItem is pure virtual: false
// QWidgetItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidgetItem_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidgetItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidgetItem_t qt_meta_stringdata_MyQWidgetItem = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWidgetItem"
  },
  "MyQWidgetItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidgetItem[] = {
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
class Q_DECL_EXPORT MyQWidgetItem : public QWidgetItem {
public:
  virtual ~MyQWidgetItem() {}
// void QWidgetItem(QWidget *)
MyQWidgetItem(QWidget * w) : QWidgetItem(w) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:126
// [-2] void QWidgetItem(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QWidgetItemC2EP7QWidget(QWidget * w) {
  return  new QWidgetItem(w);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:127
// [-2] void ~QWidgetItem()
extern "C" Q_DECL_EXPORT
void C_ZN11QWidgetItemD2Ev(void *this_) {
  delete (QWidgetItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:129
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWidgetItem8sizeHintEv(void *this_) {
  auto rv = ((QWidgetItem*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:130
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWidgetItem11minimumSizeEv(void *this_) {
  auto rv = ((QWidgetItem*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:131
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWidgetItem11maximumSizeEv(void *this_) {
  auto rv = ((QWidgetItem*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:132
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK11QWidgetItem19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QWidgetItem*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:133
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWidgetItem7isEmptyEv(void *this_) {
  return (bool)((QWidgetItem*)this_)->isEmpty();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:134
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QWidgetItem11setGeometryERK5QRect(void *this_, QRect* arg0) {
  ((QWidgetItem*)this_)->setGeometry(*arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:135
// [16] QRect geometry()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QWidgetItem8geometryEv(void *this_) {
  auto rv = ((QWidgetItem*)this_)->geometry();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:136
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZN11QWidgetItem6widgetEv(void *this_) {
  return (void*)((QWidgetItem*)this_)->widget();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:138
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QWidgetItem17hasHeightForWidthEv(void *this_) {
  return (bool)((QWidgetItem*)this_)->hasHeightForWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:139
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QWidgetItem14heightForWidthEi(void *this_, int arg0) {
  return (int)((QWidgetItem*)this_)->heightForWidth(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:140
// [4] QSizePolicy::ControlTypes controlTypes()
extern "C" Q_DECL_EXPORT
QSizePolicy::ControlTypes C_ZNK11QWidgetItem12controlTypesEv(void *this_) {
  return (QSizePolicy::ControlTypes)((QWidgetItem*)this_)->controlTypes();
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
