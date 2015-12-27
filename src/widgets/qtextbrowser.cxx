// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qtextbrowser.h
// dst-file: /src/widgets/qtextbrowser.cxx
//

// header block begin =>
#include <qtextbrowser.h>

extern "C" {

int QTextBrowser_Class_Size()
{
  return sizeof(QTextBrowser);
}

// QTextBrowser(class QWidget *)
QTextBrowser* dector_ZN12QTextBrowserC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTextBrowser) == 32, "tyszerr");
  QTextBrowser* rthis = new QTextBrowser(parent);
  return rthis;
}

// ~QTextBrowser()
void dedtor_ZN12QTextBrowserD0Ev(QTextBrowser* that)
{
  QTextBrowser* rthis = (QTextBrowser*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTextBrowser_SlotProxy here
class QTextBrowser_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTextBrowser_SlotProxy():QObject(){}

public slots:
  // backwardAvailable(_Bool)
  void slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0);
public:
  void (*slot_func__ZN12QTextBrowser17backwardAvailableEb)(bool arg0) = NULL;
public slots:
  // forwardAvailable(_Bool)
  void slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0);
public:
  void (*slot_func__ZN12QTextBrowser16forwardAvailableEb)(bool arg0) = NULL;
public slots:
  // historyChanged()
  void slot_proxy_func__ZN12QTextBrowser14historyChangedEv();
public:
  void (*slot_func__ZN12QTextBrowser14historyChangedEv)() = NULL;
public slots:
  // sourceChanged(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser13sourceChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl)(const QUrl & arg0) = NULL;
public slots:
  // highlighted(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser11highlightedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser11highlightedERK4QUrl)(const QUrl & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QTextBrowser11highlightedERK7QString)(const QString & arg0) = NULL;
public slots:
  // anchorClicked(const class QUrl &)
  void slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl)(const QUrl & arg0) = NULL;
};
#include "src/widgets/qtextbrowser.moc"

extern "C" {
  QTextBrowser_SlotProxy* QTextBrowser_SlotProxy_new()
  {
    return new QTextBrowser_SlotProxy();
  }
};

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0) {
  if (this->slot_func__ZN12QTextBrowser17backwardAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser17backwardAvailableEb(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser17backwardAvailableEb(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser17backwardAvailableEb = (decltype(that->slot_func__ZN12QTextBrowser17backwardAvailableEb))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(backwardAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN12QTextBrowser17backwardAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser17backwardAvailableEb(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0) {
  if (this->slot_func__ZN12QTextBrowser16forwardAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser16forwardAvailableEb(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser16forwardAvailableEb(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser16forwardAvailableEb = (decltype(that->slot_func__ZN12QTextBrowser16forwardAvailableEb))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(forwardAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN12QTextBrowser16forwardAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser16forwardAvailableEb(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser14historyChangedEv() {
  if (this->slot_func__ZN12QTextBrowser14historyChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser14historyChangedEv();
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser14historyChangedEv(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser14historyChangedEv = (decltype(that->slot_func__ZN12QTextBrowser14historyChangedEv))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(historyChanged()), that, SLOT(slot_proxy_func__ZN12QTextBrowser14historyChangedEv()));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser14historyChangedEv(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser13sourceChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser13sourceChangedERK4QUrl(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser13sourceChangedERK4QUrl))fptr;
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
    this->slot_func__ZN12QTextBrowser11highlightedERK4QUrl(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser11highlightedERK4QUrl(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser11highlightedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser11highlightedERK4QUrl))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(highlighted(const class QUrl &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser11highlightedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser11highlightedERK4QUrl(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QTextBrowser11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser11highlightedERK7QString(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser11highlightedERK7QString(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser11highlightedERK7QString = (decltype(that->slot_func__ZN12QTextBrowser11highlightedERK7QString))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser11highlightedERK7QString(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextBrowser_SlotProxy::slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl(arg0);
  }
}
extern "C"
void* QTextBrowser_SlotProxy_connect__ZN12QTextBrowser13anchorClickedERK4QUrl(QObject* sender, void* fptr){
  auto that = new QTextBrowser_SlotProxy();
  that->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl = (decltype(that->slot_func__ZN12QTextBrowser13anchorClickedERK4QUrl))fptr;
  QObject::connect((QTextBrowser*)sender, SIGNAL(anchorClicked(const class QUrl &)), that, SLOT(slot_proxy_func__ZN12QTextBrowser13anchorClickedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextBrowser_SlotProxy_disconnect__ZN12QTextBrowser13anchorClickedERK4QUrl(QTextBrowser_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

