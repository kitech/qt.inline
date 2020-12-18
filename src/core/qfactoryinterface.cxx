//  header block begin

// /usr/include/qt/QtCore/qfactoryinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfactoryinterface.h>
#include <QtCore>
#include "callback_inherit.h"

// QFactoryInterface is pure virtual: true true
// QFactoryInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFactoryInterface_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFactoryInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFactoryInterface_t qt_meta_stringdata_MyQFactoryInterface = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQFactoryInterface"
  },
  "MyQFactoryInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFactoryInterface[] = {
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
class Q_DECL_EXPORT MyQFactoryInterface : public QFactoryInterface {
public:
  virtual ~MyQFactoryInterface() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QStringList keys()
  virtual QStringList keys() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keys", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfactoryinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17QFactoryInterfaceD2Ev(void *this_)*/ {
  delete (QFactoryInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfactoryinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
