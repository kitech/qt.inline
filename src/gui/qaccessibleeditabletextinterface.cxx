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

class Q_DECL_EXPORT MyQAccessibleEditableTextInterface : public QAccessibleEditableTextInterface {
public:
  virtual ~MyQAccessibleEditableTextInterface() {}
};

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
