// /usr/include/qt/QtWidgets/qundogroup.h
#include <qundogroup.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qundogroup.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QUndoGroup10metaObjectEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qundogroup.h:61
// void QUndoGroup(class QObject *)
extern "C"
void* C_ZN10QUndoGroupC1EP7QObject(QObject * parent) {
  return new QUndoGroup(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qundogroup.h:62
// void ~QUndoGroup()
extern "C"
void C_ZN10QUndoGroupD1Ev(void *this_) {
  delete (QUndoGroup*)(this_);
}
// /usr/include/qt/QtWidgets/qundogroup.h:64
// void addStack(class QUndoStack *)
extern "C"
void C_ZN10QUndoGroup8addStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->addStack(stack);
}
// /usr/include/qt/QtWidgets/qundogroup.h:65
// void removeStack(class QUndoStack *)
extern "C"
void C_ZN10QUndoGroup11removeStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->removeStack(stack);
}
// /usr/include/qt/QtWidgets/qundogroup.h:66
// QList<QUndoStack *> stacks()
extern "C"
void C_ZNK10QUndoGroup6stacksEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->stacks();
}
// /usr/include/qt/QtWidgets/qundogroup.h:67
// QUndoStack * activeStack()
extern "C"
void C_ZNK10QUndoGroup11activeStackEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->activeStack();
}
// /usr/include/qt/QtWidgets/qundogroup.h:70
// QAction * createUndoAction(class QObject *, const class QString &)
extern "C"
void C_ZNK10QUndoGroup16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, const QString & prefix) {
  /*return*/ ((QUndoGroup*)this_)->createUndoAction(parent, prefix);
}
// /usr/include/qt/QtWidgets/qundogroup.h:72
// QAction * createRedoAction(class QObject *, const class QString &)
extern "C"
void C_ZNK10QUndoGroup16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, const QString & prefix) {
  /*return*/ ((QUndoGroup*)this_)->createRedoAction(parent, prefix);
}
// /usr/include/qt/QtWidgets/qundogroup.h:75
// bool canUndo()
extern "C"
void C_ZNK10QUndoGroup7canUndoEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->canUndo();
}
// /usr/include/qt/QtWidgets/qundogroup.h:76
// bool canRedo()
extern "C"
void C_ZNK10QUndoGroup7canRedoEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->canRedo();
}
// /usr/include/qt/QtWidgets/qundogroup.h:77
// QString undoText()
extern "C"
void C_ZNK10QUndoGroup8undoTextEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->undoText();
}
// /usr/include/qt/QtWidgets/qundogroup.h:78
// QString redoText()
extern "C"
void C_ZNK10QUndoGroup8redoTextEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->redoText();
}
// /usr/include/qt/QtWidgets/qundogroup.h:79
// bool isClean()
extern "C"
void C_ZNK10QUndoGroup7isCleanEv(void *this_) {
  /*return*/ ((QUndoGroup*)this_)->isClean();
}
// /usr/include/qt/QtWidgets/qundogroup.h:82
// void undo()
extern "C"
void C_ZN10QUndoGroup4undoEv(void *this_) {
  ((QUndoGroup*)this_)->undo();
}
// /usr/include/qt/QtWidgets/qundogroup.h:83
// void redo()
extern "C"
void C_ZN10QUndoGroup4redoEv(void *this_) {
  ((QUndoGroup*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qundogroup.h:84
// void setActiveStack(class QUndoStack *)
extern "C"
void C_ZN10QUndoGroup14setActiveStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->setActiveStack(stack);
}
// /usr/include/qt/QtWidgets/qundogroup.h:87
// void activeStackChanged(class QUndoStack *)
extern "C"
void C_ZN10QUndoGroup18activeStackChangedEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->activeStackChanged(stack);
}
// /usr/include/qt/QtWidgets/qundogroup.h:88
// void indexChanged(int)
extern "C"
void C_ZN10QUndoGroup12indexChangedEi(void *this_, int idx) {
  ((QUndoGroup*)this_)->indexChanged(idx);
}
// /usr/include/qt/QtWidgets/qundogroup.h:89
// void cleanChanged(_Bool)
extern "C"
void C_ZN10QUndoGroup12cleanChangedEb(void *this_, bool clean) {
  ((QUndoGroup*)this_)->cleanChanged(clean);
}
// /usr/include/qt/QtWidgets/qundogroup.h:90
// void canUndoChanged(_Bool)
extern "C"
void C_ZN10QUndoGroup14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoGroup*)this_)->canUndoChanged(canUndo);
}
// /usr/include/qt/QtWidgets/qundogroup.h:91
// void canRedoChanged(_Bool)
extern "C"
void C_ZN10QUndoGroup14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoGroup*)this_)->canRedoChanged(canRedo);
}
// /usr/include/qt/QtWidgets/qundogroup.h:92
// void undoTextChanged(const class QString &)
extern "C"
void C_ZN10QUndoGroup15undoTextChangedERK7QString(void *this_, const QString & undoText) {
  ((QUndoGroup*)this_)->undoTextChanged(undoText);
}
// /usr/include/qt/QtWidgets/qundogroup.h:93
// void redoTextChanged(const class QString &)
extern "C"
void C_ZN10QUndoGroup15redoTextChangedERK7QString(void *this_, const QString & redoText) {
  ((QUndoGroup*)this_)->redoTextChanged(redoText);
}