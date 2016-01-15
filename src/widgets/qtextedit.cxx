#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtextedit.h>

extern "C" {

int QTextEdit_Class_Size()
{
  return sizeof(QTextEdit);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtextedit_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 137, column 17>
//   // proto:  void QTextEdit::setDocumentTitle(const QString & title);
if (false) {
  auto f = [](const QString & arg1) {
    ((QTextEdit*)0)->setDocumentTitle(arg1);
  };
}
// _ZN9QTextEdit16setDocumentTitleERK7QString setDocumentTitle(const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 139, column 20>
//   // proto:  QString QTextEdit::documentTitle();
if (false) {
  auto f = []() {
    ((QTextEdit*)0)->documentTitle();
  };
}
// _ZNK9QTextEdit13documentTitleEv documentTitle()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 142, column 17>
//   // proto:  bool QTextEdit::isUndoRedoEnabled();
if (false) {
  auto f = []() {
    ((QTextEdit*)0)->isUndoRedoEnabled();
  };
}
// _ZNK9QTextEdit17isUndoRedoEnabledEv isUndoRedoEnabled()
// <SourceLocation file '/usr/include/qt/QtWidgets/qtextedit.h', line 144, column 17>
//   // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
if (false) {
  auto f = [](bool arg1) {
    ((QTextEdit*)0)->setUndoRedoEnabled(arg1);
  };
}
// _ZN9QTextEdit18setUndoRedoEnabledEb setUndoRedoEnabled(_Bool)
} // <= main block end

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

