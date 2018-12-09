//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextInterface is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:525
// [-2] void selection(int, int *, int *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:526
// [4] int selectionCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:527
// [-2] void addSelection(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:528
// [-2] void removeSelection(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:529
// [-2] void setSelection(int, int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:532
// [4] int cursorPosition()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:533
// [-2] void setCursorPosition(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:536
// [8] QString text(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:543
// [4] int characterCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:546
// [16] QRect characterRect(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:547
// [4] int offsetAtPoint(const QPoint &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:549
// [-2] void scrollToSubstring(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:550
// [8] QString attributes(int, int *, int *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:523
// [-2] void ~QAccessibleTextInterface()
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterfaceD2Ev(void *this_) {
  delete (QAccessibleTextInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:525
// [-2] void selection(int, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK24QAccessibleTextInterface9selectionEiPiS0_(void *this_, int selectionIndex, int * startOffset, int * endOffset) {
  ((QAccessibleTextInterface*)this_)->selection(selectionIndex, startOffset, endOffset);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:526
// [4] int selectionCount()
extern "C" Q_DECL_EXPORT
int C_ZNK24QAccessibleTextInterface14selectionCountEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->selectionCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:527
// [-2] void addSelection(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterface12addSelectionEii(void *this_, int startOffset, int endOffset) {
  ((QAccessibleTextInterface*)this_)->addSelection(startOffset, endOffset);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:528
// [-2] void removeSelection(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterface15removeSelectionEi(void *this_, int selectionIndex) {
  ((QAccessibleTextInterface*)this_)->removeSelection(selectionIndex);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:529
// [-2] void setSelection(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterface12setSelectionEiii(void *this_, int selectionIndex, int startOffset, int endOffset) {
  ((QAccessibleTextInterface*)this_)->setSelection(selectionIndex, startOffset, endOffset);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:532
// [4] int cursorPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK24QAccessibleTextInterface14cursorPositionEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->cursorPosition();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:533
// [-2] void setCursorPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterface17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextInterface*)this_)->setCursorPosition(position);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:536
// [8] QString text(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface4textEii(void *this_, int startOffset, int endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->text(startOffset, endOffset);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:537
// [8] QString textBeforeOffset(int, QAccessible::TextBoundaryType, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface16textBeforeOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textBeforeOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:539
// [8] QString textAfterOffset(int, QAccessible::TextBoundaryType, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface15textAfterOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textAfterOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:541
// [8] QString textAtOffset(int, QAccessible::TextBoundaryType, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface12textAtOffsetEiN11QAccessible16TextBoundaryTypeEPiS2_(void *this_, int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->textAtOffset(offset, boundaryType, startOffset, endOffset);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:543
// [4] int characterCount()
extern "C" Q_DECL_EXPORT
int C_ZNK24QAccessibleTextInterface14characterCountEv(void *this_) {
  return (int)((QAccessibleTextInterface*)this_)->characterCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:546
// [16] QRect characterRect(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface13characterRectEi(void *this_, int offset) {
  auto rv = ((QAccessibleTextInterface*)this_)->characterRect(offset);
return new QRect(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:547
// [4] int offsetAtPoint(const QPoint &)
extern "C" Q_DECL_EXPORT
int C_ZNK24QAccessibleTextInterface13offsetAtPointERK6QPoint(void *this_, QPoint* point) {
  return (int)((QAccessibleTextInterface*)this_)->offsetAtPoint(*point);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:549
// [-2] void scrollToSubstring(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QAccessibleTextInterface17scrollToSubstringEii(void *this_, int startIndex, int endIndex) {
  ((QAccessibleTextInterface*)this_)->scrollToSubstring(startIndex, endIndex);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:550
// [8] QString attributes(int, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAccessibleTextInterface10attributesEiPiS0_(void *this_, int offset, int * startOffset, int * endOffset) {
  auto rv = ((QAccessibleTextInterface*)this_)->attributes(offset, startOffset, endOffset);
return new QString(rv);
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
