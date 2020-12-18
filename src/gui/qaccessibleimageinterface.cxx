//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleImageInterface is pure virtual: true true
// QAccessibleImageInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleImageInterface_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleImageInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleImageInterface_t qt_meta_stringdata_MyQAccessibleImageInterface = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQAccessibleImageInterface"
  },
  "MyQAccessibleImageInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleImageInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleImageInterface : public QAccessibleImageInterface {
public:
  virtual ~MyQAccessibleImageInterface() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString imageDescription()
  virtual QString imageDescription() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageDescription", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSize imageSize()
  virtual QSize imageSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QPoint imagePosition()
  virtual QPoint imagePosition() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imagePosition", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPoint){};}
    auto prv = (QPoint*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QPoint
    } else {
    return (QPoint){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibleimageinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN25QAccessibleImageInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleImageInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibleimageinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
