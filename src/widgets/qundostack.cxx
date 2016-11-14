// /usr/include/qt/QtWidgets/qundostack.h
#include <qundostack.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qundostack.h:88
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QUndoStack10metaObjectEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qundostack.h:94
// void QUndoStack(class QObject *)
extern "C"
void* C_ZN10QUndoStackC1EP7QObject(QObject * parent) {
  return new QUndoStack(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:95
// void ~QUndoStack()
extern "C"
void C_ZN10QUndoStackD1Ev(void *this_) {
  delete (QUndoStack*)(this_);
}
// /usr/include/qt/QtWidgets/qundostack.h:96
// void clear()
extern "C"
void C_ZN10QUndoStack5clearEv(void *this_) {
  ((QUndoStack*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qundostack.h:98
// void push(class QUndoCommand *)
extern "C"
void C_ZN10QUndoStack4pushEP12QUndoCommand(void *this_, QUndoCommand * cmd) {
  ((QUndoStack*)this_)->push(cmd);
}
// /usr/include/qt/QtWidgets/qundostack.h:100
// bool canUndo()
extern "C"
void C_ZNK10QUndoStack7canUndoEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->canUndo();
}
// /usr/include/qt/QtWidgets/qundostack.h:101
// bool canRedo()
extern "C"
void C_ZNK10QUndoStack7canRedoEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->canRedo();
}
// /usr/include/qt/QtWidgets/qundostack.h:102
// QString undoText()
extern "C"
void C_ZNK10QUndoStack8undoTextEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->undoText();
}
// /usr/include/qt/QtWidgets/qundostack.h:103
// QString redoText()
extern "C"
void C_ZNK10QUndoStack8redoTextEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->redoText();
}
// /usr/include/qt/QtWidgets/qundostack.h:105
// int count()
extern "C"
void C_ZNK10QUndoStack5countEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->count();
}
// /usr/include/qt/QtWidgets/qundostack.h:106
// int index()
extern "C"
void C_ZNK10QUndoStack5indexEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->index();
}
// /usr/include/qt/QtWidgets/qundostack.h:107
// QString text(int)
extern "C"
void C_ZNK10QUndoStack4textEi(void *this_, int idx) {
  /*return*/ ((QUndoStack*)this_)->text(idx);
}
// /usr/include/qt/QtWidgets/qundostack.h:110
// QAction * createUndoAction(class QObject *, const class QString &)
extern "C"
void C_ZNK10QUndoStack16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, const QString & prefix) {
  /*return*/ ((QUndoStack*)this_)->createUndoAction(parent, prefix);
}
// /usr/include/qt/QtWidgets/qundostack.h:112
// QAction * createRedoAction(class QObject *, const class QString &)
extern "C"
void C_ZNK10QUndoStack16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, const QString & prefix) {
  /*return*/ ((QUndoStack*)this_)->createRedoAction(parent, prefix);
}
// /usr/include/qt/QtWidgets/qundostack.h:116
// bool isActive()
extern "C"
void C_ZNK10QUndoStack8isActiveEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->isActive();
}
// /usr/include/qt/QtWidgets/qundostack.h:117
// bool isClean()
extern "C"
void C_ZNK10QUndoStack7isCleanEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->isClean();
}
// /usr/include/qt/QtWidgets/qundostack.h:118
// int cleanIndex()
extern "C"
void C_ZNK10QUndoStack10cleanIndexEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->cleanIndex();
}
// /usr/include/qt/QtWidgets/qundostack.h:120
// void beginMacro(const class QString &)
extern "C"
void C_ZN10QUndoStack10beginMacroERK7QString(void *this_, const QString & text) {
  ((QUndoStack*)this_)->beginMacro(text);
}
// /usr/include/qt/QtWidgets/qundostack.h:121
// void endMacro()
extern "C"
void C_ZN10QUndoStack8endMacroEv(void *this_) {
  ((QUndoStack*)this_)->endMacro();
}
// /usr/include/qt/QtWidgets/qundostack.h:123
// void setUndoLimit(int)
extern "C"
void C_ZN10QUndoStack12setUndoLimitEi(void *this_, int limit) {
  ((QUndoStack*)this_)->setUndoLimit(limit);
}
// /usr/include/qt/QtWidgets/qundostack.h:124
// int undoLimit()
extern "C"
void C_ZNK10QUndoStack9undoLimitEv(void *this_) {
  /*return*/ ((QUndoStack*)this_)->undoLimit();
}
// /usr/include/qt/QtWidgets/qundostack.h:126
// const QUndoCommand * command(int)
extern "C"
void C_ZNK10QUndoStack7commandEi(void *this_, int index) {
  /*return*/ ((QUndoStack*)this_)->command(index);
}
// /usr/include/qt/QtWidgets/qundostack.h:129
// void setClean()
extern "C"
void C_ZN10QUndoStack8setCleanEv(void *this_) {
  ((QUndoStack*)this_)->setClean();
}
// /usr/include/qt/QtWidgets/qundostack.h:130
// void setIndex(int)
extern "C"
void C_ZN10QUndoStack8setIndexEi(void *this_, int idx) {
  ((QUndoStack*)this_)->setIndex(idx);
}
// /usr/include/qt/QtWidgets/qundostack.h:131
// void undo()
extern "C"
void C_ZN10QUndoStack4undoEv(void *this_) {
  ((QUndoStack*)this_)->undo();
}
// /usr/include/qt/QtWidgets/qundostack.h:132
// void redo()
extern "C"
void C_ZN10QUndoStack4redoEv(void *this_) {
  ((QUndoStack*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qundostack.h:133
// void setActive(_Bool)
extern "C"
void C_ZN10QUndoStack9setActiveEb(void *this_, bool active) {
  ((QUndoStack*)this_)->setActive(active);
}
// /usr/include/qt/QtWidgets/qundostack.h:136
// void indexChanged(int)
extern "C"
void C_ZN10QUndoStack12indexChangedEi(void *this_, int idx) {
  ((QUndoStack*)this_)->indexChanged(idx);
}
// /usr/include/qt/QtWidgets/qundostack.h:137
// void cleanChanged(_Bool)
extern "C"
void C_ZN10QUndoStack12cleanChangedEb(void *this_, bool clean) {
  ((QUndoStack*)this_)->cleanChanged(clean);
}
// /usr/include/qt/QtWidgets/qundostack.h:138
// void canUndoChanged(_Bool)
extern "C"
void C_ZN10QUndoStack14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoStack*)this_)->canUndoChanged(canUndo);
}
// /usr/include/qt/QtWidgets/qundostack.h:139
// void canRedoChanged(_Bool)
extern "C"
void C_ZN10QUndoStack14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoStack*)this_)->canRedoChanged(canRedo);
}
// /usr/include/qt/QtWidgets/qundostack.h:140
// void undoTextChanged(const class QString &)
extern "C"
void C_ZN10QUndoStack15undoTextChangedERK7QString(void *this_, const QString & undoText) {
  ((QUndoStack*)this_)->undoTextChanged(undoText);
}
// /usr/include/qt/QtWidgets/qundostack.h:141
// void redoTextChanged(const class QString &)
extern "C"
void C_ZN10QUndoStack15redoTextChangedERK7QString(void *this_, const QString & redoText) {
  ((QUndoStack*)this_)->redoTextChanged(redoText);
}