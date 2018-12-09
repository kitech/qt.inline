//  header block begin

// /usr/include/qt/QtWidgets/qlayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetItemV2 is pure virtual: false
// QWidgetItemV2 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidgetItemV2_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidgetItemV2_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidgetItemV2_t qt_meta_stringdata_MyQWidgetItemV2 = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQWidgetItemV2"
  },
  "MyQWidgetItemV2"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidgetItemV2[] = {
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
class Q_DECL_EXPORT MyQWidgetItemV2 : public QWidgetItemV2 {
public:
  virtual ~MyQWidgetItemV2() {}
// void QWidgetItemV2(QWidget *)
MyQWidgetItemV2(QWidget * widget) : QWidgetItemV2(widget) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:148
// [-2] void QWidgetItemV2(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetItemV2C2EP7QWidget(QWidget * widget) {
  return  new QWidgetItemV2(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:149
// [-2] void ~QWidgetItemV2()
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetItemV2D2Ev(void *this_) {
  delete (QWidgetItemV2*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:151
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV28sizeHintEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:152
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV211minimumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:153
// [8] QSize maximumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetItemV211maximumSizeEv(void *this_) {
  auto rv = ((QWidgetItemV2*)this_)->maximumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlayoutitem.h:154
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK13QWidgetItemV214heightForWidthEi(void *this_, int width) {
  return (int)((QWidgetItemV2*)this_)->heightForWidth(width);
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
