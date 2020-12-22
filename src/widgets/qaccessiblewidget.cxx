//  header block begin

// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAccessibleWidget is pure virtual: false false
// QAccessibleWidget has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleWidget_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleWidget_t qt_meta_stringdata_MyQAccessibleWidget = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAccessibleWidget"
  },
  "MyQAccessibleWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleWidget[] = {
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
class Q_DECL_EXPORT MyQAccessibleWidget : public QAccessibleWidget {
public:
// void QAccessibleWidget(QWidget *, QAccessible::Role, const QString &)
MyQAccessibleWidget(QWidget * o, QAccessible::Role r, const QString & name) : QAccessibleWidget(o, r, name) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblewidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// [-2] void QAccessibleWidget(QWidget *, QAccessible::Role, const QString &) 
// (12)qm1003490150 (64)_ZN17QAccessibleWidgetC2EP7QWidgetN11QAccessible4RoleERK7QString
/*void* qm1003490150(QWidget * o, QAccessible::Role r, const QString & name)*/{
  QWidget * o = *(QWidget **)this_; QAccessible::Role r = *(QAccessible::Role*)this_; const QString & name = *(const QString *)this_;
  this_ =  new QAccessibleWidget(o, r, name);
  this_ =  new MyQAccessibleWidget(o, r, name);
}

  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblewidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
