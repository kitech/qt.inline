//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undocommand)
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoCommand is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundocommand(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN12QUndoCommandD2Ev(void *this_)*/ {
  delete (QUndoCommand*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundocommand
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
