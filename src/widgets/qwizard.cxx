// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qwizard.h
// dst-file: /src/widgets/qwizard.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qwizard.h>


#include <qstring.h>
#include <qpixmap.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qlist.h>
#include <qmetatype.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qwizard_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWizardPage_Class_Size()
{
  return sizeof(QWizardPage);
}

extern "C"
int QWizard_Class_Size()
{
  return sizeof(QWizard);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 213, column 5>
//   // proto:  const QMetaObject * QWizardPage::metaObject();
// _ZNK11QWizardPage10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QWizardPage10metaObjectEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 222, column 13>
//   // proto:  QString QWizardPage::title();
// _ZNK11QWizardPage5titleEv title()
extern "C"
QString*
C_ZNK11QWizardPage5titleEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->title();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 225, column 10>
//   // proto:  void QWizardPage::setPixmap(QWizard::WizardPixmap which, const QPixmap & pixmap);
// _ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap setPixmap(class QWizard::WizardPixmap, const class QPixmap &)
extern "C"
void
C_ZN11QWizardPage9setPixmapEN7QWizard12WizardPixmapERK7QPixmap(void *qthis,
QWizard::WizardPixmap* arg1,
const QPixmap* arg2) {
  ((QWizardPage*)qthis)->setPixmap(*((QWizard::WizardPixmap*)arg1),
*((const QPixmap*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 224, column 13>
//   // proto:  QString QWizardPage::subTitle();
// _ZNK11QWizardPage8subTitleEv subTitle()
extern "C"
QString*
C_ZNK11QWizardPage8subTitleEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->subTitle();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 228, column 10>
//   // proto:  bool QWizardPage::isFinalPage();
// _ZNK11QWizardPage11isFinalPageEv isFinalPage()
extern "C"
bool
C_ZNK11QWizardPage11isFinalPageEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->isFinalPage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 236, column 18>
//   // proto:  bool QWizardPage::validatePage();
// _ZN11QWizardPage12validatePageEv validatePage()
extern "C"
bool
C_ZN11QWizardPage12validatePageEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->validatePage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 238, column 17>
//   // proto:  int QWizardPage::nextId();
// _ZNK11QWizardPage6nextIdEv nextId()
extern "C"
int
C_ZNK11QWizardPage6nextIdEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->nextId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 235, column 18>
//   // proto:  void QWizardPage::cleanupPage();
// _ZN11QWizardPage11cleanupPageEv cleanupPage()
extern "C"
void
C_ZN11QWizardPage11cleanupPageEv(void *qthis) {
  ((QWizardPage*)qthis)->cleanupPage();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 237, column 18>
//   // proto:  bool QWizardPage::isComplete();
// _ZNK11QWizardPage10isCompleteEv isComplete()
extern "C"
bool
C_ZNK11QWizardPage10isCompleteEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->isComplete();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 231, column 10>
//   // proto:  void QWizardPage::setButtonText(QWizard::WizardButton which, const QString & text);
// _ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString setButtonText(class QWizard::WizardButton, const class QString &)
extern "C"
void
C_ZN11QWizardPage13setButtonTextEN7QWizard12WizardButtonERK7QString(void *qthis,
QWizard::WizardButton* arg1,
const QString* arg2) {
  ((QWizardPage*)qthis)->setButtonText(*((QWizard::WizardButton*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 241, column 10>
//   // proto:  void QWizardPage::completeChanged();
// _ZN11QWizardPage15completeChangedEv completeChanged()
extern "C"
void
C_ZN11QWizardPage15completeChangedEv(void *qthis) {
  ((QWizardPage*)qthis)->completeChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 230, column 10>
//   // proto:  bool QWizardPage::isCommitPage();
// _ZNK11QWizardPage12isCommitPageEv isCommitPage()
extern "C"
bool
C_ZNK11QWizardPage12isCommitPageEv(void *qthis) {
  auto ret =
  ((QWizardPage*)qthis)->isCommitPage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 218, column 14>
//   // proto:  void QWizardPage::QWizardPage(QWidget * parent);
extern "C"
QWizardPage*
C_ZN11QWizardPageC2EP7QWidget(QWidget * arg1) {
  auto ret = new QWizardPage(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 227, column 10>
//   // proto:  void QWizardPage::setFinalPage(bool finalPage);
// _ZN11QWizardPage12setFinalPageEb setFinalPage(_Bool)
extern "C"
void
C_ZN11QWizardPage12setFinalPageEb(void *qthis,
bool arg1) {
  ((QWizardPage*)qthis)->setFinalPage(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 223, column 10>
//   // proto:  void QWizardPage::setSubTitle(const QString & subTitle);
// _ZN11QWizardPage11setSubTitleERK7QString setSubTitle(const class QString &)
extern "C"
void
C_ZN11QWizardPage11setSubTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QWizardPage*)qthis)->setSubTitle(*((const QString*)arg1));
}
//   // proto:  void QWizardPage::~QWizardPage();
extern "C"
void C_ZN11QWizardPageD2Ev(void *qthis) {
  delete (QWizardPage*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 226, column 13>
//   // proto:  QPixmap QWizardPage::pixmap(QWizard::WizardPixmap which);
// _ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE pixmap(class QWizard::WizardPixmap)
extern "C"
QPixmap*
C_ZNK11QWizardPage6pixmapEN7QWizard12WizardPixmapE(void *qthis,
QWizard::WizardPixmap* arg1) {
  auto ret =
  ((QWizardPage*)qthis)->pixmap(*((QWizard::WizardPixmap*)arg1));
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 229, column 10>
//   // proto:  void QWizardPage::setCommitPage(bool commitPage);
// _ZN11QWizardPage13setCommitPageEb setCommitPage(_Bool)
extern "C"
void
C_ZN11QWizardPage13setCommitPageEb(void *qthis,
bool arg1) {
  ((QWizardPage*)qthis)->setCommitPage(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 234, column 18>
//   // proto:  void QWizardPage::initializePage();
// _ZN11QWizardPage14initializePageEv initializePage()
extern "C"
void
C_ZN11QWizardPage14initializePageEv(void *qthis) {
  ((QWizardPage*)qthis)->initializePage();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 221, column 10>
//   // proto:  void QWizardPage::setTitle(const QString & title);
// _ZN11QWizardPage8setTitleERK7QString setTitle(const class QString &)
extern "C"
void
C_ZN11QWizardPage8setTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QWizardPage*)qthis)->setTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 232, column 13>
//   // proto:  QString QWizardPage::buttonText(QWizard::WizardButton which);
// _ZNK11QWizardPage10buttonTextEN7QWizard12WizardButtonE buttonText(class QWizard::WizardButton)
extern "C"
QString*
C_ZNK11QWizardPage10buttonTextEN7QWizard12WizardButtonE(void *qthis,
QWizard::WizardButton* arg1) {
  auto ret =
  ((QWizardPage*)qthis)->buttonText(*((QWizard::WizardButton*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 165, column 10>
//   // proto:  void QWizard::setSideWidget(QWidget * widget);
// _ZN7QWizard13setSideWidgetEP7QWidget setSideWidget(class QWidget *)
extern "C"
void
C_ZN7QWizard13setSideWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QWizard*)qthis)->setSideWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 135, column 18>
//   // proto:  QWizardPage * QWizard::currentPage();
// _ZNK7QWizard11currentPageEv currentPage()
extern "C"
void*
C_ZNK7QWizard11currentPageEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->currentPage();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 183, column 10>
//   // proto:  void QWizard::next();
// _ZN7QWizard4nextEv next()
extern "C"
void
C_ZN7QWizard4nextEv(void *qthis) {
  ((QWizard*)qthis)->next();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 148, column 10>
//   // proto:  bool QWizard::testOption(QWizard::WizardOption option);
// _ZNK7QWizard10testOptionENS_12WizardOptionE testOption(enum QWizard::WizardOption)
extern "C"
bool
C_ZNK7QWizard10testOptionENS_12WizardOptionE(void *qthis,
QWizard::WizardOption arg1) {
  auto ret =
  ((QWizard*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 176, column 10>
//   // proto:  void QWizard::helpRequested();
// _ZN7QWizard13helpRequestedEv helpRequested()
extern "C"
void
C_ZN7QWizard13helpRequestedEv(void *qthis) {
  ((QWizard*)qthis)->helpRequested();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 129, column 18>
//   // proto:  QWizardPage * QWizard::page(int id);
// _ZNK7QWizard4pageEi page(int)
extern "C"
void*
C_ZNK7QWizard4pageEi(void *qthis,
int arg1) {
  auto ret =
  ((QWizard*)qthis)->page(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 154, column 10>
//   // proto:  void QWizard::setButtonLayout(const QList<QWizard::WizardButton> & layout);
// _ZN7QWizard15setButtonLayoutERK5QListINS_12WizardButtonEE setButtonLayout(const QList<enum QWizard::WizardButton> &)
extern "C"
void
C_ZN7QWizard15setButtonLayoutERK5QListINS_12WizardButtonEE(void *qthis,
const QList<QWizard::WizardButton>* arg1) {
  ((QWizard*)qthis)->setButtonLayout(*((const QList<QWizard::WizardButton>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 56, column 5>
//   // proto:  const QMetaObject * QWizard::metaObject();
// _ZNK7QWizard10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QWizard10metaObjectEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 141, column 10>
//   // proto:  void QWizard::setField(const QString & name, const QVariant & value);
// _ZN7QWizard8setFieldERK7QStringRK8QVariant setField(const class QString &, const class QVariant &)
extern "C"
void
C_ZN7QWizard8setFieldERK7QStringRK8QVariant(void *qthis,
const QString* arg1,
const QVariant* arg2) {
  ((QWizard*)qthis)->setField(*((const QString*)arg1),
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 127, column 10>
//   // proto:  void QWizard::setPage(int id, QWizardPage * page);
// _ZN7QWizard7setPageEiP11QWizardPage setPage(int, class QWizardPage *)
extern "C"
void
C_ZN7QWizard7setPageEiP11QWizardPage(void *qthis,
int arg1,
QWizardPage * arg2) {
  ((QWizard*)qthis)->setPage(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 161, column 20>
//   // proto:  Qt::TextFormat QWizard::subTitleFormat();
// _ZNK7QWizard14subTitleFormatEv subTitleFormat()
extern "C"
Qt::TextFormat
C_ZNK7QWizard14subTitleFormatEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->subTitleFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 159, column 20>
//   // proto:  Qt::TextFormat QWizard::titleFormat();
// _ZNK7QWizard11titleFormatEv titleFormat()
extern "C"
Qt::TextFormat
C_ZNK7QWizard11titleFormatEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->titleFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 149, column 10>
//   // proto:  void QWizard::setOptions(WizardOptions options);
// _ZN7QWizard10setOptionsE6QFlagsINS_12WizardOptionEE setOptions(WizardOptions)
extern "C"
void
C_ZN7QWizard10setOptionsE6QFlagsINS_12WizardOptionEE(void *qthis,
QWizard::WizardOptions arg1) {
  ((QWizard*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 184, column 10>
//   // proto:  void QWizard::restart();
// _ZN7QWizard7restartEv restart()
extern "C"
void
C_ZN7QWizard7restartEv(void *qthis) {
  ((QWizard*)qthis)->restart();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 182, column 10>
//   // proto:  void QWizard::back();
// _ZN7QWizard4backEv back()
extern "C"
void
C_ZN7QWizard4backEv(void *qthis) {
  ((QWizard*)qthis)->back();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 172, column 11>
//   // proto:  QSize QWizard::sizeHint();
// _ZNK7QWizard8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK7QWizard8sizeHintEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 168, column 10>
//   // proto:  void QWizard::setDefaultProperty(const char * className, const char * property, const char * changedSignal);
// _ZN7QWizard18setDefaultPropertyEPKcS1_S1_ setDefaultProperty(const char *, const char *, const char *)
extern "C"
void
C_ZN7QWizard18setDefaultPropertyEPKcS1_S1_(void *qthis,
const char * arg1,
const char * arg2,
const char * arg3) {
  ((QWizard*)qthis)->setDefaultProperty(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 155, column 10>
//   // proto:  void QWizard::setButton(QWizard::WizardButton which, QAbstractButton * button);
// _ZN7QWizard9setButtonENS_12WizardButtonEP15QAbstractButton setButton(enum QWizard::WizardButton, class QAbstractButton *)
extern "C"
void
C_ZN7QWizard9setButtonENS_12WizardButtonEP15QAbstractButton(void *qthis,
QWizard::WizardButton arg1,
QAbstractButton * arg2) {
  ((QWizard*)qthis)->setButton(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 133, column 10>
//   // proto:  void QWizard::setStartId(int id);
// _ZN7QWizard10setStartIdEi setStartId(int)
extern "C"
void
C_ZN7QWizard10setStartIdEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->setStartId(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 145, column 17>
//   // proto:  QWizard::WizardStyle QWizard::wizardStyle();
// _ZNK7QWizard11wizardStyleEv wizardStyle()
extern "C"
QWizard::WizardStyle
C_ZNK7QWizard11wizardStyleEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->wizardStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 175, column 10>
//   // proto:  void QWizard::currentIdChanged(int id);
// _ZN7QWizard16currentIdChangedEi currentIdChanged(int)
extern "C"
void
C_ZN7QWizard16currentIdChangedEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->currentIdChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 163, column 13>
//   // proto:  QPixmap QWizard::pixmap(QWizard::WizardPixmap which);
// _ZNK7QWizard6pixmapENS_12WizardPixmapE pixmap(enum QWizard::WizardPixmap)
extern "C"
QPixmap*
C_ZNK7QWizard6pixmapENS_12WizardPixmapE(void *qthis,
QWizard::WizardPixmap arg1) {
  auto ret =
  ((QWizard*)qthis)->pixmap(arg1);
  return new QPixmap(ret); // 5
}
//   // proto:  void QWizard::~QWizard();
extern "C"
void C_ZN7QWizardD2Ev(void *qthis) {
  delete (QWizard*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 178, column 10>
//   // proto:  void QWizard::pageAdded(int id);
// _ZN7QWizard9pageAddedEi pageAdded(int)
extern "C"
void
C_ZN7QWizard9pageAddedEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->pageAdded(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 147, column 10>
//   // proto:  void QWizard::setOption(QWizard::WizardOption option, bool on);
// _ZN7QWizard9setOptionENS_12WizardOptionEb setOption(enum QWizard::WizardOption, _Bool)
extern "C"
void
C_ZN7QWizard9setOptionENS_12WizardOptionEb(void *qthis,
QWizard::WizardOption arg1,
bool arg2) {
  ((QWizard*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 131, column 16>
//   // proto:  QList<int> QWizard::visitedPages();
// _ZNK7QWizard12visitedPagesEv visitedPages()
extern "C"
QList<int>*
C_ZNK7QWizard12visitedPagesEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->visitedPages();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 144, column 10>
//   // proto:  void QWizard::setWizardStyle(QWizard::WizardStyle style);
// _ZN7QWizard14setWizardStyleENS_11WizardStyleE setWizardStyle(enum QWizard::WizardStyle)
extern "C"
void
C_ZN7QWizard14setWizardStyleENS_11WizardStyleE(void *qthis,
QWizard::WizardStyle arg1) {
  ((QWizard*)qthis)->setWizardStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 139, column 17>
//   // proto:  int QWizard::nextId();
// _ZNK7QWizard6nextIdEv nextId()
extern "C"
int
C_ZNK7QWizard6nextIdEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->nextId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 134, column 9>
//   // proto:  int QWizard::startId();
// _ZNK7QWizard7startIdEv startId()
extern "C"
int
C_ZNK7QWizard7startIdEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->startId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 177, column 10>
//   // proto:  void QWizard::customButtonClicked(int which);
// _ZN7QWizard19customButtonClickedEi customButtonClicked(int)
extern "C"
void
C_ZN7QWizard19customButtonClickedEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->customButtonClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 126, column 9>
//   // proto:  int QWizard::addPage(QWizardPage * page);
// _ZN7QWizard7addPageEP11QWizardPage addPage(class QWizardPage *)
extern "C"
int
C_ZN7QWizard7addPageEP11QWizardPage(void *qthis,
QWizardPage * arg1) {
  auto ret =
  ((QWizard*)qthis)->addPage(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 162, column 10>
//   // proto:  void QWizard::setPixmap(QWizard::WizardPixmap which, const QPixmap & pixmap);
// _ZN7QWizard9setPixmapENS_12WizardPixmapERK7QPixmap setPixmap(enum QWizard::WizardPixmap, const class QPixmap &)
extern "C"
void
C_ZN7QWizard9setPixmapENS_12WizardPixmapERK7QPixmap(void *qthis,
QWizard::WizardPixmap arg1,
const QPixmap* arg2) {
  ((QWizard*)qthis)->setPixmap(arg1,
*((const QPixmap*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 160, column 10>
//   // proto:  void QWizard::setSubTitleFormat(Qt::TextFormat format);
// _ZN7QWizard17setSubTitleFormatEN2Qt10TextFormatE setSubTitleFormat(Qt::TextFormat)
extern "C"
void
C_ZN7QWizard17setSubTitleFormatEN2Qt10TextFormatE(void *qthis,
Qt::TextFormat* arg1) {
  ((QWizard*)qthis)->setSubTitleFormat(*((Qt::TextFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 128, column 10>
//   // proto:  void QWizard::removePage(int id);
// _ZN7QWizard10removePageEi removePage(int)
extern "C"
void
C_ZN7QWizard10removePageEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->removePage(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 132, column 16>
//   // proto:  QList<int> QWizard::pageIds();
// _ZNK7QWizard7pageIdsEv pageIds()
extern "C"
QList<int>*
C_ZNK7QWizard7pageIdsEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->pageIds();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 136, column 9>
//   // proto:  int QWizard::currentId();
// _ZNK7QWizard9currentIdEv currentId()
extern "C"
int
C_ZNK7QWizard9currentIdEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->currentId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 179, column 10>
//   // proto:  void QWizard::pageRemoved(int id);
// _ZN7QWizard11pageRemovedEi pageRemoved(int)
extern "C"
void
C_ZN7QWizard11pageRemovedEi(void *qthis,
int arg1) {
  ((QWizard*)qthis)->pageRemoved(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 152, column 10>
//   // proto:  void QWizard::setButtonText(QWizard::WizardButton which, const QString & text);
// _ZN7QWizard13setButtonTextENS_12WizardButtonERK7QString setButtonText(enum QWizard::WizardButton, const class QString &)
extern "C"
void
C_ZN7QWizard13setButtonTextENS_12WizardButtonERK7QString(void *qthis,
QWizard::WizardButton arg1,
const QString* arg2) {
  ((QWizard*)qthis)->setButtonText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 158, column 10>
//   // proto:  void QWizard::setTitleFormat(Qt::TextFormat format);
// _ZN7QWizard14setTitleFormatEN2Qt10TextFormatE setTitleFormat(Qt::TextFormat)
extern "C"
void
C_ZN7QWizard14setTitleFormatEN2Qt10TextFormatE(void *qthis,
Qt::TextFormat* arg1) {
  ((QWizard*)qthis)->setTitleFormat(*((Qt::TextFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 171, column 10>
//   // proto:  void QWizard::setVisible(bool visible);
// _ZN7QWizard10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN7QWizard10setVisibleEb(void *qthis,
bool arg1) {
  ((QWizard*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 130, column 10>
//   // proto:  bool QWizard::hasVisitedPage(int id);
// _ZNK7QWizard14hasVisitedPageEi hasVisitedPage(int)
extern "C"
bool
C_ZNK7QWizard14hasVisitedPageEi(void *qthis,
int arg1) {
  auto ret =
  ((QWizard*)qthis)->hasVisitedPage(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 150, column 19>
//   // proto:  WizardOptions QWizard::options();
// _ZNK7QWizard7optionsEv options()
extern "C"
QFlags<QWizard::WizardOption>*
C_ZNK7QWizard7optionsEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->options();
  return new QFlags<QWizard::WizardOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 156, column 22>
//   // proto:  QAbstractButton * QWizard::button(QWizard::WizardButton which);
// _ZNK7QWizard6buttonENS_12WizardButtonE button(enum QWizard::WizardButton)
extern "C"
void*
C_ZNK7QWizard6buttonENS_12WizardButtonE(void *qthis,
QWizard::WizardButton arg1) {
  auto ret =
  ((QWizard*)qthis)->button(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 142, column 14>
//   // proto:  QVariant QWizard::field(const QString & name);
// _ZNK7QWizard5fieldERK7QString field(const class QString &)
extern "C"
QVariant*
C_ZNK7QWizard5fieldERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QWizard*)qthis)->field(*((const QString*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 138, column 18>
//   // proto:  bool QWizard::validateCurrentPage();
// _ZN7QWizard19validateCurrentPageEv validateCurrentPage()
extern "C"
bool
C_ZN7QWizard19validateCurrentPageEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->validateCurrentPage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 153, column 13>
//   // proto:  QString QWizard::buttonText(QWizard::WizardButton which);
// _ZNK7QWizard10buttonTextENS_12WizardButtonE buttonText(enum QWizard::WizardButton)
extern "C"
QString*
C_ZNK7QWizard10buttonTextENS_12WizardButtonE(void *qthis,
QWizard::WizardButton arg1) {
  auto ret =
  ((QWizard*)qthis)->buttonText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 166, column 14>
//   // proto:  QWidget * QWizard::sideWidget();
// _ZNK7QWizard10sideWidgetEv sideWidget()
extern "C"
void*
C_ZNK7QWizard10sideWidgetEv(void *qthis) {
  auto ret =
  ((QWizard*)qthis)->sideWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwizard.h', line 123, column 14>
//   // proto:  void QWizard::QWizard(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QWizard*
C_ZN7QWizardC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QWizard(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <= ext block end

// body block begin =>
// QWizardPage_SlotProxy here
class QWizardPage_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWizardPage_SlotProxy():QObject(){}

public slots:
  // completeChanged()
  void slot_proxy_func__ZN11QWizardPage15completeChangedEv();
public:
  void (*slot_func__ZN11QWizardPage15completeChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QWizardPage_SlotProxy* QWizardPage_SlotProxy_new()
  {
    return new QWizardPage_SlotProxy();
  }
};

void QWizardPage_SlotProxy::slot_proxy_func__ZN11QWizardPage15completeChangedEv() {
  if (this->slot_func__ZN11QWizardPage15completeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QWizardPage15completeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QWizardPage_SlotProxy_connect__ZN11QWizardPage15completeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizardPage_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QWizardPage15completeChangedEv = (decltype(that->slot_func__ZN11QWizardPage15completeChangedEv))ffifptr;
  QObject::connect((QWizardPage*)sender, SIGNAL(completeChanged()), that, SLOT(slot_proxy_func__ZN11QWizardPage15completeChangedEv()));
  return that;
}
extern "C"
void QWizardPage_SlotProxy_disconnect__ZN11QWizardPage15completeChangedEv(QWizardPage_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QWizard_SlotProxy here
class QWizard_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWizard_SlotProxy():QObject(){}

public slots:
  // helpRequested()
  void slot_proxy_func__ZN7QWizard13helpRequestedEv();
public:
  void (*slot_func__ZN7QWizard13helpRequestedEv)(void* rsfptr) = NULL;
public slots:
  // currentIdChanged(int)
  void slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard16currentIdChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // pageRemoved(int)
  void slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard11pageRemovedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // customButtonClicked(int)
  void slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard19customButtonClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // pageAdded(int)
  void slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0);
public:
  void (*slot_func__ZN7QWizard9pageAddedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qwizard.moc"

extern "C" {
  QWizard_SlotProxy* QWizard_SlotProxy_new()
  {
    return new QWizard_SlotProxy();
  }
};

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard13helpRequestedEv() {
  if (this->slot_func__ZN7QWizard13helpRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard13helpRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard13helpRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard13helpRequestedEv = (decltype(that->slot_func__ZN7QWizard13helpRequestedEv))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(helpRequested()), that, SLOT(slot_proxy_func__ZN7QWizard13helpRequestedEv()));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard13helpRequestedEv(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0) {
  if (this->slot_func__ZN7QWizard16currentIdChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard16currentIdChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard16currentIdChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard16currentIdChangedEi = (decltype(that->slot_func__ZN7QWizard16currentIdChangedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(currentIdChanged(int)), that, SLOT(slot_proxy_func__ZN7QWizard16currentIdChangedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard16currentIdChangedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0) {
  if (this->slot_func__ZN7QWizard11pageRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard11pageRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard11pageRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard11pageRemovedEi = (decltype(that->slot_func__ZN7QWizard11pageRemovedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageRemoved(int)), that, SLOT(slot_proxy_func__ZN7QWizard11pageRemovedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard11pageRemovedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0) {
  if (this->slot_func__ZN7QWizard19customButtonClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard19customButtonClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard19customButtonClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard19customButtonClickedEi = (decltype(that->slot_func__ZN7QWizard19customButtonClickedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(customButtonClicked(int)), that, SLOT(slot_proxy_func__ZN7QWizard19customButtonClickedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard19customButtonClickedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWizard_SlotProxy::slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0) {
  if (this->slot_func__ZN7QWizard9pageAddedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWizard9pageAddedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWizard_SlotProxy_connect__ZN7QWizard9pageAddedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWizard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWizard9pageAddedEi = (decltype(that->slot_func__ZN7QWizard9pageAddedEi))ffifptr;
  QObject::connect((QWizard*)sender, SIGNAL(pageAdded(int)), that, SLOT(slot_proxy_func__ZN7QWizard9pageAddedEi(int arg0)));
  return that;
}
extern "C"
void QWizard_SlotProxy_disconnect__ZN7QWizard9pageAddedEi(QWizard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

