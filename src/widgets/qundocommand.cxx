//  header block begin
// /usr/include/qt/QtWidgets/qundostack.h
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoCommand is pure virtual: false
// QUndoCommand has virtual projected: false
//  header block end

//  main block begin

class MyQUndoCommand : public QUndoCommand {
public:
  virtual ~MyQUndoCommand() {}
// void QUndoCommand(class QUndoCommand *)
MyQUndoCommand(QUndoCommand * parent) : QUndoCommand(parent) {}
// void QUndoCommand(const class QString &, class QUndoCommand *)
MyQUndoCommand(const QString & text, QUndoCommand * parent) : QUndoCommand(text, parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:60
// [-2] void QUndoCommand(class QUndoCommand *)
extern "C"
void* C_ZN12QUndoCommandC2EPS_(QUndoCommand * parent) {
  return  new QUndoCommand(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:61
// [-2] void QUndoCommand(const class QString &, class QUndoCommand *)
extern "C"
void* C_ZN12QUndoCommandC2ERK7QStringPS_(QString* text, QUndoCommand * parent) {
  return  new QUndoCommand(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:62
// [-2] void ~QUndoCommand()
extern "C"
void C_ZN12QUndoCommandD2Ev(void *this_) {
  delete (QUndoCommand*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:64
// [-2] void undo()
extern "C"
void C_ZN12QUndoCommand4undoEv(void *this_) {
  ((QUndoCommand*)this_)->undo();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:65
// [-2] void redo()
extern "C"
void C_ZN12QUndoCommand4redoEv(void *this_) {
  ((QUndoCommand*)this_)->redo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:67
// [8] QString text()
extern "C"
void* C_ZNK12QUndoCommand4textEv(void *this_) {
  auto rv = ((QUndoCommand*)this_)->text();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:68
// [8] QString actionText()
extern "C"
void* C_ZNK12QUndoCommand10actionTextEv(void *this_) {
  auto rv = ((QUndoCommand*)this_)->actionText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:69
// [-2] void setText(const class QString &)
extern "C"
void C_ZN12QUndoCommand7setTextERK7QString(void *this_, QString* text) {
  ((QUndoCommand*)this_)->setText(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:71
// [1] bool isObsolete()
extern "C"
bool C_ZNK12QUndoCommand10isObsoleteEv(void *this_) {
  return (bool)((QUndoCommand*)this_)->isObsolete();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:72
// [-2] void setObsolete(_Bool)
extern "C"
void C_ZN12QUndoCommand11setObsoleteEb(void *this_, bool obsolete) {
  ((QUndoCommand*)this_)->setObsolete(obsolete);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:74
// [4] int id()
extern "C"
int C_ZNK12QUndoCommand2idEv(void *this_) {
  return (int)((QUndoCommand*)this_)->id();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:75
// [1] bool mergeWith(const class QUndoCommand *)
extern "C"
bool C_ZN12QUndoCommand9mergeWithEPKS_(void *this_, const QUndoCommand * other) {
  return (bool)((QUndoCommand*)this_)->mergeWith(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:77
// [4] int childCount()
extern "C"
int C_ZNK12QUndoCommand10childCountEv(void *this_) {
  return (int)((QUndoCommand*)this_)->childCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:78
// [8] const QUndoCommand * child(int)
extern "C"
void* C_ZNK12QUndoCommand5childEi(void *this_, int index) {
  return (void*)((QUndoCommand*)this_)->child(index);
}
//  main block end
