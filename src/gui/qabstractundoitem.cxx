//  header block begin

// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractUndoItem is pure virtual: true true
// QAbstractUndoItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractUndoItem_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractUndoItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractUndoItem_t qt_meta_stringdata_MyQAbstractUndoItem = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAbstractUndoItem"
  },
  "MyQAbstractUndoItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractUndoItem[] = {
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
class Q_DECL_EXPORT MyQAbstractUndoItem : public QAbstractUndoItem {
public:
  virtual ~MyQAbstractUndoItem() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void undo()
  virtual void undo()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"undo", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractUndoItem::undo();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void redo()
  virtual void redo()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"redo", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractUndoItem::redo();
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractundoitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:86
// [-2] void ~QAbstractUndoItem() 
// (11)qm344714085 (26)_ZN17QAbstractUndoItemD2Ev
/*void qm344714085 (void *this_)*/ {
  delete (QAbstractUndoItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractundoitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
