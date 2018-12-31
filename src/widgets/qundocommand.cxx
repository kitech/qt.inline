//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undocommand)
// since 0x040200
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoCommand is pure virtual: false
// QUndoCommand has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUndoCommand_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUndoCommand_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUndoCommand_t qt_meta_stringdata_MyQUndoCommand = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQUndoCommand"
  },
  "MyQUndoCommand"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUndoCommand[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQUndoCommand : public QUndoCommand {
public:
  virtual ~MyQUndoCommand() {}
// void QUndoCommand(QUndoCommand *)
MyQUndoCommand(QUndoCommand * parent) : QUndoCommand(parent) {}
// void QUndoCommand(const QString &, QUndoCommand *)
MyQUndoCommand(const QString & text, QUndoCommand * parent) : QUndoCommand(text, parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:60
// [-2] void QUndoCommand(QUndoCommand *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QUndoCommandC2EPS_(QUndoCommand * parent) {
  return  new QUndoCommand(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:61
// [-2] void QUndoCommand(const QString &, QUndoCommand *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QUndoCommandC2ERK7QStringPS_(QString* text, QUndoCommand * parent) {
  return  new QUndoCommand(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:62
// [-2] void ~QUndoCommand()
extern "C" Q_DECL_EXPORT
void C_ZN12QUndoCommandD2Ev(void *this_) {
  delete (QUndoCommand*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:64
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN12QUndoCommand4undoEv(void *this_) {
  ((QUndoCommand*)this_)->undo();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:65
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN12QUndoCommand4redoEv(void *this_) {
  ((QUndoCommand*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:67
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QUndoCommand4textEv(void *this_) {
  auto rv = ((QUndoCommand*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtWidgets/qundostack.h:68
// [8] QString actionText()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK12QUndoCommand10actionTextEv(void *this_) {
  auto rv = ((QUndoCommand*)this_)->actionText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:69
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QUndoCommand7setTextERK7QString(void *this_, QString* text) {
  ((QUndoCommand*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qundostack.h:71
// [1] bool isObsolete()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZNK12QUndoCommand10isObsoleteEv(void *this_) {
  return (bool)((QUndoCommand*)this_)->isObsolete();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtWidgets/qundostack.h:72
// [-2] void setObsolete(bool)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN12QUndoCommand11setObsoleteEb(void *this_, bool obsolete) {
  ((QUndoCommand*)this_)->setObsolete(obsolete);
}
#endif // QT_VERSION >= 0x050900

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:74
// [4] int id()
extern "C" Q_DECL_EXPORT
int C_ZNK12QUndoCommand2idEv(void *this_) {
  return (int)((QUndoCommand*)this_)->id();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:75
// [1] bool mergeWith(const QUndoCommand *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QUndoCommand9mergeWithEPKS_(void *this_, const QUndoCommand * other) {
  return (bool)((QUndoCommand*)this_)->mergeWith(other);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qundostack.h:77
// [4] int childCount()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK12QUndoCommand10childCountEv(void *this_) {
  return (int)((QUndoCommand*)this_)->childCount();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qundostack.h:78
// [8] const QUndoCommand * child(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QUndoCommand5childEi(void *this_, int index) {
  return (void*)((QUndoCommand*)this_)->child(index);
}
#endif // QT_VERSION >= 0x040400

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undocommand)
#endif // #ifndef QT_MINIMAL
//  footer block end
