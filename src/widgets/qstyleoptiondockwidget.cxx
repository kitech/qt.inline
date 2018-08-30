//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionDockWidget is pure virtual: false
// QStyleOptionDockWidget has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionDockWidget_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionDockWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionDockWidget_t qt_meta_stringdata_MyQStyleOptionDockWidget = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQStyleOptionDockWidget"
  },
  "MyQStyleOptionDockWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionDockWidget[] = {
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
class Q_DECL_EXPORT MyQStyleOptionDockWidget : public QStyleOptionDockWidget {
public:
  virtual ~MyQStyleOptionDockWidget() {}
// void QStyleOptionDockWidget()
MyQStyleOptionDockWidget() : QStyleOptionDockWidget() {}
// void QStyleOptionDockWidget(const QStyleOptionDockWidget &)
MyQStyleOptionDockWidget(const QStyleOptionDockWidget & other) : QStyleOptionDockWidget(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:391
// [-2] void QStyleOptionDockWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionDockWidgetC2Ev() {
  return  new QStyleOptionDockWidget();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:392
// [-2] void QStyleOptionDockWidget(const QStyleOptionDockWidget &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionDockWidgetC2ERKS_(QStyleOptionDockWidget* other) {
  return  new QStyleOptionDockWidget(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionDockWidgetD2Ev(void *this_) {
  delete (QStyleOptionDockWidget*)(this_);
}
//  main block end
