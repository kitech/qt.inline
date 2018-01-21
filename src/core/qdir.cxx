//  header block begin
// /usr/include/qt/QtCore/qdir.h
#include <qdir.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qdir.h:102
// void QDir(const class QString &)
extern "C"
void* C_ZN4QDirC1ERK7QString(const QString & path) {
  return new QDir(path);
}
// /usr/include/qt/QtCore/qdir.h:103
// void QDir(const class QString &, const class QString &, SortFlags, Filters)
extern "C"
void* C_ZN4QDirC1ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(const QString & path, const QString & nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter) {
  return new QDir(path, nameFilter, sort, filter);
}
// /usr/include/qt/QtCore/qdir.h:105
// void ~QDir()
extern "C"
void C_ZN4QDirD1Ev(void *this_) {
  delete (QDir*)(this_);
}
// inline
// /usr/include/qt/QtCore/qdir.h:113
// void swap(class QDir &)
extern "C"
void C_ZN4QDir4swapERS_(void *this_, QDir & other) {
  ((QDir*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qdir.h:116
// void setPath(const class QString &)
extern "C"
void C_ZN4QDir7setPathERK7QString(void *this_, const QString & path) {
  ((QDir*)this_)->setPath(path);
}
// /usr/include/qt/QtCore/qdir.h:117
// QString path()
extern "C"
void C_ZNK4QDir4pathEv(void *this_) {
  /*return*/ ((QDir*)this_)->path();
}
// /usr/include/qt/QtCore/qdir.h:118
// QString absolutePath()
extern "C"
void C_ZNK4QDir12absolutePathEv(void *this_) {
  /*return*/ ((QDir*)this_)->absolutePath();
}
// /usr/include/qt/QtCore/qdir.h:119
// QString canonicalPath()
extern "C"
void C_ZNK4QDir13canonicalPathEv(void *this_) {
  /*return*/ ((QDir*)this_)->canonicalPath();
}
// static
// /usr/include/qt/QtCore/qdir.h:121
// void addResourceSearchPath(const class QString &)
extern "C"
void C_ZN4QDir21addResourceSearchPathERK7QString(const QString & path) {
  QDir::addResourceSearchPath(path);
}
// static
// /usr/include/qt/QtCore/qdir.h:123
// void setSearchPaths(const class QString &, const class QStringList &)
extern "C"
void C_ZN4QDir14setSearchPathsERK7QStringRK11QStringList(const QString & prefix, const QStringList & searchPaths) {
  QDir::setSearchPaths(prefix, searchPaths);
}
// static
// /usr/include/qt/QtCore/qdir.h:124
// void addSearchPath(const class QString &, const class QString &)
extern "C"
void C_ZN4QDir13addSearchPathERK7QStringS2_(const QString & prefix, const QString & path) {
  QDir::addSearchPath(prefix, path);
}
// static
// /usr/include/qt/QtCore/qdir.h:125
// QStringList searchPaths(const class QString &)
extern "C"
void C_ZN4QDir11searchPathsERK7QString(const QString & prefix) {
  /*return*/ QDir::searchPaths(prefix);
}
// /usr/include/qt/QtCore/qdir.h:127
// QString dirName()
extern "C"
void C_ZNK4QDir7dirNameEv(void *this_) {
  /*return*/ ((QDir*)this_)->dirName();
}
// /usr/include/qt/QtCore/qdir.h:128
// QString filePath(const class QString &)
extern "C"
void C_ZNK4QDir8filePathERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QDir*)this_)->filePath(fileName);
}
// /usr/include/qt/QtCore/qdir.h:129
// QString absoluteFilePath(const class QString &)
extern "C"
void C_ZNK4QDir16absoluteFilePathERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QDir*)this_)->absoluteFilePath(fileName);
}
// /usr/include/qt/QtCore/qdir.h:130
// QString relativeFilePath(const class QString &)
extern "C"
void C_ZNK4QDir16relativeFilePathERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QDir*)this_)->relativeFilePath(fileName);
}
// static
// /usr/include/qt/QtCore/qdir.h:132
// QString toNativeSeparators(const class QString &)
extern "C"
void C_ZN4QDir18toNativeSeparatorsERK7QString(const QString & pathName) {
  /*return*/ QDir::toNativeSeparators(pathName);
}
// static
// /usr/include/qt/QtCore/qdir.h:133
// QString fromNativeSeparators(const class QString &)
extern "C"
void C_ZN4QDir20fromNativeSeparatorsERK7QString(const QString & pathName) {
  /*return*/ QDir::fromNativeSeparators(pathName);
}
// /usr/include/qt/QtCore/qdir.h:135
// bool cd(const class QString &)
extern "C"
void C_ZN4QDir2cdERK7QString(void *this_, const QString & dirName) {
  /*return*/ ((QDir*)this_)->cd(dirName);
}
// /usr/include/qt/QtCore/qdir.h:136
// bool cdUp()
extern "C"
void C_ZN4QDir4cdUpEv(void *this_) {
  /*return*/ ((QDir*)this_)->cdUp();
}
// /usr/include/qt/QtCore/qdir.h:138
// QStringList nameFilters()
extern "C"
void C_ZNK4QDir11nameFiltersEv(void *this_) {
  /*return*/ ((QDir*)this_)->nameFilters();
}
// /usr/include/qt/QtCore/qdir.h:139
// void setNameFilters(const class QStringList &)
extern "C"
void C_ZN4QDir14setNameFiltersERK11QStringList(void *this_, const QStringList & nameFilters) {
  ((QDir*)this_)->setNameFilters(nameFilters);
}
// /usr/include/qt/QtCore/qdir.h:141
// Filters filter()
extern "C"
void C_ZNK4QDir6filterEv(void *this_) {
  /*return*/ ((QDir*)this_)->filter();
}
// /usr/include/qt/QtCore/qdir.h:142
// void setFilter(Filters)
extern "C"
void C_ZN4QDir9setFilterE6QFlagsINS_6FilterEE(void *this_, QFlags<QDir::Filter> filter) {
  ((QDir*)this_)->setFilter(filter);
}
// /usr/include/qt/QtCore/qdir.h:143
// SortFlags sorting()
extern "C"
void C_ZNK4QDir7sortingEv(void *this_) {
  /*return*/ ((QDir*)this_)->sorting();
}
// /usr/include/qt/QtCore/qdir.h:144
// void setSorting(SortFlags)
extern "C"
void C_ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDir*)this_)->setSorting(sort);
}
// /usr/include/qt/QtCore/qdir.h:146
// uint count()
extern "C"
void C_ZNK4QDir5countEv(void *this_) {
  /*return*/ ((QDir*)this_)->count();
}
// static
// /usr/include/qt/QtCore/qdir.h:149
// QStringList nameFiltersFromString(const class QString &)
extern "C"
void C_ZN4QDir21nameFiltersFromStringERK7QString(const QString & nameFilter) {
  /*return*/ QDir::nameFiltersFromString(nameFilter);
}
// /usr/include/qt/QtCore/qdir.h:151
// QStringList entryList(Filters, SortFlags)
extern "C"
void C_ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *this_, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  /*return*/ ((QDir*)this_)->entryList(filters, sort);
}
// /usr/include/qt/QtCore/qdir.h:152
// QStringList entryList(const class QStringList &, Filters, SortFlags)
extern "C"
void C_ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *this_, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  /*return*/ ((QDir*)this_)->entryList(nameFilters, filters, sort);
}
// /usr/include/qt/QtCore/qdir.h:155
// QFileInfoList entryInfoList(Filters, SortFlags)
extern "C"
void C_ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *this_, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  /*return*/ ((QDir*)this_)->entryInfoList(filters, sort);
}
// /usr/include/qt/QtCore/qdir.h:156
// QFileInfoList entryInfoList(const class QStringList &, Filters, SortFlags)
extern "C"
void C_ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *this_, const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  /*return*/ ((QDir*)this_)->entryInfoList(nameFilters, filters, sort);
}
// /usr/include/qt/QtCore/qdir.h:159
// bool mkdir(const class QString &)
extern "C"
void C_ZNK4QDir5mkdirERK7QString(void *this_, const QString & dirName) {
  /*return*/ ((QDir*)this_)->mkdir(dirName);
}
// /usr/include/qt/QtCore/qdir.h:160
// bool rmdir(const class QString &)
extern "C"
void C_ZNK4QDir5rmdirERK7QString(void *this_, const QString & dirName) {
  /*return*/ ((QDir*)this_)->rmdir(dirName);
}
// /usr/include/qt/QtCore/qdir.h:161
// bool mkpath(const class QString &)
extern "C"
void C_ZNK4QDir6mkpathERK7QString(void *this_, const QString & dirPath) {
  /*return*/ ((QDir*)this_)->mkpath(dirPath);
}
// /usr/include/qt/QtCore/qdir.h:162
// bool rmpath(const class QString &)
extern "C"
void C_ZNK4QDir6rmpathERK7QString(void *this_, const QString & dirPath) {
  /*return*/ ((QDir*)this_)->rmpath(dirPath);
}
// /usr/include/qt/QtCore/qdir.h:164
// bool removeRecursively()
extern "C"
void C_ZN4QDir17removeRecursivelyEv(void *this_) {
  /*return*/ ((QDir*)this_)->removeRecursively();
}
// /usr/include/qt/QtCore/qdir.h:166
// bool isReadable()
extern "C"
void C_ZNK4QDir10isReadableEv(void *this_) {
  /*return*/ ((QDir*)this_)->isReadable();
}
// /usr/include/qt/QtCore/qdir.h:167
// bool exists()
extern "C"
void C_ZNK4QDir6existsEv(void *this_) {
  /*return*/ ((QDir*)this_)->exists();
}
// /usr/include/qt/QtCore/qdir.h:168
// bool isRoot()
extern "C"
void C_ZNK4QDir6isRootEv(void *this_) {
  /*return*/ ((QDir*)this_)->isRoot();
}
// static
// /usr/include/qt/QtCore/qdir.h:170
// bool isRelativePath(const class QString &)
extern "C"
void C_ZN4QDir14isRelativePathERK7QString(const QString & path) {
  /*return*/ QDir::isRelativePath(path);
}
// static inline
// /usr/include/qt/QtCore/qdir.h:171
// bool isAbsolutePath(const class QString &)
extern "C"
void C_ZN4QDir14isAbsolutePathERK7QString(const QString & path) {
  /*return*/ QDir::isAbsolutePath(path);
}
// /usr/include/qt/QtCore/qdir.h:172
// bool isRelative()
extern "C"
void C_ZNK4QDir10isRelativeEv(void *this_) {
  /*return*/ ((QDir*)this_)->isRelative();
}
// inline
// /usr/include/qt/QtCore/qdir.h:173
// bool isAbsolute()
extern "C"
void C_ZNK4QDir10isAbsoluteEv(void *this_) {
  /*return*/ ((QDir*)this_)->isAbsolute();
}
// /usr/include/qt/QtCore/qdir.h:174
// bool makeAbsolute()
extern "C"
void C_ZN4QDir12makeAbsoluteEv(void *this_) {
  /*return*/ ((QDir*)this_)->makeAbsolute();
}
// /usr/include/qt/QtCore/qdir.h:179
// bool remove(const class QString &)
extern "C"
void C_ZN4QDir6removeERK7QString(void *this_, const QString & fileName) {
  /*return*/ ((QDir*)this_)->remove(fileName);
}
// /usr/include/qt/QtCore/qdir.h:180
// bool rename(const class QString &, const class QString &)
extern "C"
void C_ZN4QDir6renameERK7QStringS2_(void *this_, const QString & oldName, const QString & newName) {
  /*return*/ ((QDir*)this_)->rename(oldName, newName);
}
// /usr/include/qt/QtCore/qdir.h:181
// bool exists(const class QString &)
extern "C"
void C_ZNK4QDir6existsERK7QString(void *this_, const QString & name) {
  /*return*/ ((QDir*)this_)->exists(name);
}
// static
// /usr/include/qt/QtCore/qdir.h:183
// QFileInfoList drives()
extern "C"
void C_ZN4QDir6drivesEv() {
  /*return*/ QDir::drives();
}
// static inline
// /usr/include/qt/QtCore/qdir.h:185
// QChar listSeparator()
extern "C"
void C_ZN4QDir13listSeparatorEv() {
  /*return*/ QDir::listSeparator();
}
// static
// /usr/include/qt/QtCore/qdir.h:194
// QChar separator()
extern "C"
void C_ZN4QDir9separatorEv() {
  /*return*/ QDir::separator();
}
// static
// /usr/include/qt/QtCore/qdir.h:196
// bool setCurrent(const class QString &)
extern "C"
void C_ZN4QDir10setCurrentERK7QString(const QString & path) {
  /*return*/ QDir::setCurrent(path);
}
// static inline
// /usr/include/qt/QtCore/qdir.h:197
// QDir current()
extern "C"
void C_ZN4QDir7currentEv() {
  /*return*/ QDir::current();
}
// static
// /usr/include/qt/QtCore/qdir.h:198
// QString currentPath()
extern "C"
void C_ZN4QDir11currentPathEv() {
  /*return*/ QDir::currentPath();
}
// static inline
// /usr/include/qt/QtCore/qdir.h:200
// QDir home()
extern "C"
void C_ZN4QDir4homeEv() {
  /*return*/ QDir::home();
}
// static
// /usr/include/qt/QtCore/qdir.h:201
// QString homePath()
extern "C"
void C_ZN4QDir8homePathEv() {
  /*return*/ QDir::homePath();
}
// static inline
// /usr/include/qt/QtCore/qdir.h:202
// QDir root()
extern "C"
void C_ZN4QDir4rootEv() {
  /*return*/ QDir::root();
}
// static
// /usr/include/qt/QtCore/qdir.h:203
// QString rootPath()
extern "C"
void C_ZN4QDir8rootPathEv() {
  /*return*/ QDir::rootPath();
}
// static inline
// /usr/include/qt/QtCore/qdir.h:204
// QDir temp()
extern "C"
void C_ZN4QDir4tempEv() {
  /*return*/ QDir::temp();
}
// static
// /usr/include/qt/QtCore/qdir.h:205
// QString tempPath()
extern "C"
void C_ZN4QDir8tempPathEv() {
  /*return*/ QDir::tempPath();
}
// static
// /usr/include/qt/QtCore/qdir.h:208
// bool match(const class QStringList &, const class QString &)
extern "C"
void C_ZN4QDir5matchERK11QStringListRK7QString(const QStringList & filters, const QString & fileName) {
  /*return*/ QDir::match(filters, fileName);
}
// static
// /usr/include/qt/QtCore/qdir.h:209
// bool match(const class QString &, const class QString &)
extern "C"
void C_ZN4QDir5matchERK7QStringS2_(const QString & filter, const QString & fileName) {
  /*return*/ QDir::match(filter, fileName);
}
// static
// /usr/include/qt/QtCore/qdir.h:212
// QString cleanPath(const class QString &)
extern "C"
void C_ZN4QDir9cleanPathERK7QString(const QString & path) {
  /*return*/ QDir::cleanPath(path);
}
// /usr/include/qt/QtCore/qdir.h:213
// void refresh()
extern "C"
void C_ZNK4QDir7refreshEv(void *this_) {
  ((QDir*)this_)->refresh();
}
//  main block end
