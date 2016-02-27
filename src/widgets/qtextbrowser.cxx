// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qtextbrowser.h
// dst-file: /src/widgets/qtextbrowser.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextbrowser.h>


#include <qurl.h>
#include <qstring.h>
#include <qvariant.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qtextbrowser_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextBrowser_Class_Size()
{
  return sizeof(QTextBrowser);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 70, column 10>
//   // proto:  bool QTextBrowser::isBackwardAvailable();
// _ZNK12QTextBrowser19isBackwardAvailableEv isBackwardAvailable()
extern "C"
bool
C_ZNK12QTextBrowser19isBackwardAvailableEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->isBackwardAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 89, column 18>
//   // proto:  void QTextBrowser::reload();
// _ZN12QTextBrowser6reloadEv reload()
extern "C"
void
C_ZN12QTextBrowser6reloadEv(void *qthis) {
  ((QTextBrowser*)qthis)->reload();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 81, column 10>
//   // proto:  bool QTextBrowser::openLinks();
// _ZNK12QTextBrowser9openLinksEv openLinks()
extern "C"
bool
C_ZNK12QTextBrowser9openLinksEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->openLinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 72, column 10>
//   // proto:  void QTextBrowser::clearHistory();
// _ZN12QTextBrowser12clearHistoryEv clearHistory()
extern "C"
void
C_ZN12QTextBrowser12clearHistoryEv(void *qthis) {
  ((QTextBrowser*)qthis)->clearHistory();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 96, column 10>
//   // proto:  void QTextBrowser::highlighted(const QUrl & );
// _ZN12QTextBrowser11highlightedERK4QUrl highlighted(const class QUrl &)
extern "C"
void
C_ZN12QTextBrowser11highlightedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextBrowser*)qthis)->highlighted(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 49, column 5>
//   // proto:  const QMetaObject * QTextBrowser::metaObject();
// _ZNK12QTextBrowser10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QTextBrowser10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 74, column 10>
//   // proto:  QUrl QTextBrowser::historyUrl(int );
// _ZNK12QTextBrowser10historyUrlEi historyUrl(int)
extern "C"
QUrl*
C_ZNK12QTextBrowser10historyUrlEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextBrowser*)qthis)->historyUrl(arg1);
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 95, column 10>
//   // proto:  void QTextBrowser::sourceChanged(const QUrl & );
// _ZN12QTextBrowser13sourceChangedERK4QUrl sourceChanged(const class QUrl &)
extern "C"
void
C_ZN12QTextBrowser13sourceChangedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextBrowser*)qthis)->sourceChanged(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 71, column 10>
//   // proto:  bool QTextBrowser::isForwardAvailable();
// _ZNK12QTextBrowser18isForwardAvailableEv isForwardAvailable()
extern "C"
bool
C_ZNK12QTextBrowser18isForwardAvailableEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->isForwardAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 78, column 10>
//   // proto:  bool QTextBrowser::openExternalLinks();
// _ZNK12QTextBrowser17openExternalLinksEv openExternalLinks()
extern "C"
bool
C_ZNK12QTextBrowser17openExternalLinksEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->openExternalLinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 60, column 14>
//   // proto:  void QTextBrowser::QTextBrowser(QWidget * parent);
extern "C"
QTextBrowser*
C_ZN12QTextBrowserC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTextBrowser(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 75, column 9>
//   // proto:  int QTextBrowser::backwardHistoryCount();
// _ZNK12QTextBrowser20backwardHistoryCountEv backwardHistoryCount()
extern "C"
int
C_ZNK12QTextBrowser20backwardHistoryCountEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->backwardHistoryCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 88, column 18>
//   // proto:  void QTextBrowser::home();
// _ZN12QTextBrowser4homeEv home()
extern "C"
void
C_ZN12QTextBrowser4homeEv(void *qthis) {
  ((QTextBrowser*)qthis)->home();
}
//   // proto:  void QTextBrowser::~QTextBrowser();
extern "C"
void C_ZN12QTextBrowserD2Ev(void *qthis) {
  delete (QTextBrowser*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 82, column 10>
//   // proto:  void QTextBrowser::setOpenLinks(bool open);
// _ZN12QTextBrowser12setOpenLinksEb setOpenLinks(_Bool)
extern "C"
void
C_ZN12QTextBrowser12setOpenLinksEb(void *qthis,
bool arg1) {
  ((QTextBrowser*)qthis)->setOpenLinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 87, column 18>
//   // proto:  void QTextBrowser::forward();
// _ZN12QTextBrowser7forwardEv forward()
extern "C"
void
C_ZN12QTextBrowser7forwardEv(void *qthis) {
  ((QTextBrowser*)qthis)->forward();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 97, column 10>
//   // proto:  void QTextBrowser::highlighted(const QString & );
// _ZN12QTextBrowser11highlightedERK7QString highlighted(const class QString &)
extern "C"
void
C_ZN12QTextBrowser11highlightedERK7QString(void *qthis,
const QString* arg1) {
  ((QTextBrowser*)qthis)->highlighted(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 73, column 13>
//   // proto:  QString QTextBrowser::historyTitle(int );
// _ZNK12QTextBrowser12historyTitleEi historyTitle(int)
extern "C"
QString*
C_ZNK12QTextBrowser12historyTitleEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextBrowser*)qthis)->historyTitle(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 93, column 10>
//   // proto:  void QTextBrowser::forwardAvailable(bool );
// _ZN12QTextBrowser16forwardAvailableEb forwardAvailable(_Bool)
extern "C"
void
C_ZN12QTextBrowser16forwardAvailableEb(void *qthis,
bool arg1) {
  ((QTextBrowser*)qthis)->forwardAvailable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 66, column 10>
//   // proto:  void QTextBrowser::setSearchPaths(const QStringList & paths);
// _ZN12QTextBrowser14setSearchPathsERK11QStringList setSearchPaths(const class QStringList &)
extern "C"
void
C_ZN12QTextBrowser14setSearchPathsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QTextBrowser*)qthis)->setSearchPaths(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 68, column 22>
//   // proto:  QVariant QTextBrowser::loadResource(int type, const QUrl & name);
// _ZN12QTextBrowser12loadResourceEiRK4QUrl loadResource(int, const class QUrl &)
extern "C"
QVariant*
C_ZN12QTextBrowser12loadResourceEiRK4QUrl(void *qthis,
int arg1,
const QUrl* arg2) {
  auto ret =
  ((QTextBrowser*)qthis)->loadResource(arg1,
*((const QUrl*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 63, column 10>
//   // proto:  QUrl QTextBrowser::source();
// _ZNK12QTextBrowser6sourceEv source()
extern "C"
QUrl*
C_ZNK12QTextBrowser6sourceEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->source();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 94, column 10>
//   // proto:  void QTextBrowser::historyChanged();
// _ZN12QTextBrowser14historyChangedEv historyChanged()
extern "C"
void
C_ZN12QTextBrowser14historyChangedEv(void *qthis) {
  ((QTextBrowser*)qthis)->historyChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 79, column 10>
//   // proto:  void QTextBrowser::setOpenExternalLinks(bool open);
// _ZN12QTextBrowser20setOpenExternalLinksEb setOpenExternalLinks(_Bool)
extern "C"
void
C_ZN12QTextBrowser20setOpenExternalLinksEb(void *qthis,
bool arg1) {
  ((QTextBrowser*)qthis)->setOpenExternalLinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 85, column 18>
//   // proto:  void QTextBrowser::setSource(const QUrl & name);
// _ZN12QTextBrowser9setSourceERK4QUrl setSource(const class QUrl &)
extern "C"
void
C_ZN12QTextBrowser9setSourceERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextBrowser*)qthis)->setSource(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 65, column 17>
//   // proto:  QStringList QTextBrowser::searchPaths();
// _ZNK12QTextBrowser11searchPathsEv searchPaths()
extern "C"
QStringList*
C_ZNK12QTextBrowser11searchPathsEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->searchPaths();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 86, column 18>
//   // proto:  void QTextBrowser::backward();
// _ZN12QTextBrowser8backwardEv backward()
extern "C"
void
C_ZN12QTextBrowser8backwardEv(void *qthis) {
  ((QTextBrowser*)qthis)->backward();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 76, column 9>
//   // proto:  int QTextBrowser::forwardHistoryCount();
// _ZNK12QTextBrowser19forwardHistoryCountEv forwardHistoryCount()
extern "C"
int
C_ZNK12QTextBrowser19forwardHistoryCountEv(void *qthis) {
  auto ret =
  ((QTextBrowser*)qthis)->forwardHistoryCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 98, column 10>
//   // proto:  void QTextBrowser::anchorClicked(const QUrl & );
// _ZN12QTextBrowser13anchorClickedERK4QUrl anchorClicked(const class QUrl &)
extern "C"
void
C_ZN12QTextBrowser13anchorClickedERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QTextBrowser*)qthis)->anchorClicked(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextbrowser.h', line 92, column 10>
//   // proto:  void QTextBrowser::backwardAvailable(bool );
// _ZN12QTextBrowser17backwardAvailableEb backwardAvailable(_Bool)
extern "C"
void
C_ZN12QTextBrowser17backwardAvailableEb(void *qthis,
bool arg1) {
  ((QTextBrowser*)qthis)->backwardAvailable(arg1);
}
// <= ext block end

// body block begin =>
// QTextBrowser_SlotProxy here
class QTextBrowser_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextBrowser_SlotProxy():QObject(){}

public slots:
  // historyChanged()
  void slot_proxy_func__ZN12QTextBrowser14historyChangedEv();
public:
  void (*slot_func__ZN12QTextBrowser14historyChangedEv)(void* rsfptr) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QTextBrowser11highlightedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // sourceChanged(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser13sourceChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // highlighted(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser11highlightedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser11highlightedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // forwardAvailable(_Bool)
  void slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0);
public:
  void (*slot_func__ZN12QTextBrowser16forwardAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // anchorClicked(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // backwardAvailable(_Bool)
  void slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0);
public:
  void (*slot_func__ZN12QTextBrowser17backwardAvailableEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtextbrowser.moc"

extern "C" {
  QTextBrowser_SlotProxy* QTextBrowser_SlotProxy_new()
  {
    return new QTextBrowser_SlotProxy();
  }
};

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser14historyChangedEv() {
  if (this->slot_func__ZN12QTextBrowser14historyChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser14historyChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser14historyChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser14historyChangedEv = (decltype(that->slot_func__ZN12QTextBrowser14historyChangedEv))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(historyChanged()), that, SLOT(slot_proxy_func__ZN12QTextBrowser14historyChangedEv()));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser14historyChangedEv(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QTextBrowser11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser11highlightedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser11highlightedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser11highlightedERK7QString = (decltype(that->slot_func__ZN12QTextBrowser11highlightedERK7QString))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser11highlightedERK7QString(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser13sourceChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser13sourceChangedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(sourceChanged(const class QUrl &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser13sourceChangedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser13sourceChangedERK4QUrl(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser11highlightedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN12QTextBrowser11highlightedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser11highlightedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser11highlightedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser11highlightedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser11highlightedERK4QUrl))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(highlighted(const class QUrl &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser11highlightedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser11highlightedERK4QUrl(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0) {
  if (this->slot_func__ZN12QTextBrowser16forwardAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser16forwardAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser16forwardAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser16forwardAvailableEb = (decltype(that->slot_func__ZN12QTextBrowser16forwardAvailableEb))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(forwardAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser16forwardAvailableEb(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser13anchorClickedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(anchorClicked(const class QUrl &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser13anchorClickedERK4QUrl(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0) {
  if (this->slot_func__ZN12QTextBrowser17backwardAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser17backwardAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser17backwardAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextBrowser_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QTextBrowser17backwardAvailableEb = (decltype(that->slot_func__ZN12QTextBrowser17backwardAvailableEb))ffifptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(backwardAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser17backwardAvailableEb(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

