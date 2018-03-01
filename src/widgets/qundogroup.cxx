//  header block begin
// /usr/include/qt/QtWidgets/qundogroup.h
#ifndef protected
#define protected public
#endif
#include <qundogroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoGroup is pure virtual: false
// QUndoGroup has virtual projected: false
//  header block end

//  main block begin

class MyQUndoGroup : public QUndoGroup {
public:
  virtual ~MyQUndoGroup() {}
// void QUndoGroup(class QObject *)
MyQUndoGroup(QObject * parent) : QUndoGroup(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup10metaObjectEv(void *this_) {
  return (void*)((QUndoGroup*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:61
// [-2] void QUndoGroup(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoGroupC2EP7QObject(QObject * parent) {
  return  new QUndoGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:62
// [-2] void ~QUndoGroup()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroupD2Ev(void *this_) {
  delete (QUndoGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:64
// [-2] void addStack(class QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup8addStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->addStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:65
// [-2] void removeStack(class QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup11removeStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->removeStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:67
// [8] QUndoStack * activeStack()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup11activeStackEv(void *this_) {
  return (void*)((QUndoGroup*)this_)->activeStack();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:70
// [8] QAction * createUndoAction(class QObject *, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoGroup*)this_)->createUndoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:72
// [8] QAction * createRedoAction(class QObject *, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoGroup*)this_)->createRedoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:75
// [1] bool canUndo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7canUndoEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->canUndo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:76
// [1] bool canRedo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7canRedoEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->canRedo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:77
// [8] QString undoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup8undoTextEv(void *this_) {
  auto rv = ((QUndoGroup*)this_)->undoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:78
// [8] QString redoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoGroup8redoTextEv(void *this_) {
  auto rv = ((QUndoGroup*)this_)->redoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:79
// [1] bool isClean()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoGroup7isCleanEv(void *this_) {
  return (bool)((QUndoGroup*)this_)->isClean();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:82
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup4undoEv(void *this_) {
  ((QUndoGroup*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:83
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup4redoEv(void *this_) {
  ((QUndoGroup*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:84
// [-2] void setActiveStack(class QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14setActiveStackEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->setActiveStack(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:87
// [-2] void activeStackChanged(class QUndoStack *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup18activeStackChangedEP10QUndoStack(void *this_, QUndoStack * stack) {
  ((QUndoGroup*)this_)->activeStackChanged(stack);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:88
// [-2] void indexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup12indexChangedEi(void *this_, int idx) {
  ((QUndoGroup*)this_)->indexChanged(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:89
// [-2] void cleanChanged(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup12cleanChangedEb(void *this_, bool clean) {
  ((QUndoGroup*)this_)->cleanChanged(clean);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:90
// [-2] void canUndoChanged(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoGroup*)this_)->canUndoChanged(canUndo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:91
// [-2] void canRedoChanged(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoGroup*)this_)->canRedoChanged(canRedo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:92
// [-2] void undoTextChanged(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup15undoTextChangedERK7QString(void *this_, QString* undoText) {
  ((QUndoGroup*)this_)->undoTextChanged(*undoText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:93
// [-2] void redoTextChanged(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoGroup15redoTextChangedERK7QString(void *this_, QString* redoText) {
  ((QUndoGroup*)this_)->redoTextChanged(*redoText);
}

//  main block end
