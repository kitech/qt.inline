// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qtextdocument.h
// dst-file: /src/gui/qtextdocument.cxx
//

// header block begin =>
#include <qtextdocument.h>

extern "C" {

int QTextDocument_Class_Size()
{
  return sizeof(QTextDocument);
}

// QTextDocument(class QObject *)
QTextDocument* dector_ZN13QTextDocumentC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QTextDocument) == 32, "tyszerr");
  QTextDocument* rthis = new QTextDocument(parent);
  return rthis;
}

// QTextDocument(const class QString &, class QObject *)
QTextDocument* dector_ZN13QTextDocumentC1ERK7QStringP7QObject(const QString & text, QObject * parent)
{
  // static_assert(sizeof(QTextDocument) == 32, "tyszerr");
  QTextDocument* rthis = new QTextDocument(text, parent);
  return rthis;
}

// ~QTextDocument()
void dedtor_ZN13QTextDocumentD0Ev(QTextDocument* that)
{
  QTextDocument* rthis = (QTextDocument*)that;
  delete rthis;
}

int QAbstractUndoItem_Class_Size()
{
  return sizeof(QAbstractUndoItem);
}

  // proto:  void QAbstractUndoItem::~QAbstractUndoItem();
void demth_ZN17QAbstractUndoItemD0Ev(void *that)
{
  QAbstractUndoItem *cthat = (QAbstractUndoItem *)that;
   cthat->~QAbstractUndoItem();
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
// QTextDocument_SlotProxy here
class QTextDocument_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextDocument_SlotProxy():QObject(){}

public slots:
  // cursorPositionChanged(const class QTextCursor &)
  void slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0);
public:
  void (*slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor)(void* rsfptr, const QTextCursor & arg0) = NULL;
public slots:
  // modificationChanged(_Bool)
  void slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument19modificationChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // contentsChanged()
  void slot_proxy_func__ZN13QTextDocument15contentsChangedEv();
public:
  void (*slot_func__ZN13QTextDocument15contentsChangedEv)(void* rsfptr) = NULL;
public slots:
  // baseUrlChanged(const class QUrl &)
  void slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0);
public:
  void (*slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl)(void* rsfptr, const QUrl & arg0) = NULL;
public slots:
  // blockCountChanged(int)
  void slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0);
public:
  void (*slot_func__ZN13QTextDocument17blockCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // documentLayoutChanged()
  void slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv();
public:
  void (*slot_func__ZN13QTextDocument21documentLayoutChangedEv)(void* rsfptr) = NULL;
public slots:
  // undoCommandAdded()
  void slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv();
public:
  void (*slot_func__ZN13QTextDocument16undoCommandAddedEv)(void* rsfptr) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN13QTextDocument13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // contentsChange(int, int, int)
  void slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN13QTextDocument14contentsChangeEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qtextdocument.moc"

extern "C" {
  QTextDocument_SlotProxy* QTextDocument_SlotProxy_new()
  {
    return new QTextDocument_SlotProxy();
  }
};

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0) {
  if (this->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor = (decltype(that->slot_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(cursorPositionChanged(const class QTextCursor &)), that, SLOT(slot_proxy_func__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(const QTextCursor & arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument19modificationChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument19modificationChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument19modificationChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument19modificationChangedEb = (decltype(that->slot_func__ZN13QTextDocument19modificationChangedEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(modificationChanged(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument19modificationChangedEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument19modificationChangedEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument13undoAvailableEb = (decltype(that->slot_func__ZN13QTextDocument13undoAvailableEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument13undoAvailableEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument15contentsChangedEv() {
  if (this->slot_func__ZN13QTextDocument15contentsChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument15contentsChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument15contentsChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument15contentsChangedEv = (decltype(that->slot_func__ZN13QTextDocument15contentsChangedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(contentsChanged()), that, SLOT(slot_proxy_func__ZN13QTextDocument15contentsChangedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument15contentsChangedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0) {
  if (this->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument14baseUrlChangedERK4QUrl(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl = (decltype(that->slot_func__ZN13QTextDocument14baseUrlChangedERK4QUrl))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(baseUrlChanged(const class QUrl &)), that, SLOT(slot_proxy_func__ZN13QTextDocument14baseUrlChangedERK4QUrl(const QUrl & arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument14baseUrlChangedERK4QUrl(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0) {
  if (this->slot_func__ZN13QTextDocument17blockCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument17blockCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument17blockCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument17blockCountChangedEi = (decltype(that->slot_func__ZN13QTextDocument17blockCountChangedEi))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(blockCountChanged(int)), that, SLOT(slot_proxy_func__ZN13QTextDocument17blockCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument17blockCountChangedEi(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv() {
  if (this->slot_func__ZN13QTextDocument21documentLayoutChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument21documentLayoutChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument21documentLayoutChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument21documentLayoutChangedEv = (decltype(that->slot_func__ZN13QTextDocument21documentLayoutChangedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(documentLayoutChanged()), that, SLOT(slot_proxy_func__ZN13QTextDocument21documentLayoutChangedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument21documentLayoutChangedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv() {
  if (this->slot_func__ZN13QTextDocument16undoCommandAddedEv != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument16undoCommandAddedEv(this->rsfptr);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument16undoCommandAddedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument16undoCommandAddedEv = (decltype(that->slot_func__ZN13QTextDocument16undoCommandAddedEv))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(undoCommandAdded()), that, SLOT(slot_proxy_func__ZN13QTextDocument16undoCommandAddedEv()));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument16undoCommandAddedEv(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN13QTextDocument13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument13redoAvailableEb = (decltype(that->slot_func__ZN13QTextDocument13redoAvailableEb))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN13QTextDocument13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument13redoAvailableEb(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextDocument_SlotProxy::slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN13QTextDocument14contentsChangeEiii != NULL) {
    // do smth...
    this->slot_func__ZN13QTextDocument14contentsChangeEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QTextDocument_SlotProxy_connect__ZN13QTextDocument14contentsChangeEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextDocument_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QTextDocument14contentsChangeEiii = (decltype(that->slot_func__ZN13QTextDocument14contentsChangeEiii))ffifptr;
  QObject::connect((QTextDocument*)sender, SIGNAL(contentsChange(int, int, int)), that, SLOT(slot_proxy_func__ZN13QTextDocument14contentsChangeEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QTextDocument_SlotProxy_disconnect__ZN13QTextDocument14contentsChangeEiii(QTextDocument_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

