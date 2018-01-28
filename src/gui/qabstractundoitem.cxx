//  header block begin
// /usr/include/qt/QtGui/qtextdocument.h
#include <qtextdocument.h>
#include <QtGui>

// QAbstractUndoItem is pure virtual: true
//  header block end

//  main block begin

class MyQAbstractUndoItem : public QAbstractUndoItem {
public:
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:86
// [-2] void ~QAbstractUndoItem()
extern "C"
void C_ZN17QAbstractUndoItemD1Ev(void *this_) {
  delete (QAbstractUndoItem*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:87
// [-2] void undo()
extern "C"
void C_ZN17QAbstractUndoItem4undoEv(void *this_) {
  ((QAbstractUndoItem*)this_)->undo();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:88
// [-2] void redo()
extern "C"
void C_ZN17QAbstractUndoItem4redoEv(void *this_) {
  ((QAbstractUndoItem*)this_)->redo();
}
//  main block end
