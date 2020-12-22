//  header block begin

// /usr/include/qt/QtQml/qqmlincubator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlincubator.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlIncubator is pure virtual: false false
// QQmlIncubator has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlIncubator_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlIncubator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlIncubator_t qt_meta_stringdata_MyQQmlIncubator = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQQmlIncubator"
  },
  "MyQQmlIncubator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlIncubator[] = {
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
class Q_DECL_EXPORT MyQQmlIncubator : public QQmlIncubator {
public:
  virtual ~MyQQmlIncubator() {}
// void QQmlIncubator(QQmlIncubator::IncubationMode)
MyQQmlIncubator(QQmlIncubator::IncubationMode arg0) : QQmlIncubator(arg0) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void statusChanged(QQmlIncubator::Status)
  virtual void statusChanged(QQmlIncubator::Status arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"statusChanged", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQmlIncubator::statusChanged(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void setInitialState(QObject *)
  virtual void setInitialState(QObject * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setInitialState", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQmlIncubator::setInitialState(arg0);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlincubator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:72
// [-2] void QQmlIncubator(QQmlIncubator::IncubationMode) 
// (12)qm3785200753 (41)_ZN13QQmlIncubatorC2ENS_14IncubationModeE
/*void* qm3785200753(QQmlIncubator::IncubationMode arg0)*/{
  auto _nilp = (MyQQmlIncubator*)(0);
  QQmlIncubator::IncubationMode arg0 = *(QQmlIncubator::IncubationMode*)this_;
  this_ =  new QQmlIncubator(arg0);
  this_ =  new MyQQmlIncubator(arg0);
}


/*void C_ZN13QQmlIncubatorD2Ev(void *this_)*/ {
  delete (QQmlIncubator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlincubator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
