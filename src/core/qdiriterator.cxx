//  header block begin
// /usr/include/qt/QtCore/qdiriterator.h
#include <qdiriterator.h>
#include <QtCore>
#include "callback_inherit.h"

// QDirIterator is pure virtual: false
// QDirIterator has virtual projected: false
//  header block end

//  main block begin

class MyQDirIterator : public QDirIterator {
public:
  virtual ~MyQDirIterator() {}
// void QDirIterator(const class QDir &, QDirIterator::IteratorFlags)
MyQDirIterator(const QDir & dir, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(dir, flags) {}
// void QDirIterator(const class QString &, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, flags) {}
// void QDirIterator(const class QString &, class QDir::Filters, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, filter, flags) {}
// void QDirIterator(const class QString &, const class QStringList &, class QDir::Filters, QDirIterator::IteratorFlags)
MyQDirIterator(const QString & path, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags) : QDirIterator(path, nameFilters, filters, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:58
// [-2] void QDirIterator(const class QDir &, QDirIterator::IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC2ERK4QDir6QFlagsINS_12IteratorFlagEE(QDir* dir, QFlags<QDirIterator::IteratorFlag> flags) {
  return  new QDirIterator(*dir, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:59
// [-2] void QDirIterator(const class QString &, QDirIterator::IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC2ERK7QString6QFlagsINS_12IteratorFlagEE(QString* path, QFlags<QDirIterator::IteratorFlag> flags) {
  return  new QDirIterator(*path, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:61
// [-2] void QDirIterator(const class QString &, class QDir::Filters, QDirIterator::IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC2ERK7QString6QFlagsIN4QDir6FilterEES3_INS_12IteratorFlagEE(QString* path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags) {
  return  new QDirIterator(*path, filter, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:64
// [-2] void QDirIterator(const class QString &, const class QStringList &, class QDir::Filters, QDirIterator::IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC2ERK7QStringRK11QStringList6QFlagsIN4QDir6FilterEES6_INS_12IteratorFlagEE(QString* path, QStringList* nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags) {
  return  new QDirIterator(*path, *nameFilters, filters, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:69
// [-2] void ~QDirIterator()
extern "C"
void C_ZN12QDirIteratorD2Ev(void *this_) {
  delete (QDirIterator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:71
// [8] QString next()
extern "C"
void* C_ZN12QDirIterator4nextEv(void *this_) {
  auto rv = ((QDirIterator*)this_)->next();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:72
// [1] bool hasNext()
extern "C"
bool C_ZNK12QDirIterator7hasNextEv(void *this_) {
  return (bool)((QDirIterator*)this_)->hasNext();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:74
// [8] QString fileName()
extern "C"
void* C_ZNK12QDirIterator8fileNameEv(void *this_) {
  auto rv = ((QDirIterator*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:75
// [8] QString filePath()
extern "C"
void* C_ZNK12QDirIterator8filePathEv(void *this_) {
  auto rv = ((QDirIterator*)this_)->filePath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:76
// [8] QFileInfo fileInfo()
extern "C"
void* C_ZNK12QDirIterator8fileInfoEv(void *this_) {
  auto rv = ((QDirIterator*)this_)->fileInfo();
return new QFileInfo(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:77
// [8] QString path()
extern "C"
void* C_ZNK12QDirIterator4pathEv(void *this_) {
  auto rv = ((QDirIterator*)this_)->path();
return new QString(rv);
}
//  main block end
