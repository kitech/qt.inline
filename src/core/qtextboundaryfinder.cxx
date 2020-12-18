//  header block begin

// /usr/include/qt/QtCore/qtextboundaryfinder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextboundaryfinder.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextBoundaryFinder is pure virtual: false false
// QTextBoundaryFinder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBoundaryFinder_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBoundaryFinder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBoundaryFinder_t qt_meta_stringdata_MyQTextBoundaryFinder = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQTextBoundaryFinder"
  },
  "MyQTextBoundaryFinder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBoundaryFinder[] = {
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
class Q_DECL_EXPORT MyQTextBoundaryFinder : public QTextBoundaryFinder {
public:
  virtual ~MyQTextBoundaryFinder() {}
// void QTextBoundaryFinder()
MyQTextBoundaryFinder() : QTextBoundaryFinder() {}
// void QTextBoundaryFinder(const QTextBoundaryFinder &)
MyQTextBoundaryFinder(const QTextBoundaryFinder & other) : QTextBoundaryFinder(other) {}
// void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QString &)
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type_, const QString & string) : QTextBoundaryFinder(type_, string) {}
// void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QChar *, int, unsigned char *, int)
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type_, const QChar * chars, int length, unsigned char * buffer, int bufferSize) : QTextBoundaryFinder(type_, chars, length, buffer, bufferSize) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextboundaryfinder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:79
// [1] bool isValid() const
// (12)qm1082050014 (35)_ZNK19QTextBoundaryFinder7isValidEv
//static
/*void qm1082050014()*/ {
  ;
  (void) ((QTextBoundaryFinder*)this_)->isValid();
   auto xptr = (bool (QTextBoundaryFinder::*)() const ) &QTextBoundaryFinder::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:81
// [4] QTextBoundaryFinder::BoundaryType type() const
// (11)qm582912656 (32)_ZNK19QTextBoundaryFinder4typeEv
//static
/*void qm582912656()*/ {
  ;
  (void) ((QTextBoundaryFinder*)this_)->type();
   auto xptr = (QTextBoundaryFinder::BoundaryType (QTextBoundaryFinder::*)() const ) &QTextBoundaryFinder::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QTextBoundaryFinderD2Ev(void *this_)*/ {
  delete (QTextBoundaryFinder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextboundaryfinder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
