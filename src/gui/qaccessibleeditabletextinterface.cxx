//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleEditableTextInterface is pure virtual: true
// QAccessibleEditableTextInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleEditableTextInterface_t {
  QByteArrayData data[1];
  char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleEditableTextInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleEditableTextInterface_t qt_meta_stringdata_MyQAccessibleEditableTextInterface = {
   {
  QT_MOC_LITERAL(0, 0, 34), // "MyQAccessibleEditableTextInterface"
  },
  "MyQAccessibleEditableTextInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleEditableTextInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleEditableTextInterface : public QAccessibleEditableTextInterface {
public:
  virtual ~MyQAccessibleEditableTextInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void deleteText(int, int)
  virtual void deleteText(int startOffset, int endOffset)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deleteText", &handled, 2, (uint64_t)startOffset, (uint64_t)endOffset, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleEditableTextInterface::deleteText(startOffset, endOffset);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void insertText(int, const QString &)
  virtual void insertText(int offset, const QString & text)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"insertText", &handled, 2, (uint64_t)offset, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleEditableTextInterface::insertText(offset, text);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void replaceText(int, int, const QString &)
  virtual void replaceText(int startOffset, int endOffset, const QString & text)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"replaceText", &handled, 3, (uint64_t)startOffset, (uint64_t)endOffset, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleEditableTextInterface::replaceText(startOffset, endOffset, text);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:558
// [-2] void deleteText(int, int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:559
// [-2] void insertText(int, const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:560
// [-2] void replaceText(int, int, const QString &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:556
// [-2] void ~QAccessibleEditableTextInterface()
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleEditableTextInterfaceD2Ev(void *this_) {
  delete (QAccessibleEditableTextInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:558
// [-2] void deleteText(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleEditableTextInterface10deleteTextEii(void *this_, int startOffset, int endOffset) {
  ((QAccessibleEditableTextInterface*)this_)->deleteText(startOffset, endOffset);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:559
// [-2] void insertText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleEditableTextInterface10insertTextEiRK7QString(void *this_, int offset, QString* text) {
  ((QAccessibleEditableTextInterface*)this_)->insertText(offset, *text);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:560
// [-2] void replaceText(int, int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN32QAccessibleEditableTextInterface11replaceTextEiiRK7QString(void *this_, int startOffset, int endOffset, QString* text) {
  ((QAccessibleEditableTextInterface*)this_)->replaceText(startOffset, endOffset, *text);
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
