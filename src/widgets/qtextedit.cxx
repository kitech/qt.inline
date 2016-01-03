// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qtextedit.h>

extern "C" {

int QTextEdit_Class_Size()
{
  return sizeof(QTextEdit);
}

// ~QTextEdit()
void dedtor_ZN9QTextEditD0Ev(QTextEdit* that)
{
  QTextEdit* rthis = (QTextEdit*)that;
  delete rthis;
}

// QTextEdit(const class QString &, class QWidget *)
QTextEdit* dector_ZN9QTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(text, parent);
  return rthis;
}

// QTextEdit(class QWidget *)
QTextEdit* dector_ZN9QTextEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(parent);
  return rthis;
}

  // proto:  void QTextEdit::setDocumentTitle(const QString & title);
void demth_ZN9QTextEdit16setDocumentTitleERK7QString(void *that, const QString & title)
{
  QTextEdit *cthat = (QTextEdit *)that;
   cthat->setDocumentTitle(title);
}

  // proto:  QString QTextEdit::documentTitle();
QString* demth_ZNK9QTextEdit13documentTitleEv(void *that)
{
  QTextEdit *cthat = (QTextEdit *)that;
  auto recret = cthat->documentTitle();
  return new QString(recret);
}

  // proto:  bool QTextEdit::isUndoRedoEnabled();
bool demth_ZNK9QTextEdit17isUndoRedoEnabledEv(void *that)
{
  QTextEdit *cthat = (QTextEdit *)that;
  return cthat->isUndoRedoEnabled();
}

  // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
void demth_ZN9QTextEdit18setUndoRedoEnabledEb(void *that, bool enable)
{
  QTextEdit *cthat = (QTextEdit *)that;
   cthat->setUndoRedoEnabled(enable);
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
// QTextEdit_SlotProxy here
class QTextEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextEdit_SlotProxy():QObject(){}

public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // copyAvailable(_Bool)
  void slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0);
public:
  void (*slot_func__ZN9QTextEdit13copyAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // cursorPositionChanged()
  void slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv();
public:
  void (*slot_func__ZN9QTextEdit21cursorPositionChangedEv)(void* rsfptr) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN9QTextEdit16selectionChangedEv();
public:
  void (*slot_func__ZN9QTextEdit16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // currentCharFormatChanged(const class QTextCharFormat &)
  void slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0);
public:
  void (*slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat)(void* rsfptr, const QTextCharFormat & arg0) = NULL;
public slots:
  // textChanged()
  void slot_proxy_func__ZN9QTextEdit11textChangedEv();
public:
  void (*slot_func__ZN9QTextEdit11textChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtextedit.moc"

extern "C" {
  QTextEdit_SlotProxy* QTextEdit_SlotProxy_new()
  {
    return new QTextEdit_SlotProxy();
  }
};

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13undoAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13undoAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13undoAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13redoAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13redoAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13redoAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0) {
  if (this->slot_func__ZN9QTextEdit13copyAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit13copyAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit13copyAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit13copyAvailableEb = (decltype(that->slot_func__ZN9QTextEdit13copyAvailableEb))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(copyAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN9QTextEdit13copyAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit13copyAvailableEb(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv() {
  if (this->slot_func__ZN9QTextEdit21cursorPositionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit21cursorPositionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit21cursorPositionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit21cursorPositionChangedEv = (decltype(that->slot_func__ZN9QTextEdit21cursorPositionChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(cursorPositionChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit21cursorPositionChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit21cursorPositionChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit16selectionChangedEv() {
  if (this->slot_func__ZN9QTextEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit16selectionChangedEv = (decltype(that->slot_func__ZN9QTextEdit16selectionChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit16selectionChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0) {
  if (this->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(this->rsfptr, arg0);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat = (decltype(that->slot_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(currentCharFormatChanged(const class QTextCharFormat &)), that, SLOT(slot_proxy_func__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(const QTextCharFormat & arg0)));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit24currentCharFormatChangedERK15QTextCharFormat(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTextEdit_SlotProxy::slot_proxy_func__ZN9QTextEdit11textChangedEv() {
  if (this->slot_func__ZN9QTextEdit11textChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QTextEdit11textChangedEv(this->rsfptr);
  }
}
extern "C"
void* QTextEdit_SlotProxy_connect__ZN9QTextEdit11textChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTextEdit11textChangedEv = (decltype(that->slot_func__ZN9QTextEdit11textChangedEv))ffifptr;
  QObject::connect((QTextEdit*)sender, SIGNAL(textChanged()), that, SLOT(slot_proxy_func__ZN9QTextEdit11textChangedEv()));
  return that;
}
extern "C"
void QTextEdit_SlotProxy_disconnect__ZN9QTextEdit11textChangedEv(QTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

