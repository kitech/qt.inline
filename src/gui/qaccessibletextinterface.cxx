//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextInterface is pure virtual: true true
// QAccessibleTextInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTextInterface_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextInterface_t qt_meta_stringdata_MyQAccessibleTextInterface = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQAccessibleTextInterface"
  },
  "MyQAccessibleTextInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextInterface : public QAccessibleTextInterface {
public:
  virtual ~MyQAccessibleTextInterface() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void selection(int, int *, int *)
  virtual void selection(int selectionIndex, int * startOffset, int * endOffset) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selection", &handled, 3, (uint64_t)selectionIndex, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::selection(selectionIndex, startOffset, endOffset);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int selectionCount()
  virtual int selectionCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void addSelection(int, int)
  virtual void addSelection(int startOffset, int endOffset)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addSelection", &handled, 2, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::addSelection(startOffset, endOffset);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void removeSelection(int)
  virtual void removeSelection(int selectionIndex)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"removeSelection", &handled, 1, (uint64_t)selectionIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::removeSelection(selectionIndex);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setSelection(int, int, int)
  virtual void setSelection(int selectionIndex, int startOffset, int endOffset)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 3, (uint64_t)selectionIndex, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::setSelection(selectionIndex, startOffset, endOffset);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int cursorPosition()
  virtual int cursorPosition() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cursorPosition", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setCursorPosition(int)
  virtual void setCursorPosition(int position)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCursorPosition", &handled, 1, (uint64_t)position, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::setCursorPosition(position);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString text(int, int)
  virtual QString text(int startOffset, int endOffset) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"text", &handled, 2, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int characterCount()
  virtual int characterCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"characterCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QRect characterRect(int)
  virtual QRect characterRect(int offset) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"characterRect", &handled, 1, (uint64_t)offset, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRect){};}
    auto prv = (QRect*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRect
    } else {
    return (QRect){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int offsetAtPoint(const QPoint &)
  virtual int offsetAtPoint(const QPoint & point) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"offsetAtPoint", &handled, 1, (uint64_t)&point, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollToSubstring(int, int)
  virtual void scrollToSubstring(int startIndex, int endIndex)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollToSubstring", &handled, 2, (uint64_t)startIndex, (uint64_t)endIndex, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleTextInterface::scrollToSubstring(startIndex, endIndex);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString attributes(int, int *, int *)
  virtual QString attributes(int offset, int * startOffset, int * endOffset) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"attributes", &handled, 3, (uint64_t)offset, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN24QAccessibleTextInterfaceD2Ev(void *this_)*/ {
  delete (QAccessibleTextInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
