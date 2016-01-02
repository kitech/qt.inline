// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qplaintextedit.h
// dst-file: /src/widgets/qplaintextedit.cxx
//

// header block begin =>
#include <qplaintextedit.h>

extern "C" {

int QPlainTextDocumentLayout_Class_Size()
{
  return sizeof(QPlainTextDocumentLayout);
}

// ~QPlainTextDocumentLayout()
void dedtor_ZN24QPlainTextDocumentLayoutD0Ev(QPlainTextDocumentLayout* that)
{
  QPlainTextDocumentLayout* rthis = (QPlainTextDocumentLayout*)that;
  delete rthis;
}

// QPlainTextDocumentLayout(class QTextDocument *)
QPlainTextDocumentLayout* dector_ZN24QPlainTextDocumentLayoutC1EP13QTextDocument(QTextDocument * document)
{
  // static_assert(sizeof(QPlainTextDocumentLayout) == 32, "tyszerr");
  QPlainTextDocumentLayout* rthis = new QPlainTextDocumentLayout(document);
  return rthis;
}

int QPlainTextEdit_Class_Size()
{
  return sizeof(QPlainTextEdit);
}

// QPlainTextEdit(const class QString &, class QWidget *)
QPlainTextEdit* dector_ZN14QPlainTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QPlainTextEdit) == 32, "tyszerr");
  QPlainTextEdit* rthis = new QPlainTextEdit(text, parent);
  return rthis;
}

// ~QPlainTextEdit()
void dedtor_ZN14QPlainTextEditD0Ev(QPlainTextEdit* that)
{
  QPlainTextEdit* rthis = (QPlainTextEdit*)that;
  delete rthis;
}

// QPlainTextEdit(class QWidget *)
QPlainTextEdit* dector_ZN14QPlainTextEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QPlainTextEdit) == 32, "tyszerr");
  QPlainTextEdit* rthis = new QPlainTextEdit(parent);
  return rthis;
}

  // proto:  QString QPlainTextEdit::toPlainText();
QString* demth_ZNK14QPlainTextEdit11toPlainTextEv(void *that)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  auto recret = cthat->toPlainText();
  return new QString(recret);
}

  // proto:  int QPlainTextEdit::maximumBlockCount();
int demth_ZNK14QPlainTextEdit17maximumBlockCountEv(void *that)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  return cthat->maximumBlockCount();
}

  // proto:  void QPlainTextEdit::setMaximumBlockCount(int maximum);
void demth_ZN14QPlainTextEdit20setMaximumBlockCountEi(void *that, int maximum)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setMaximumBlockCount(maximum);
}

  // proto:  QString QPlainTextEdit::documentTitle();
QString* demth_ZNK14QPlainTextEdit13documentTitleEv(void *that)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  auto recret = cthat->documentTitle();
  return new QString(recret);
}

  // proto:  void QPlainTextEdit::setUndoRedoEnabled(bool enable);
void demth_ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *that, bool enable)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setUndoRedoEnabled(enable);
}

  // proto:  void QPlainTextEdit::setDocumentTitle(const QString & title);
void demth_ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *that, const QString & title)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setDocumentTitle(title);
}

  // proto:  bool QPlainTextEdit::isUndoRedoEnabled();
bool demth_ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *that)
{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  return cthat->isUndoRedoEnabled();
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
// QPlainTextDocumentLayout_SlotProxy here
class QPlainTextDocumentLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPlainTextDocumentLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QPlainTextDocumentLayout_SlotProxy* QPlainTextDocumentLayout_SlotProxy_new()
  {
    return new QPlainTextDocumentLayout_SlotProxy();
  }
};

// QPlainTextEdit_SlotProxy here
class QPlainTextEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPlainTextEdit_SlotProxy():QObject(){}

public slots:
  // blockCountChanged(int)
  void slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit17blockCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // undoAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13undoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // redoAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13redoAvailableEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // modificationChanged(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit19modificationChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // updateRequest(const class QRect &, int)
  void slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1);
public:
  void (*slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti)(void* rsfptr, const QRect & arg0, int arg1) = NULL;
public slots:
  // textChanged()
  void slot_proxy_func__ZN14QPlainTextEdit11textChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit11textChangedEv)(void* rsfptr) = NULL;
public slots:
  // cursorPositionChanged()
  void slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv();
public:
  void (*slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv)(void* rsfptr) = NULL;
public slots:
  // copyAvailable(_Bool)
  void slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0);
public:
  void (*slot_func__ZN14QPlainTextEdit13copyAvailableEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qplaintextedit.moc"

extern "C" {
  QPlainTextEdit_SlotProxy* QPlainTextEdit_SlotProxy_new()
  {
    return new QPlainTextEdit_SlotProxy();
  }
};

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0) {
  if (this->slot_func__ZN14QPlainTextEdit17blockCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit17blockCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit17blockCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit17blockCountChangedEi = (decltype(that->slot_func__ZN14QPlainTextEdit17blockCountChangedEi))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(blockCountChanged(int)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit17blockCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit17blockCountChangedEi(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13undoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13undoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13undoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13undoAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13undoAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(undoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13undoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13undoAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit16selectionChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit16selectionChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit16selectionChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13redoAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13redoAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13redoAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13redoAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13redoAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(redoAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13redoAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13redoAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit19modificationChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit19modificationChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit19modificationChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit19modificationChangedEb = (decltype(that->slot_func__ZN14QPlainTextEdit19modificationChangedEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(modificationChanged(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit19modificationChangedEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit19modificationChangedEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1) {
  if (this->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13updateRequestERK5QRecti(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti = (decltype(that->slot_func__ZN14QPlainTextEdit13updateRequestERK5QRecti))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(updateRequest(const class QRect &, int)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13updateRequestERK5QRecti(const QRect & arg0, int arg1)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13updateRequestERK5QRecti(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit11textChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit11textChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit11textChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit11textChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit11textChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit11textChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(textChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit11textChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit11textChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv() {
  if (this->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit21cursorPositionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv = (decltype(that->slot_func__ZN14QPlainTextEdit21cursorPositionChangedEv))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(cursorPositionChanged()), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit21cursorPositionChangedEv()));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit21cursorPositionChangedEv(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QPlainTextEdit_SlotProxy::slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0) {
  if (this->slot_func__ZN14QPlainTextEdit13copyAvailableEb != NULL) {
    // do smth...
    this->slot_func__ZN14QPlainTextEdit13copyAvailableEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QPlainTextEdit_SlotProxy_connect__ZN14QPlainTextEdit13copyAvailableEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QPlainTextEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QPlainTextEdit13copyAvailableEb = (decltype(that->slot_func__ZN14QPlainTextEdit13copyAvailableEb))ffifptr;
  QObject::connect((QPlainTextEdit*)sender, SIGNAL(copyAvailable(_Bool)), that, SLOT(slot_proxy_func__ZN14QPlainTextEdit13copyAvailableEb(bool arg0)));
  return that;
}
extern "C"
void QPlainTextEdit_SlotProxy_disconnect__ZN14QPlainTextEdit13copyAvailableEb(QPlainTextEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

