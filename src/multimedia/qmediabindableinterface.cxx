//  header block begin

// /usr/include/qt/QtMultimedia/qmediabindableinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediabindableinterface.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaBindableInterface is pure virtual: true true
// QMediaBindableInterface has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaBindableInterface_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaBindableInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaBindableInterface_t qt_meta_stringdata_MyQMediaBindableInterface = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQMediaBindableInterface"
  },
  "MyQMediaBindableInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaBindableInterface[] = {
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
class Q_DECL_EXPORT MyQMediaBindableInterface : public QMediaBindableInterface {
public:
  virtual ~MyQMediaBindableInterface() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QMediaObject * mediaObject()
  virtual QMediaObject * mediaObject() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mediaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaObject *)(irv);
      // Pointer Pointer QMediaObject *
    } else {
    return (QMediaObject *){};
  }
  }

// Protected purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediabindableinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN23QMediaBindableInterfaceD2Ev(void *this_)*/ {
  delete (QMediaBindableInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediabindableinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
