//  header block begin

// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractUndoItem is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:87
// [-2] void undo()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:88
// [-2] void redo()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:86
// [-2] void ~QAbstractUndoItem()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractUndoItemD2Ev(void *this_) {
  delete (QAbstractUndoItem*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:87
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractUndoItem4undoEv(void *this_) {
  ((QAbstractUndoItem*)this_)->undo();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:88
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN17QAbstractUndoItem4redoEv(void *this_) {
  ((QAbstractUndoItem*)this_)->redo();
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
