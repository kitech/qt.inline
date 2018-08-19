//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoStack is pure virtual: false
// QUndoStack has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQUndoStack : public QUndoStack {
public:
  virtual ~MyQUndoStack() {}
// void QUndoStack(QObject *)
MyQUndoStack(QObject * parent) : QUndoStack(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack10metaObjectEv(void *this_) {
  return (void*)((QUndoStack*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QUndoStack*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QUndoStack11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QUndoStack*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoStack::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStack6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QUndoStack::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:95
// [-2] void QUndoStack(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QUndoStackC2EP7QObject(QObject * parent) {
  return  new QUndoStack(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:96
// [-2] void ~QUndoStack()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStackD2Ev(void *this_) {
  delete (QUndoStack*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:97
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack5clearEv(void *this_) {
  ((QUndoStack*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:99
// [-2] void push(QUndoCommand *)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4pushEP12QUndoCommand(void *this_, QUndoCommand * cmd) {
  ((QUndoStack*)this_)->push(cmd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:101
// [1] bool canUndo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7canUndoEv(void *this_) {
  return (bool)((QUndoStack*)this_)->canUndo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:102
// [1] bool canRedo()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7canRedoEv(void *this_) {
  return (bool)((QUndoStack*)this_)->canRedo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:103
// [8] QString undoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack8undoTextEv(void *this_) {
  auto rv = ((QUndoStack*)this_)->undoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:104
// [8] QString redoText()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack8redoTextEv(void *this_) {
  auto rv = ((QUndoStack*)this_)->redoText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:106
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack5countEv(void *this_) {
  return (int)((QUndoStack*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:107
// [4] int index()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack5indexEv(void *this_) {
  return (int)((QUndoStack*)this_)->index();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:108
// [8] QString text(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack4textEi(void *this_, int idx) {
  auto rv = ((QUndoStack*)this_)->text(idx);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:111
// [8] QAction * createUndoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack16createUndoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoStack*)this_)->createUndoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:113
// [8] QAction * createRedoAction(QObject *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack16createRedoActionEP7QObjectRK7QString(void *this_, QObject * parent, QString* prefix) {
  return (void*)((QUndoStack*)this_)->createRedoAction(parent, *prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:117
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack8isActiveEv(void *this_) {
  return (bool)((QUndoStack*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:118
// [1] bool isClean()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QUndoStack7isCleanEv(void *this_) {
  return (bool)((QUndoStack*)this_)->isClean();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:119
// [4] int cleanIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack10cleanIndexEv(void *this_) {
  return (int)((QUndoStack*)this_)->cleanIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:121
// [-2] void beginMacro(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack10beginMacroERK7QString(void *this_, QString* text) {
  ((QUndoStack*)this_)->beginMacro(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:122
// [-2] void endMacro()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8endMacroEv(void *this_) {
  ((QUndoStack*)this_)->endMacro();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:124
// [-2] void setUndoLimit(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12setUndoLimitEi(void *this_, int limit) {
  ((QUndoStack*)this_)->setUndoLimit(limit);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:125
// [4] int undoLimit()
extern "C" Q_DECL_EXPORT
int C_ZNK10QUndoStack9undoLimitEv(void *this_) {
  return (int)((QUndoStack*)this_)->undoLimit();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qundostack.h:127
// [8] const QUndoCommand * command(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK10QUndoStack7commandEi(void *this_, int index) {
  return (void*)((QUndoStack*)this_)->command(index);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:130
// [-2] void setClean()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8setCleanEv(void *this_) {
  ((QUndoStack*)this_)->setClean();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qundostack.h:131
// [-2] void resetClean()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack10resetCleanEv(void *this_) {
  ((QUndoStack*)this_)->resetClean();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:132
// [-2] void setIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack8setIndexEi(void *this_, int idx) {
  ((QUndoStack*)this_)->setIndex(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:133
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4undoEv(void *this_) {
  ((QUndoStack*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:134
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack4redoEv(void *this_) {
  ((QUndoStack*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:135
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack9setActiveEb(void *this_, bool active) {
  ((QUndoStack*)this_)->setActive(active);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:138
// [-2] void indexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12indexChangedEi(void *this_, int idx) {
  ((QUndoStack*)this_)->indexChanged(idx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:139
// [-2] void cleanChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack12cleanChangedEb(void *this_, bool clean) {
  ((QUndoStack*)this_)->cleanChanged(clean);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:140
// [-2] void canUndoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack14canUndoChangedEb(void *this_, bool canUndo) {
  ((QUndoStack*)this_)->canUndoChanged(canUndo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:141
// [-2] void canRedoChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack14canRedoChangedEb(void *this_, bool canRedo) {
  ((QUndoStack*)this_)->canRedoChanged(canRedo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:142
// [-2] void undoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack15undoTextChangedERK7QString(void *this_, QString* undoText) {
  ((QUndoStack*)this_)->undoTextChanged(*undoText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:143
// [-2] void redoTextChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QUndoStack15redoTextChangedERK7QString(void *this_, QString* redoText) {
  ((QUndoStack*)this_)->redoTextChanged(*redoText);
}

//  main block end
