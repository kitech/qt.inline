//  header block begin
// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractUndoItem is pure virtual: true
// QAbstractUndoItem has virtual projected: false
//  header block end

//  main block begin

class MyQAbstractUndoItem : public QAbstractUndoItem {
public:
  virtual ~MyQAbstractUndoItem() {}
};

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
