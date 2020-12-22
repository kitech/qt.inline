//  header block begin

// /usr/include/qt/QtCore/qdiriterator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdiriterator.h>
#include <QtCore>
#include "callback_inherit.h"

// QDirIterator is pure virtual: false false
// QDirIterator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDirIterator_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDirIterator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDirIterator_t qt_meta_stringdata_MyQDirIterator = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQDirIterator"
  },
  "MyQDirIterator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDirIterator[] = {
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
class Q_DECL_EXPORT MyQDirIterator : public QDirIterator {
public:
  virtual ~MyQDirIterator() {}
// void QDirIterator(const QDir &, QDirIterator::IteratorFlags)
MyQDirIterator(const QDir & dir, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(dir, flags) {}
// void QDirIterator(const QString &, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, flags) {}
// void QDirIterator(const QString &, QDir::Filters, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, filter, flags) {}
// void QDirIterator(const QString &, const QStringList &, QDir::Filters, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, nameFilters, filters, flags) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdiriterator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:58
// [-2] void QDirIterator(const QDir &, QDirIterator::IteratorFlags) 
// (12)qm1354450444 (54)_ZN12QDirIteratorC2ERK4QDir6QFlagsINS_12IteratorFlagEE
/*void* qm1354450444(const QDir & dir, QFlags<QDirIterator::IteratorFlag> flags)*/{
  const QDir & dir = *(const QDir *)this_; QFlags<QDirIterator::IteratorFlag> flags = *(QFlags<QDirIterator::IteratorFlag>*)this_;
  this_ =  new QDirIterator(dir, flags);
  this_ =  new MyQDirIterator(dir, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:59
// [-2] void QDirIterator(const QString &, QDirIterator::IteratorFlags) 
// (12)qm1725676815 (57)_ZN12QDirIteratorC2ERK7QString6QFlagsINS_12IteratorFlagEE
/*void* qm1725676815(const QString & path, QFlags<QDirIterator::IteratorFlag> flags)*/{
  const QString & path = *(const QString *)this_; QFlags<QDirIterator::IteratorFlag> flags = *(QFlags<QDirIterator::IteratorFlag>*)this_;
  this_ =  new QDirIterator(path, flags);
  this_ =  new MyQDirIterator(path, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:61
// [-2] void QDirIterator(const QString &, QDir::Filters, QDirIterator::IteratorFlags) 
// (11)qm617338556 (76)_ZN12QDirIteratorC2ERK7QString6QFlagsIN4QDir6FilterEES3_INS_12IteratorFlagEE
/*void* qm617338556(const QString & path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags)*/{
  const QString & path = *(const QString *)this_; QFlags<QDir::Filter> filter = *(QFlags<QDir::Filter>*)this_; QFlags<QDirIterator::IteratorFlag> flags = *(QFlags<QDirIterator::IteratorFlag>*)this_;
  this_ =  new QDirIterator(path, filter, flags);
  this_ =  new MyQDirIterator(path, filter, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:64
// [-2] void QDirIterator(const QString &, const QStringList &, QDir::Filters, QDirIterator::IteratorFlags) 
// (12)qm4179458587 (91)_ZN12QDirIteratorC2ERK7QStringRK11QStringList6QFlagsIN4QDir6FilterEES6_INS_12IteratorFlagEE
/*void* qm4179458587(const QString & path, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags)*/{
  const QString & path = *(const QString *)this_; const QStringList & nameFilters = *(const QStringList *)this_; QFlags<QDir::Filter> filters = *(QFlags<QDir::Filter>*)this_; QFlags<QDirIterator::IteratorFlag> flags = *(QFlags<QDirIterator::IteratorFlag>*)this_;
  this_ =  new QDirIterator(path, nameFilters, filters, flags);
  this_ =  new MyQDirIterator(path, nameFilters, filters, flags);
}


/*void C_ZN12QDirIteratorD2Ev(void *this_)*/ {
  delete (QDirIterator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdiriterator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
