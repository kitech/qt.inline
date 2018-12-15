//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorCreatorBase is pure virtual: true
// QItemEditorCreatorBase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemEditorCreatorBase_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemEditorCreatorBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemEditorCreatorBase_t qt_meta_stringdata_MyQItemEditorCreatorBase = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQItemEditorCreatorBase"
  },
  "MyQItemEditorCreatorBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemEditorCreatorBase[] = {
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
class Q_DECL_EXPORT MyQItemEditorCreatorBase : public QItemEditorCreatorBase {
public:
  virtual ~MyQItemEditorCreatorBase() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QWidget * createWidget(QWidget *)
  virtual QWidget * createWidget(QWidget * parent) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createWidget", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWidget *)(irv);
      // Pointer Pointer QWidget *
    } else {
    return (QWidget *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QByteArray valuePropertyName()
  virtual QByteArray valuePropertyName() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"valuePropertyName", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QByteArray){};}
    auto prv = (QByteArray*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QByteArray
    } else {
    return (QByteArray){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:61
// [8] QWidget * createWidget(QWidget *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:62
// [8] QByteArray valuePropertyName()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:59
// [-2] void ~QItemEditorCreatorBase()
extern "C" Q_DECL_EXPORT
void C_ZN22QItemEditorCreatorBaseD2Ev(void *this_) {
  delete (QItemEditorCreatorBase*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:61
// [8] QWidget * createWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QItemEditorCreatorBase12createWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QItemEditorCreatorBase*)this_)->createWidget(parent);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:62
// [8] QByteArray valuePropertyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QItemEditorCreatorBase17valuePropertyNameEv(void *this_) {
  auto rv = ((QItemEditorCreatorBase*)this_)->valuePropertyName();
return new QByteArray(rv);
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
