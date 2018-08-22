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
