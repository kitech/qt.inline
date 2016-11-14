// /usr/include/qt/QtCore/qdiriterator.h
#include <qdiriterator.h>
#include <QtCore>

// /usr/include/qt/QtCore/qdiriterator.h:58
// void QDirIterator(const class QDir &, IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC1ERK4QDir6QFlagsINS_12IteratorFlagEE(const QDir & dir, QFlags<QDirIterator::IteratorFlag> flags) {
  return new QDirIterator(dir, flags);
}
// /usr/include/qt/QtCore/qdiriterator.h:59
// void QDirIterator(const class QString &, IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC1ERK7QString6QFlagsINS_12IteratorFlagEE(const QString & path, QFlags<QDirIterator::IteratorFlag> flags) {
  return new QDirIterator(path, flags);
}
// /usr/include/qt/QtCore/qdiriterator.h:61
// void QDirIterator(const class QString &, class QDir::Filters, IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC1ERK7QString6QFlagsIN4QDir6FilterEES3_INS_12IteratorFlagEE(const QString & path, QFlags<QDir::Filter> filter, QFlags<QDirIterator::IteratorFlag> flags) {
  return new QDirIterator(path, filter, flags);
}
// /usr/include/qt/QtCore/qdiriterator.h:64
// void QDirIterator(const class QString &, const class QStringList &, class QDir::Filters, IteratorFlags)
extern "C"
void* C_ZN12QDirIteratorC1ERK7QStringRK11QStringList6QFlagsIN4QDir6FilterEES6_INS_12IteratorFlagEE(const QString & path, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDirIterator::IteratorFlag> flags) {
  return new QDirIterator(path, nameFilters, filters, flags);
}
// /usr/include/qt/QtCore/qdiriterator.h:69
// void ~QDirIterator()
extern "C"
void C_ZN12QDirIteratorD1Ev(void *this_) {
  delete (QDirIterator*)(this_);
}
// /usr/include/qt/QtCore/qdiriterator.h:71
// QString next()
extern "C"
void C_ZN12QDirIterator4nextEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->next();
}
// /usr/include/qt/QtCore/qdiriterator.h:72
// bool hasNext()
extern "C"
void C_ZNK12QDirIterator7hasNextEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->hasNext();
}
// /usr/include/qt/QtCore/qdiriterator.h:74
// QString fileName()
extern "C"
void C_ZNK12QDirIterator8fileNameEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->fileName();
}
// /usr/include/qt/QtCore/qdiriterator.h:75
// QString filePath()
extern "C"
void C_ZNK12QDirIterator8filePathEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->filePath();
}
// /usr/include/qt/QtCore/qdiriterator.h:76
// QFileInfo fileInfo()
extern "C"
void C_ZNK12QDirIterator8fileInfoEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->fileInfo();
}
// /usr/include/qt/QtCore/qdiriterator.h:77
// QString path()
extern "C"
void C_ZNK12QDirIterator4pathEv(void *this_) {
  /*return*/ ((QDirIterator*)this_)->path();
}