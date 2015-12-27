// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qfiledialog.h
// dst-file: /src/widgets/qfiledialog.cxx
//

// header block begin =>
#include <qfiledialog.h>

extern "C" {

int QFileDialog_Class_Size()
{
  return sizeof(QFileDialog);
}

// QFileDialog(class QWidget *, Qt::WindowFlags)
QFileDialog* dector_ZN11QFileDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QFileDialog) == 32, "tyszerr");
  QFileDialog* rthis = new QFileDialog(parent, f);
  return rthis;
}

// ~QFileDialog()
void dedtor_ZN11QFileDialogD0Ev(QFileDialog* that)
{
  QFileDialog* rthis = (QFileDialog*)that;
  delete rthis;
}

// QFileDialog(class QWidget *, const class QString &, const class QString &, const class QString &)
QFileDialog* dector_ZN11QFileDialogC1EP7QWidgetRK7QStringS4_S4_(QWidget * parent, const QString & caption, const QString & directory, const QString & filter)
{
  // static_assert(sizeof(QFileDialog) == 32, "tyszerr");
  QFileDialog* rthis = new QFileDialog(parent, caption, directory, filter);
  return rthis;
}

  // proto:  void QFileDialog::setDirectory(const QDir & directory);
void demth_ZN11QFileDialog12setDirectoryERK4QDir(void *that, const QDir & directory)
{
  QFileDialog *cthat = (QFileDialog *)that;
   cthat->setDirectory(directory);
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
// QFileDialog_SlotProxy here
class QFileDialog_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QFileDialog_SlotProxy():QObject(){}

public slots:
  // fileSelected(const class QString &)
  void slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog12fileSelectedERK7QString)(const QString & arg0) = NULL;
public slots:
  // filesSelected(const class QStringList &)
  void slot_proxy_func__ZN11QFileDialog13filesSelectedERK11QStringList(const QStringList & arg0);
public:
  void (*slot_func__ZN11QFileDialog13filesSelectedERK11QStringList)(const QStringList & arg0) = NULL;
public slots:
  // currentChanged(const class QString &)
  void slot_proxy_func__ZN11QFileDialog14currentChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog14currentChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // directoryEntered(const class QString &)
  void slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog16directoryEnteredERK7QString)(const QString & arg0) = NULL;
public slots:
  // urlSelected(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog11urlSelectedERK4QUrl)(const QUrl & arg0) = NULL;
public slots:
  // currentUrlChanged(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl)(const QUrl & arg0) = NULL;
public slots:
  // directoryUrlEntered(const class QUrl &)
  void slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl)(const QUrl & arg0) = NULL;
public slots:
  // filterSelected(const class QString &)
  void slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN11QFileDialog14filterSelectedERK7QString)(const QString & arg0) = NULL;
};
#include "src/widgets/qfiledialog.moc"

extern "C" {
  QFileDialog_SlotProxy* QFileDialog_SlotProxy_new()
  {
    return new QFileDialog_SlotProxy();
  }
};

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog12fileSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog12fileSelectedERK7QString(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog12fileSelectedERK7QString(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog12fileSelectedERK7QString = (decltype(that->slot_func__ZN11QFileDialog12fileSelectedERK7QString))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(fileSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog12fileSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog12fileSelectedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog13filesSelectedERK11QStringList(const QStringList & arg0) {
  if (this->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog13filesSelectedERK11QStringList(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList = (decltype(that->slot_func__ZN11QFileDialog13filesSelectedERK11QStringList))fptr;
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
    this->slot_func__ZN11QFileDialog14currentChangedERK7QString(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog14currentChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog14currentChangedERK7QString = (decltype(that->slot_func__ZN11QFileDialog14currentChangedERK7QString))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(currentChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog14currentChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog14currentChangedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog16directoryEnteredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog16directoryEnteredERK7QString(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog16directoryEnteredERK7QString(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog16directoryEnteredERK7QString = (decltype(that->slot_func__ZN11QFileDialog16directoryEnteredERK7QString))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(directoryEntered(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog16directoryEnteredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog16directoryEnteredERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog11urlSelectedERK4QUrl(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog11urlSelectedERK4QUrl))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(urlSelected(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog11urlSelectedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog11urlSelectedERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog17currentUrlChangedERK4QUrl(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog17currentUrlChangedERK4QUrl))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(currentUrlChanged(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog17currentUrlChangedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog17currentUrlChangedERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl = (decltype(that->slot_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(directoryUrlEntered(const class QUrl &)), that, SLOT(slot_proxy_func__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog19directoryUrlEnteredERK4QUrl(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileDialog_SlotProxy::slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN11QFileDialog14filterSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN11QFileDialog14filterSelectedERK7QString(arg0);
  }
}
extern "C"
void* QFileDialog_SlotProxy_connect__ZN11QFileDialog14filterSelectedERK7QString(QObject* sender, void* fptr){
  auto that = new QFileDialog_SlotProxy();
  that->slot_func__ZN11QFileDialog14filterSelectedERK7QString = (decltype(that->slot_func__ZN11QFileDialog14filterSelectedERK7QString))fptr;
  QObject::connect((QFileDialog*)sender, SIGNAL(filterSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN11QFileDialog14filterSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileDialog_SlotProxy_disconnect__ZN11QFileDialog14filterSelectedERK7QString(QFileDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

