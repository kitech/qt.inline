// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qfiledialog.h
// dst-file: /src/widgets/qfiledialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfiledialog.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qlist.h>
#include <qdatastream.h>
#include <qbytearray.h>
#include <qdir.h>
// <= header block end

// main block begin =>
void __keep_qfiledialog_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 101, column 17>
//   // proto:  void QFileDialog::setDirectory(const QDir & directory);
if (true) {
  auto f = [](QFileDialog flythis, const QDir & arg1) {
    ((QFileDialog*)0)->setDirectory(arg1);
    flythis.setDirectory(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QFileDialog12setDirectoryERK4QDir setDirectory(const class QDir &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileDialog_Class_Size()
{
  return sizeof(QFileDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 168, column 13>
//   // proto:  QString QFileDialog::labelText(QFileDialog::DialogLabel label);
// _ZNK11QFileDialog9labelTextENS_11DialogLabelE labelText(enum QFileDialog::DialogLabel)
extern "C"
QString*
C_ZNK11QFileDialog9labelTextENS_11DialogLabelE(void *qthis,
QFileDialog::DialogLabel arg1) {
  auto ret =
  ((QFileDialog*)qthis)->labelText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 134, column 10>
//   // proto:  void QFileDialog::setFileMode(QFileDialog::FileMode mode);
// _ZN11QFileDialog11setFileModeENS_8FileModeE setFileMode(enum QFileDialog::FileMode)
extern "C"
void
C_ZN11QFileDialog11setFileModeENS_8FileModeE(void *qthis,
QFileDialog::FileMode arg1) {
  ((QFileDialog*)qthis)->setFileMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 57, column 5>
//   // proto:  const QMetaObject * QFileDialog::metaObject();
// _ZNK11QFileDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFileDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 104, column 10>
//   // proto:  void QFileDialog::setDirectoryUrl(const QUrl & directory);
// _ZN11QFileDialog15setDirectoryUrlERK4QUrl setDirectoryUrl(const class QUrl &)
extern "C"
void
C_ZN11QFileDialog15setDirectoryUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QFileDialog*)qthis)->setDirectoryUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 193, column 10>
//   // proto:  void QFileDialog::directoryUrlEntered(const QUrl & directory);
// _ZN11QFileDialog19directoryUrlEnteredERK4QUrl directoryUrlEntered(const class QUrl &)
extern "C"
void
C_ZN11QFileDialog19directoryUrlEnteredERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QFileDialog*)qthis)->directoryUrlEntered(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 199, column 20>
//   // proto: static QString QFileDialog::getOpenFileName(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, Options options);
// _ZN11QFileDialog15getOpenFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE getOpenFileName(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
QString*
C_ZN11QFileDialog15getOpenFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6) {
  auto ret =
  QFileDialog::getOpenFileName(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
arg5,
arg6);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 187, column 10>
//   // proto:  void QFileDialog::currentChanged(const QString & path);
// _ZN11QFileDialog14currentChangedERK7QString currentChanged(const class QString &)
extern "C"
void
C_ZN11QFileDialog14currentChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->currentChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 118, column 17>
//   // proto:  QStringList QFileDialog::nameFilters();
// _ZNK11QFileDialog11nameFiltersEv nameFilters()
extern "C"
QStringList*
C_ZNK11QFileDialog11nameFiltersEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->nameFilters();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 167, column 10>
//   // proto:  void QFileDialog::setLabelText(QFileDialog::DialogLabel label, const QString & text);
// _ZN11QFileDialog12setLabelTextENS_11DialogLabelERK7QString setLabelText(enum QFileDialog::DialogLabel, const class QString &)
extern "C"
void
C_ZN11QFileDialog12setLabelTextENS_11DialogLabelERK7QString(void *qthis,
QFileDialog::DialogLabel arg1,
const QString* arg2) {
  ((QFileDialog*)qthis)->setLabelText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 178, column 13>
//   // proto:  Options QFileDialog::options();
// _ZNK11QFileDialog7optionsEv options()
extern "C"
QFlags<QFileDialog::Option>*
C_ZNK11QFileDialog7optionsEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->options();
  return new QFlags<QFileDialog::Option>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 152, column 10>
//   // proto:  void QFileDialog::setConfirmOverwrite(bool enabled);
// _ZN11QFileDialog19setConfirmOverwriteEb setConfirmOverwrite(_Bool)
extern "C"
void
C_ZN11QFileDialog19setConfirmOverwriteEb(void *qthis,
bool arg1) {
  ((QFileDialog*)qthis)->setConfirmOverwrite(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 221, column 17>
//   // proto: static QUrl QFileDialog::getSaveFileUrl(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, Options options, const QStringList & supportedSchemes);
// _ZN11QFileDialog14getSaveFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList getSaveFileUrl(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
QUrl*
C_ZN11QFileDialog14getSaveFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * arg1,
const QString* arg2,
const QUrl* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6,
const QStringList* arg7) {
  auto ret =
  QFileDialog::getSaveFileUrl(arg1,
*((const QString*)arg2),
*((const QUrl*)arg3),
*((const QString*)arg4),
arg5,
arg6,
*((const QStringList*)arg7));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 155, column 10>
//   // proto:  void QFileDialog::setDefaultSuffix(const QString & suffix);
// _ZN11QFileDialog16setDefaultSuffixERK7QString setDefaultSuffix(const class QString &)
extern "C"
void
C_ZN11QFileDialog16setDefaultSuffixERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->setDefaultSuffix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 195, column 10>
//   // proto:  void QFileDialog::filterSelected(const QString & filter);
// _ZN11QFileDialog14filterSelectedERK7QString filterSelected(const class QString &)
extern "C"
void
C_ZN11QFileDialog14filterSelectedERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->filterSelected(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 161, column 10>
//   // proto:  void QFileDialog::setItemDelegate(QAbstractItemDelegate * delegate);
// _ZN11QFileDialog15setItemDelegateEP21QAbstractItemDelegate setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void
C_ZN11QFileDialog15setItemDelegateEP21QAbstractItemDelegate(void *qthis,
QAbstractItemDelegate * arg1) {
  ((QFileDialog*)qthis)->setItemDelegate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 138, column 16>
//   // proto:  QFileDialog::AcceptMode QFileDialog::acceptMode();
// _ZNK11QFileDialog10acceptModeEv acceptMode()
extern "C"
QFileDialog::AcceptMode
C_ZNK11QFileDialog10acceptModeEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->acceptMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 147, column 17>
//   // proto:  QList<QUrl> QFileDialog::sidebarUrls();
// _ZNK11QFileDialog11sidebarUrlsEv sidebarUrls()
extern "C"
QList<QUrl>*
C_ZNK11QFileDialog11sidebarUrlsEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->sidebarUrls();
  return new QList<QUrl>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 156, column 13>
//   // proto:  QString QFileDialog::defaultSuffix();
// _ZNK11QFileDialog13defaultSuffixEv defaultSuffix()
extern "C"
QString*
C_ZNK11QFileDialog13defaultSuffixEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->defaultSuffix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 214, column 20>
//   // proto: static QString QFileDialog::getSaveFileName(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, Options options);
// _ZN11QFileDialog15getSaveFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE getSaveFileName(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
QString*
C_ZN11QFileDialog15getSaveFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6) {
  auto ret =
  QFileDialog::getSaveFileName(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
arg5,
arg6);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 171, column 10>
//   // proto:  void QFileDialog::setProxyModel(QAbstractProxyModel * model);
// _ZN11QFileDialog13setProxyModelEP19QAbstractProxyModel setProxyModel(class QAbstractProxyModel *)
extern "C"
void
C_ZN11QFileDialog13setProxyModelEP19QAbstractProxyModel(void *qthis,
QAbstractProxyModel * arg1) {
  ((QFileDialog*)qthis)->setProxyModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 135, column 14>
//   // proto:  QFileDialog::FileMode QFileDialog::fileMode();
// _ZNK11QFileDialog8fileModeEv fileMode()
extern "C"
QFileDialog::FileMode
C_ZNK11QFileDialog8fileModeEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->fileMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 234, column 17>
//   // proto: static QUrl QFileDialog::getExistingDirectoryUrl(QWidget * parent, const QString & caption, const QUrl & dir, Options options, const QStringList & supportedSchemes);
// _ZN11QFileDialog23getExistingDirectoryUrlEP7QWidgetRK7QStringRK4QUrl6QFlagsINS_6OptionEERK11QStringList getExistingDirectoryUrl(class QWidget *, const class QString &, const class QUrl &, Options, const class QStringList &)
extern "C"
QUrl*
C_ZN11QFileDialog23getExistingDirectoryUrlEP7QWidgetRK7QStringRK4QUrl6QFlagsINS_6OptionEERK11QStringList(QWidget * arg1,
const QString* arg2,
const QUrl* arg3,
QFileDialog::Options arg4,
const QStringList* arg5) {
  auto ret =
  QFileDialog::getExistingDirectoryUrl(arg1,
*((const QString*)arg2),
*((const QUrl*)arg3),
arg4,
*((const QStringList*)arg5));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 107, column 10>
//   // proto:  void QFileDialog::selectFile(const QString & filename);
// _ZN11QFileDialog10selectFileERK7QString selectFile(const class QString &)
extern "C"
void
C_ZN11QFileDialog10selectFileERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->selectFile(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 144, column 10>
//   // proto:  bool QFileDialog::resolveSymlinks();
// _ZNK11QFileDialog15resolveSymlinksEv resolveSymlinks()
extern "C"
bool
C_ZNK11QFileDialog15resolveSymlinksEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->resolveSymlinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 100, column 10>
//   // proto:  void QFileDialog::setDirectory(const QString & directory);
// _ZN11QFileDialog12setDirectoryERK7QString setDirectory(const class QString &)
extern "C"
void
C_ZN11QFileDialog12setDirectoryERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->setDirectory(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 110, column 10>
//   // proto:  void QFileDialog::selectUrl(const QUrl & url);
// _ZN11QFileDialog9selectUrlERK4QUrl selectUrl(const class QUrl &)
extern "C"
void
C_ZN11QFileDialog9selectUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QFileDialog*)qthis)->selectUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 176, column 10>
//   // proto:  bool QFileDialog::testOption(QFileDialog::Option option);
// _ZNK11QFileDialog10testOptionENS_6OptionE testOption(enum QFileDialog::Option)
extern "C"
bool
C_ZNK11QFileDialog10testOptionENS_6OptionE(void *qthis,
QFileDialog::Option arg1) {
  auto ret =
  ((QFileDialog*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 120, column 13>
//   // proto:  QString QFileDialog::selectedNameFilter();
// _ZNK11QFileDialog18selectedNameFilterEv selectedNameFilter()
extern "C"
QString*
C_ZNK11QFileDialog18selectedNameFilterEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->selectedNameFilter();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 137, column 10>
//   // proto:  void QFileDialog::setAcceptMode(QFileDialog::AcceptMode mode);
// _ZN11QFileDialog13setAcceptModeENS_10AcceptModeE setAcceptMode(enum QFileDialog::AcceptMode)
extern "C"
void
C_ZN11QFileDialog13setAcceptModeENS_10AcceptModeE(void *qthis,
QFileDialog::AcceptMode arg1) {
  ((QFileDialog*)qthis)->setAcceptMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 105, column 10>
//   // proto:  QUrl QFileDialog::directoryUrl();
// _ZNK11QFileDialog12directoryUrlEv directoryUrl()
extern "C"
QUrl*
C_ZNK11QFileDialog12directoryUrlEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->directoryUrl();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 247, column 24>
//   // proto: static QList<QUrl> QFileDialog::getOpenFileUrls(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, Options options, const QStringList & supportedSchemes);
// _ZN11QFileDialog15getOpenFileUrlsEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList getOpenFileUrls(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
QList<QUrl>*
C_ZN11QFileDialog15getOpenFileUrlsEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * arg1,
const QString* arg2,
const QUrl* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6,
const QStringList* arg7) {
  auto ret =
  QFileDialog::getOpenFileUrls(arg1,
*((const QString*)arg2),
*((const QUrl*)arg3),
*((const QString*)arg4),
arg5,
arg6,
*((const QStringList*)arg7));
  return new QList<QUrl>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 141, column 10>
//   // proto:  bool QFileDialog::isReadOnly();
// _ZNK11QFileDialog10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK11QFileDialog10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 240, column 24>
//   // proto: static QStringList QFileDialog::getOpenFileNames(QWidget * parent, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, Options options);
// _ZN11QFileDialog16getOpenFileNamesEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE getOpenFileNames(class QWidget *, const class QString &, const class QString &, const class QString &, class QString *, Options)
extern "C"
QStringList*
C_ZN11QFileDialog16getOpenFileNamesEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6) {
  auto ret =
  QFileDialog::getOpenFileNames(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
arg5,
arg6);
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 188, column 10>
//   // proto:  void QFileDialog::directoryEntered(const QString & directory);
// _ZN11QFileDialog16directoryEnteredERK7QString directoryEntered(const class QString &)
extern "C"
void
C_ZN11QFileDialog16directoryEnteredERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->directoryEntered(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 185, column 10>
//   // proto:  void QFileDialog::fileSelected(const QString & file);
// _ZN11QFileDialog12fileSelectedERK7QString fileSelected(const class QString &)
extern "C"
void
C_ZN11QFileDialog12fileSelectedERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->fileSelected(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 149, column 16>
//   // proto:  QByteArray QFileDialog::saveState();
// _ZNK11QFileDialog9saveStateEv saveState()
extern "C"
QByteArray*
C_ZNK11QFileDialog9saveStateEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->saveState();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 192, column 10>
//   // proto:  void QFileDialog::currentUrlChanged(const QUrl & url);
// _ZN11QFileDialog17currentUrlChangedERK4QUrl currentUrlChanged(const class QUrl &)
extern "C"
void
C_ZN11QFileDialog17currentUrlChangedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QFileDialog*)qthis)->currentUrlChanged(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 131, column 10>
//   // proto:  void QFileDialog::setViewMode(QFileDialog::ViewMode mode);
// _ZN11QFileDialog11setViewModeENS_8ViewModeE setViewMode(enum QFileDialog::ViewMode)
extern "C"
void
C_ZN11QFileDialog11setViewModeENS_8ViewModeE(void *qthis,
QFileDialog::ViewMode arg1) {
  ((QFileDialog*)qthis)->setViewMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 181, column 10>
//   // proto:  void QFileDialog::open(QObject * receiver, const char * member);
// _ZN11QFileDialog4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN11QFileDialog4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QFileDialog*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 102, column 10>
//   // proto:  QDir QFileDialog::directory();
// _ZNK11QFileDialog9directoryEv directory()
extern "C"
QDir*
C_ZNK11QFileDialog9directoryEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->directory();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 190, column 10>
//   // proto:  void QFileDialog::urlSelected(const QUrl & url);
// _ZN11QFileDialog11urlSelectedERK4QUrl urlSelected(const class QUrl &)
extern "C"
void
C_ZN11QFileDialog11urlSelectedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QFileDialog*)qthis)->urlSelected(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 101, column 17>
//   // proto:  void QFileDialog::setDirectory(const QDir & directory);
// _ZN11QFileDialog12setDirectoryERK4QDir setDirectory(const class QDir &)
extern "C"
void
C_ZN11QFileDialog12setDirectoryERK4QDir(void *qthis,
const QDir* arg1) {
  ((QFileDialog*)qthis)->setDirectory(*((const QDir*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 128, column 19>
//   // proto:  QDir::Filters QFileDialog::filter();
// _ZNK11QFileDialog6filterEv filter()
extern "C"
QFlags<QDir::Filter>*
C_ZNK11QFileDialog6filterEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->filter();
  return new QFlags<QDir::Filter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 182, column 10>
//   // proto:  void QFileDialog::setVisible(bool visible);
// _ZN11QFileDialog10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN11QFileDialog10setVisibleEb(void *qthis,
bool arg1) {
  ((QFileDialog*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 129, column 10>
//   // proto:  void QFileDialog::setFilter(QDir::Filters filters);
// _ZN11QFileDialog9setFilterE6QFlagsIN4QDir6FilterEE setFilter(class QDir::Filters)
extern "C"
void
C_ZN11QFileDialog9setFilterE6QFlagsIN4QDir6FilterEE(void *qthis,
QDir::Filters* arg1) {
  ((QFileDialog*)qthis)->setFilter(*((QDir::Filters*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 93, column 5>
//   // proto:  void QFileDialog::QFileDialog(QWidget * parent, Qt::WindowFlags f);
extern "C"
QFileDialog*
C_ZN11QFileDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QFileDialog(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 164, column 10>
//   // proto:  void QFileDialog::setIconProvider(QFileIconProvider * provider);
// _ZN11QFileDialog15setIconProviderEP17QFileIconProvider setIconProvider(class QFileIconProvider *)
extern "C"
void
C_ZN11QFileDialog15setIconProviderEP17QFileIconProvider(void *qthis,
QFileIconProvider * arg1) {
  ((QFileDialog*)qthis)->setIconProvider(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 125, column 10>
//   // proto:  void QFileDialog::selectMimeTypeFilter(const QString & filter);
// _ZN11QFileDialog20selectMimeTypeFilterERK7QString selectMimeTypeFilter(const class QString &)
extern "C"
void
C_ZN11QFileDialog20selectMimeTypeFilterERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->selectMimeTypeFilter(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 124, column 17>
//   // proto:  QStringList QFileDialog::mimeTypeFilters();
// _ZNK11QFileDialog15mimeTypeFiltersEv mimeTypeFilters()
extern "C"
QStringList*
C_ZNK11QFileDialog15mimeTypeFiltersEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->mimeTypeFilters();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 123, column 10>
//   // proto:  void QFileDialog::setMimeTypeFilters(const QStringList & filters);
// _ZN11QFileDialog18setMimeTypeFiltersERK11QStringList setMimeTypeFilters(const class QStringList &)
extern "C"
void
C_ZN11QFileDialog18setMimeTypeFiltersERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileDialog*)qthis)->setMimeTypeFilters(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 143, column 10>
//   // proto:  void QFileDialog::setResolveSymlinks(bool enabled);
// _ZN11QFileDialog18setResolveSymlinksEb setResolveSymlinks(_Bool)
extern "C"
void
C_ZN11QFileDialog18setResolveSymlinksEb(void *qthis,
bool arg1) {
  ((QFileDialog*)qthis)->setResolveSymlinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 140, column 10>
//   // proto:  void QFileDialog::setReadOnly(bool enabled);
// _ZN11QFileDialog11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN11QFileDialog11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QFileDialog*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 186, column 10>
//   // proto:  void QFileDialog::filesSelected(const QStringList & files);
// _ZN11QFileDialog13filesSelectedERK11QStringList filesSelected(const class QStringList &)
extern "C"
void
C_ZN11QFileDialog13filesSelectedERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileDialog*)qthis)->filesSelected(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 177, column 10>
//   // proto:  void QFileDialog::setOptions(Options options);
// _ZN11QFileDialog10setOptionsE6QFlagsINS_6OptionEE setOptions(Options)
extern "C"
void
C_ZN11QFileDialog10setOptionsE6QFlagsINS_6OptionEE(void *qthis,
QFileDialog::Options arg1) {
  ((QFileDialog*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 113, column 10>
//   // proto:  void QFileDialog::setNameFilterDetailsVisible(bool enabled);
// _ZN11QFileDialog27setNameFilterDetailsVisibleEb setNameFilterDetailsVisible(_Bool)
extern "C"
void
C_ZN11QFileDialog27setNameFilterDetailsVisibleEb(void *qthis,
bool arg1) {
  ((QFileDialog*)qthis)->setNameFilterDetailsVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 119, column 10>
//   // proto:  void QFileDialog::selectNameFilter(const QString & filter);
// _ZN11QFileDialog16selectNameFilterERK7QString selectNameFilter(const class QString &)
extern "C"
void
C_ZN11QFileDialog16selectNameFilterERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->selectNameFilter(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 150, column 10>
//   // proto:  bool QFileDialog::restoreState(const QByteArray & state);
// _ZN11QFileDialog12restoreStateERK10QByteArray restoreState(const class QByteArray &)
extern "C"
bool
C_ZN11QFileDialog12restoreStateERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QFileDialog*)qthis)->restoreState(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 165, column 24>
//   // proto:  QFileIconProvider * QFileDialog::iconProvider();
// _ZNK11QFileDialog12iconProviderEv iconProvider()
extern "C"
void*
C_ZNK11QFileDialog12iconProviderEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->iconProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 108, column 17>
//   // proto:  QStringList QFileDialog::selectedFiles();
// _ZNK11QFileDialog13selectedFilesEv selectedFiles()
extern "C"
QStringList*
C_ZNK11QFileDialog13selectedFilesEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->selectedFiles();
  return new QStringList(ret); // 5
}
//   // proto:  void QFileDialog::~QFileDialog();
extern "C"
void C_ZN11QFileDialogD2Ev(void *qthis) {
  delete (QFileDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 162, column 28>
//   // proto:  QAbstractItemDelegate * QFileDialog::itemDelegate();
// _ZNK11QFileDialog12itemDelegateEv itemDelegate()
extern "C"
void*
C_ZNK11QFileDialog12itemDelegateEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->itemDelegate();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 191, column 10>
//   // proto:  void QFileDialog::urlsSelected(const QList<QUrl> & urls);
// _ZN11QFileDialog12urlsSelectedERK5QListI4QUrlE urlsSelected(const QList<class QUrl> &)
extern "C"
void
C_ZN11QFileDialog12urlsSelectedERK5QListI4QUrlE(void *qthis,
const QList<QUrl>* arg1) {
  ((QFileDialog*)qthis)->urlsSelected(*((const QList<QUrl>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 229, column 20>
//   // proto: static QString QFileDialog::getExistingDirectory(QWidget * parent, const QString & caption, const QString & dir, Options options);
// _ZN11QFileDialog20getExistingDirectoryEP7QWidgetRK7QStringS4_6QFlagsINS_6OptionEE getExistingDirectory(class QWidget *, const class QString &, const class QString &, Options)
extern "C"
QString*
C_ZN11QFileDialog20getExistingDirectoryEP7QWidgetRK7QStringS4_6QFlagsINS_6OptionEE(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QFileDialog::Options arg4) {
  auto ret =
  QFileDialog::getExistingDirectory(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 153, column 10>
//   // proto:  bool QFileDialog::confirmOverwrite();
// _ZNK11QFileDialog16confirmOverwriteEv confirmOverwrite()
extern "C"
bool
C_ZNK11QFileDialog16confirmOverwriteEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->confirmOverwrite();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 158, column 10>
//   // proto:  void QFileDialog::setHistory(const QStringList & paths);
// _ZN11QFileDialog10setHistoryERK11QStringList setHistory(const class QStringList &)
extern "C"
void
C_ZN11QFileDialog10setHistoryERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileDialog*)qthis)->setHistory(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 116, column 10>
//   // proto:  void QFileDialog::setNameFilter(const QString & filter);
// _ZN11QFileDialog13setNameFilterERK7QString setNameFilter(const class QString &)
extern "C"
void
C_ZN11QFileDialog13setNameFilterERK7QString(void *qthis,
const QString* arg1) {
  ((QFileDialog*)qthis)->setNameFilter(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 175, column 10>
//   // proto:  void QFileDialog::setOption(QFileDialog::Option option, bool on);
// _ZN11QFileDialog9setOptionENS_6OptionEb setOption(enum QFileDialog::Option, _Bool)
extern "C"
void
C_ZN11QFileDialog9setOptionENS_6OptionEb(void *qthis,
QFileDialog::Option arg1,
bool arg2) {
  ((QFileDialog*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 172, column 26>
//   // proto:  QAbstractProxyModel * QFileDialog::proxyModel();
// _ZNK11QFileDialog10proxyModelEv proxyModel()
extern "C"
void*
C_ZNK11QFileDialog10proxyModelEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->proxyModel();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 117, column 10>
//   // proto:  void QFileDialog::setNameFilters(const QStringList & filters);
// _ZN11QFileDialog14setNameFiltersERK11QStringList setNameFilters(const class QStringList &)
extern "C"
void
C_ZN11QFileDialog14setNameFiltersERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileDialog*)qthis)->setNameFilters(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 146, column 10>
//   // proto:  void QFileDialog::setSidebarUrls(const QList<QUrl> & urls);
// _ZN11QFileDialog14setSidebarUrlsERK5QListI4QUrlE setSidebarUrls(const QList<class QUrl> &)
extern "C"
void
C_ZN11QFileDialog14setSidebarUrlsERK5QListI4QUrlE(void *qthis,
const QList<QUrl>* arg1) {
  ((QFileDialog*)qthis)->setSidebarUrls(*((const QList<QUrl>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 111, column 17>
//   // proto:  QList<QUrl> QFileDialog::selectedUrls();
// _ZNK11QFileDialog12selectedUrlsEv selectedUrls()
extern "C"
QList<QUrl>*
C_ZNK11QFileDialog12selectedUrlsEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->selectedUrls();
  return new QList<QUrl>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 159, column 17>
//   // proto:  QStringList QFileDialog::history();
// _ZNK11QFileDialog7historyEv history()
extern "C"
QStringList*
C_ZNK11QFileDialog7historyEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->history();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 132, column 14>
//   // proto:  QFileDialog::ViewMode QFileDialog::viewMode();
// _ZNK11QFileDialog8viewModeEv viewMode()
extern "C"
QFileDialog::ViewMode
C_ZNK11QFileDialog8viewModeEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->viewMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 114, column 10>
//   // proto:  bool QFileDialog::isNameFilterDetailsVisible();
// _ZNK11QFileDialog26isNameFilterDetailsVisibleEv isNameFilterDetailsVisible()
extern "C"
bool
C_ZNK11QFileDialog26isNameFilterDetailsVisibleEv(void *qthis) {
  auto ret =
  ((QFileDialog*)qthis)->isNameFilterDetailsVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 206, column 17>
//   // proto: static QUrl QFileDialog::getOpenFileUrl(QWidget * parent, const QString & caption, const QUrl & dir, const QString & filter, QString * selectedFilter, Options options, const QStringList & supportedSchemes);
// _ZN11QFileDialog14getOpenFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList getOpenFileUrl(class QWidget *, const class QString &, const class QUrl &, const class QString &, class QString *, Options, const class QStringList &)
extern "C"
QUrl*
C_ZN11QFileDialog14getOpenFileUrlEP7QWidgetRK7QStringRK4QUrlS4_PS2_6QFlagsINS_6OptionEERK11QStringList(QWidget * arg1,
const QString* arg2,
const QUrl* arg3,
const QString* arg4,
QString * arg5,
QFileDialog::Options arg6,
const QStringList* arg7) {
  auto ret =
  QFileDialog::getOpenFileUrl(arg1,
*((const QString*)arg2),
*((const QUrl*)arg3),
*((const QString*)arg4),
arg5,
arg6,
*((const QStringList*)arg7));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfiledialog.h', line 94, column 14>
//   // proto:  void QFileDialog::QFileDialog(QWidget * parent, const QString & caption, const QString & directory, const QString & filter);
extern "C"
QFileDialog*
C_ZN11QFileDialogC2EP7QWidgetRK7QStringS4_S4_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4) {
  auto ret = new QFileDialog(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4));
  return ret;
}
// <= ext block end

// body block begin =>
// QFileDialog_SlotProxy here
class QFileDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileDialog_SlotProxy():QObject(){}

public slots:
  // directoryUrlEntered(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // fileSelected(const class QString &)
  void slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog12fileSelectedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // urlSelected(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog11urlSelectedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // directoryEntered(const class QString &)
  void slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog16directoryEnteredERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // currentUrlChanged(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // filesSelected(const class QStringList &)
  void slot_proxy_func__ZN11QFileDialog13filesSelectedERK11QStringList(const QStringList & arg0);
public:
  void (*slot_func__ZN11QFileDialog13filesSelectedERK11QStringList)(void* rsfptr, const QStringList & arg0) = NULL;
public slots:
  // currentChanged(const class QString &)
  void slot_proxy_func__ZN11QFileDialog14currentChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog14currentChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // filterSelected(const class QString &)
  void slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog14filterSelectedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qfiledialog.moc"

extern "C" {
  QFileDialog_SlotProxy* QFileDialog_SlotProxy_new()
  {
    return new QFileDialog_SlotProxy();
  }
};

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(directoryUrlEntered(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog12fileSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog12fileSelectedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog12fileSelectedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog12fileSelectedERK7QString = (decltype(that->slot_func__ZN11QFileDialog12fileSelectedERK7QString))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(fileSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog12fileSelectedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog11urlSelectedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(urlSelected(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog11urlSelectedERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog16directoryEnteredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog16directoryEnteredERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog16directoryEnteredERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog16directoryEnteredERK7QString = (decltype(that->slot_func__ZN11QFileDialog16directoryEnteredERK7QString))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(directoryEntered(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog16directoryEnteredERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog17currentUrlChangedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(currentUrlChanged(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog17currentUrlChangedERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog13filesSelectedERK11QStringList(const QStringList & arg0) {
  if (this->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog13filesSelectedERK11QStringList(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList = (decltype(that->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(filesSelected(const class QStringList &)), that, SLOT(slot_proxy_func__ZN11QFileDialog13filesSelectedERK11QStringList(const QStringList & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog13filesSelectedERK11QStringList(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog14currentChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog14currentChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog14currentChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog14currentChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog14currentChangedERK7QString = (decltype(that->slot_func__ZN11QFileDialog14currentChangedERK7QString))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(currentChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog14currentChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog14currentChangedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog14filterSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog14filterSelectedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog14filterSelectedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFileDialog14filterSelectedERK7QString = (decltype(that->slot_func__ZN11QFileDialog14filterSelectedERK7QString))ffifptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(filterSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog14filterSelectedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

