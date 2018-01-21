//  header block begin
// /usr/include/qt/QtWidgets/qundostack.h
#include <qundostack.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qundostack.h:60
// void QUndoCommand(class QUndoCommand *)
extern "C"
void* C_ZN12QUndoCommandC1EPS_(QUndoCommand * parent) {
  return new QUndoCommand(parent);
}
// /usr/include/qt/QtWidgets/qundostack.h:61
// void QUndoCommand(const class QString &, class QUndoCommand *)
extern "C"
void* C_ZN12QUndoCommandC1ERK7QStringPS_(const QString & text, QUndoCommand * parent) {
  return new QUndoCommand(text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:62
// void ~QUndoCommand()
extern "C"
void C_ZN12QUndoCommandD1Ev(void *this_) {
  delete (QUndoCommand*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:64
// void undo()
extern "C"
void C_ZN12QUndoCommand4undoEv(void *this_) {
  ((QUndoCommand*)this_)->undo();
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:65
// void redo()
extern "C"
void C_ZN12QUndoCommand4redoEv(void *this_) {
  ((QUndoCommand*)this_)->redo();
}
// /usr/include/qt/QtWidgets/qundostack.h:67
// QString text()
extern "C"
void C_ZNK12QUndoCommand4textEv(void *this_) {
  /*return*/ ((QUndoCommand*)this_)->text();
}
// /usr/include/qt/QtWidgets/qundostack.h:68
// QString actionText()
extern "C"
void C_ZNK12QUndoCommand10actionTextEv(void *this_) {
  /*return*/ ((QUndoCommand*)this_)->actionText();
}
// /usr/include/qt/QtWidgets/qundostack.h:69
// void setText(const class QString &)
extern "C"
void C_ZN12QUndoCommand7setTextERK7QString(void *this_, const QString & text) {
  ((QUndoCommand*)this_)->setText(text);
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:71
// int id()
extern "C"
void C_ZNK12QUndoCommand2idEv(void *this_) {
  /*return*/ ((QUndoCommand*)this_)->id();
}
// virtual
// /usr/include/qt/QtWidgets/qundostack.h:72
// bool mergeWith(const class QUndoCommand *)
extern "C"
void C_ZN12QUndoCommand9mergeWithEPKS_(void *this_, const QUndoCommand * other) {
  /*return*/ ((QUndoCommand*)this_)->mergeWith(other);
}
// /usr/include/qt/QtWidgets/qundostack.h:74
// int childCount()
extern "C"
void C_ZNK12QUndoCommand10childCountEv(void *this_) {
  /*return*/ ((QUndoCommand*)this_)->childCount();
}
// /usr/include/qt/QtWidgets/qundostack.h:75
// const QUndoCommand * child(int)
extern "C"
void C_ZNK12QUndoCommand5childEi(void *this_, int index) {
  /*return*/ ((QUndoCommand*)this_)->child(index);
}
//  main block end
