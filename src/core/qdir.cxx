//  header block begin
// /usr/include/qt/QtCore/qdir.h
#ifndef protected
#define protected public
#endif
#include <qdir.h>
#include <QtCore>
#include "callback_inherit.h"

// QDir is pure virtual: false
// QDir has virtual projected: false
//  header block end

//  main block begin

class MyQDir : public QDir {
public:
  virtual ~MyQDir() {}
// void QDir(const class QString &)
MyQDir(const QString & path) : QDir(path) {}
// void QDir(const class QString &, const class QString &, QDir::SortFlags, QDir::Filters)
MyQDir(const QString & path, const QString & nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter) : QDir(path, nameFilter, sort, filter) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:102
// [-2] void QDir(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDirC2ERK7QString(QString* path) {
  return  new QDir(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:103
// [-2] void QDir(const class QString &, const class QString &, QDir::SortFlags, QDir::Filters)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDirC2ERK7QStringS2_6QFlagsINS_8SortFlagEES3_INS_6FilterEE(QString* path, QString* nameFilter, QFlags<QDir::SortFlag> sort, QFlags<QDir::Filter> filter) {
  return  new QDir(*path, *nameFilter, sort, filter);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:105
// [-2] void ~QDir()
extern "C" Q_DECL_EXPORT
void C_ZN4QDirD2Ev(void *this_) {
  delete (QDir*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:107
// [8] QDir & operator=(const class QDir &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDiraSERKS_(void *this_, QDir* arg0) {
  auto& rv = ((QDir*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:108
// [8] QDir & operator=(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDiraSERK7QString(void *this_, QString* path) {
  auto& rv = ((QDir*)this_)->operator=(*path);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:110
// [8] QDir & operator=(class QDir &&)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDiraSEOS_(void *this_, QDir && other) {
  auto& rv = ((QDir*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:113
// [-2] void swap(class QDir &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir4swapERS_(void *this_, QDir* other) {
  ((QDir*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:116
// [-2] void setPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir7setPathERK7QString(void *this_, QString* path) {
  ((QDir*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:117
// [8] QString path()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir4pathEv(void *this_) {
  auto rv = ((QDir*)this_)->path();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:118
// [8] QString absolutePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir12absolutePathEv(void *this_) {
  auto rv = ((QDir*)this_)->absolutePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:119
// [8] QString canonicalPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir13canonicalPathEv(void *this_) {
  auto rv = ((QDir*)this_)->canonicalPath();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:121
// [-2] void addResourceSearchPath(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir21addResourceSearchPathERK7QString(QString* path) {
  QDir::addResourceSearchPath(*path);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:123
// [-2] void setSearchPaths(const class QString &, const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir14setSearchPathsERK7QStringRK11QStringList(QString* prefix, QStringList* searchPaths) {
  QDir::setSearchPaths(*prefix, *searchPaths);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:124
// [-2] void addSearchPath(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir13addSearchPathERK7QStringS2_(QString* prefix, QString* path) {
  QDir::addSearchPath(*prefix, *path);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:125
// [8] QStringList searchPaths(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir11searchPathsERK7QString(QString* prefix) {
  auto rv = QDir::searchPaths(*prefix);
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:127
// [8] QString dirName()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir7dirNameEv(void *this_) {
  auto rv = ((QDir*)this_)->dirName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:128
// [8] QString filePath(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir8filePathERK7QString(void *this_, QString* fileName) {
  auto rv = ((QDir*)this_)->filePath(*fileName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:129
// [8] QString absoluteFilePath(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir16absoluteFilePathERK7QString(void *this_, QString* fileName) {
  auto rv = ((QDir*)this_)->absoluteFilePath(*fileName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:130
// [8] QString relativeFilePath(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir16relativeFilePathERK7QString(void *this_, QString* fileName) {
  auto rv = ((QDir*)this_)->relativeFilePath(*fileName);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:132
// [8] QString toNativeSeparators(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir18toNativeSeparatorsERK7QString(QString* pathName) {
  auto rv = QDir::toNativeSeparators(*pathName);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:133
// [8] QString fromNativeSeparators(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir20fromNativeSeparatorsERK7QString(QString* pathName) {
  auto rv = QDir::fromNativeSeparators(*pathName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:135
// [1] bool cd(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir2cdERK7QString(void *this_, QString* dirName) {
  return (bool)((QDir*)this_)->cd(*dirName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:136
// [1] bool cdUp()
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir4cdUpEv(void *this_) {
  return (bool)((QDir*)this_)->cdUp();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:138
// [8] QStringList nameFilters()
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir11nameFiltersEv(void *this_) {
  auto rv = ((QDir*)this_)->nameFilters();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:139
// [-2] void setNameFilters(const class QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir14setNameFiltersERK11QStringList(void *this_, QStringList* nameFilters) {
  ((QDir*)this_)->setNameFilters(*nameFilters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:141
// [4] QDir::Filters filter()
extern "C" Q_DECL_EXPORT
QDir::Filters* C_ZNK4QDir6filterEv(void *this_) {
  auto rv = ((QDir*)this_)->filter();
return new QDir::Filters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:142
// [-2] void setFilter(QDir::Filters)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir9setFilterE6QFlagsINS_6FilterEE(void *this_, QFlags<QDir::Filter> filter) {
  ((QDir*)this_)->setFilter(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:143
// [4] QDir::SortFlags sorting()
extern "C" Q_DECL_EXPORT
QDir::SortFlags* C_ZNK4QDir7sortingEv(void *this_) {
  auto rv = ((QDir*)this_)->sorting();
return new QDir::SortFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:144
// [-2] void setSorting(QDir::SortFlags)
extern "C" Q_DECL_EXPORT
void C_ZN4QDir10setSortingE6QFlagsINS_8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDir*)this_)->setSorting(sort);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:146
// [4] uint count()
extern "C" Q_DECL_EXPORT
uint C_ZNK4QDir5countEv(void *this_) {
  return (uint)((QDir*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:147
// [1] bool isEmpty(QDir::Filters)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir7isEmptyE6QFlagsINS_6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  return (bool)((QDir*)this_)->isEmpty(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:149
// [8] QString operator[](int)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDirixEi(void *this_, int arg0) {
  auto rv = ((QDir*)this_)->operator[](arg0);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:151
// [8] QStringList nameFiltersFromString(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir21nameFiltersFromStringERK7QString(QString* nameFilter) {
  auto rv = QDir::nameFiltersFromString(*nameFilter);
return new QStringList(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:153
// [8] QStringList entryList(QDir::Filters, QDir::SortFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir9entryListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *this_, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  auto rv = ((QDir*)this_)->entryList(filters, sort);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:154
// [8] QStringList entryList(const class QStringList &, QDir::Filters, QDir::SortFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK4QDir9entryListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *this_, QStringList* nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  auto rv = ((QDir*)this_)->entryList(*nameFilters, filters, sort);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:157
// [-2] QFileInfoList entryInfoList(QDir::Filters, QDir::SortFlags)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_ZNK4QDir13entryInfoListE6QFlagsINS_6FilterEES0_INS_8SortFlagEE(void *this_, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  auto rv = ((QDir*)this_)->entryInfoList(filters, sort);
return new QFileInfoList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:158
// [-2] QFileInfoList entryInfoList(const class QStringList &, QDir::Filters, QDir::SortFlags)
extern "C" Q_DECL_EXPORT
QFileInfoList* C_ZNK4QDir13entryInfoListERK11QStringList6QFlagsINS_6FilterEES3_INS_8SortFlagEE(void *this_, QStringList* nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort) {
  auto rv = ((QDir*)this_)->entryInfoList(*nameFilters, filters, sort);
return new QFileInfoList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:161
// [1] bool mkdir(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir5mkdirERK7QString(void *this_, QString* dirName) {
  return (bool)((QDir*)this_)->mkdir(*dirName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:162
// [1] bool rmdir(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir5rmdirERK7QString(void *this_, QString* dirName) {
  return (bool)((QDir*)this_)->rmdir(*dirName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:163
// [1] bool mkpath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir6mkpathERK7QString(void *this_, QString* dirPath) {
  return (bool)((QDir*)this_)->mkpath(*dirPath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:164
// [1] bool rmpath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir6rmpathERK7QString(void *this_, QString* dirPath) {
  return (bool)((QDir*)this_)->rmpath(*dirPath);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:166
// [1] bool removeRecursively()
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir17removeRecursivelyEv(void *this_) {
  return (bool)((QDir*)this_)->removeRecursively();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:168
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir10isReadableEv(void *this_) {
  return (bool)((QDir*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:169
// [1] bool exists()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir6existsEv(void *this_) {
  return (bool)((QDir*)this_)->exists();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:170
// [1] bool isRoot()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir6isRootEv(void *this_) {
  return (bool)((QDir*)this_)->isRoot();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:172
// [1] bool isRelativePath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir14isRelativePathERK7QString(QString* path) {
  return (bool)QDir::isRelativePath(*path);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:173
// [1] bool isAbsolutePath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir14isAbsolutePathERK7QString(QString* path) {
  return (bool)QDir::isAbsolutePath(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:174
// [1] bool isRelative()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir10isRelativeEv(void *this_) {
  return (bool)((QDir*)this_)->isRelative();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:175
// [1] bool isAbsolute()
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir10isAbsoluteEv(void *this_) {
  return (bool)((QDir*)this_)->isAbsolute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:176
// [1] bool makeAbsolute()
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir12makeAbsoluteEv(void *this_) {
  return (bool)((QDir*)this_)->makeAbsolute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:178
// [1] bool operator==(const class QDir &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDireqERKS_(void *this_, QDir* dir) {
  return (bool)((QDir*)this_)->operator==(*dir);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:179
// [1] bool operator!=(const class QDir &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDirneERKS_(void *this_, QDir* dir) {
  return (bool)((QDir*)this_)->operator!=(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:181
// [1] bool remove(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir6removeERK7QString(void *this_, QString* fileName) {
  return (bool)((QDir*)this_)->remove(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:182
// [1] bool rename(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir6renameERK7QStringS2_(void *this_, QString* oldName, QString* newName) {
  return (bool)((QDir*)this_)->rename(*oldName, *newName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:183
// [1] bool exists(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK4QDir6existsERK7QString(void *this_, QString* name) {
  return (bool)((QDir*)this_)->exists(*name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:185
// [-2] QFileInfoList drives()
extern "C" Q_DECL_EXPORT
void C_ZN4QDir6drivesEv() {
  auto rv = QDir::drives();
/*return rv;*/
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:187
// [2] QChar listSeparator()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir13listSeparatorEv() {
  auto rv = QDir::listSeparator();
return new QChar(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:196
// [2] QChar separator()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir9separatorEv() {
  auto rv = QDir::separator();
return new QChar(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:198
// [1] bool setCurrent(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir10setCurrentERK7QString(QString* path) {
  return (bool)QDir::setCurrent(*path);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:199
// [8] QDir current()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir7currentEv() {
  auto rv = QDir::current();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:200
// [8] QString currentPath()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir11currentPathEv() {
  auto rv = QDir::currentPath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:202
// [8] QDir home()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir4homeEv() {
  auto rv = QDir::home();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:203
// [8] QString homePath()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir8homePathEv() {
  auto rv = QDir::homePath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:204
// [8] QDir root()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir4rootEv() {
  auto rv = QDir::root();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:205
// [8] QString rootPath()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir8rootPathEv() {
  auto rv = QDir::rootPath();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:206
// [8] QDir temp()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir4tempEv() {
  auto rv = QDir::temp();
return new QDir(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:207
// [8] QString tempPath()
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir8tempPathEv() {
  auto rv = QDir::tempPath();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:210
// [1] bool match(const class QStringList &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir5matchERK11QStringListRK7QString(QStringList* filters, QString* fileName) {
  return (bool)QDir::match(*filters, *fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:211
// [1] bool match(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN4QDir5matchERK7QStringS2_(QString* filter, QString* fileName) {
  return (bool)QDir::match(*filter, *fileName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:214
// [8] QString cleanPath(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN4QDir9cleanPathERK7QString(QString* path) {
  auto rv = QDir::cleanPath(*path);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:215
// [-2] void refresh()
extern "C" Q_DECL_EXPORT
void C_ZNK4QDir7refreshEv(void *this_) {
  ((QDir*)this_)->refresh();
}

//  main block end
