//  header block begin

// /usr/include/qt/QtQml/qqmlincubator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlincubator.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlIncubationController is pure virtual: false false
// QQmlIncubationController has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlIncubationController_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlIncubationController_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlIncubationController_t qt_meta_stringdata_MyQQmlIncubationController = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQQmlIncubationController"
  },
  "MyQQmlIncubationController"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlIncubationController[] = {
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
class Q_DECL_EXPORT MyQQmlIncubationController : public QQmlIncubationController {
public:
  virtual ~MyQQmlIncubationController() {}
// void QQmlIncubationController()
MyQQmlIncubationController() : QQmlIncubationController() {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void incubatingObjectCountChanged(int)
  virtual void incubatingObjectCountChanged(int arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"incubatingObjectCountChanged", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQmlIncubationController::incubatingObjectCountChanged(arg0);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlincubationcontroller(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:109
// [-2] void QQmlIncubationController() 
// (12)qm3346595152 (33)_ZN24QQmlIncubationControllerC2Ev
/*void* qm3346595152()*/{
  auto _nilp = (MyQQmlIncubationController*)(0);
  ;
  this_ =  new QQmlIncubationController();
  this_ =  new MyQQmlIncubationController();
}


/*void C_ZN24QQmlIncubationControllerD2Ev(void *this_)*/ {
  delete (QQmlIncubationController*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlincubationcontroller
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
