//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTab is pure virtual: false
// QStyleOptionTab has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionTab_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTab_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTab_t qt_meta_stringdata_MyQStyleOptionTab = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQStyleOptionTab"
  },
  "MyQStyleOptionTab"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTab[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTab : public QStyleOptionTab {
public:
  virtual ~MyQStyleOptionTab() {}
// void QStyleOptionTab()
MyQStyleOptionTab() : QStyleOptionTab() {}
// void QStyleOptionTab(const QStyleOptionTab &)
MyQStyleOptionTab(const QStyleOptionTab & other) : QStyleOptionTab(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:285
// [-2] void QStyleOptionTab()
extern "C" Q_DECL_EXPORT
void* C_ZN15QStyleOptionTabC2Ev() {
  return  new QStyleOptionTab();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:286
// [-2] void QStyleOptionTab(const QStyleOptionTab &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QStyleOptionTabC2ERKS_(QStyleOptionTab* other) {
  return  new QStyleOptionTab(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN15QStyleOptionTabD2Ev(void *this_) {
  delete (QStyleOptionTab*)(this_);
}
//  main block end
