//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStreamManipulator is pure virtual: false
// QTextStreamManipulator has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextStreamManipulator_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextStreamManipulator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextStreamManipulator_t qt_meta_stringdata_MyQTextStreamManipulator = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQTextStreamManipulator"
  },
  "MyQTextStreamManipulator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextStreamManipulator[] = {
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
class Q_DECL_EXPORT MyQTextStreamManipulator : public QTextStreamManipulator {
public:
  virtual ~MyQTextStreamManipulator() {}
// void QTextStreamManipulator(QTSMFI, int)
MyQTextStreamManipulator(QTSMFI m, int a) : QTextStreamManipulator(m, a) {}
// void QTextStreamManipulator(QTSMFC, QChar)
MyQTextStreamManipulator(QTSMFC m, QChar c) : QTextStreamManipulator(m, c) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:215
// [-2] void QTextStreamManipulator(QTSMFI, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QTextStreamManipulatorC2EM11QTextStreamFviEi(QTSMFI m, int a) {
  return  new QTextStreamManipulator(m, a);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:216
// [-2] void QTextStreamManipulator(QTSMFC, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN22QTextStreamManipulatorC2EM11QTextStreamFv5QCharES1_(QTSMFC m, QChar* c) {
  return  new QTextStreamManipulator(m, *c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:217
// [-2] void exec(QTextStream &)
extern "C" Q_DECL_EXPORT
void C_ZN22QTextStreamManipulator4execER11QTextStream(void *this_, QTextStream* s) {
  ((QTextStreamManipulator*)this_)->exec(*s);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QTextStreamManipulatorD2Ev(void *this_) {
  delete (QTextStreamManipulator*)(this_);
}
//  main block end
