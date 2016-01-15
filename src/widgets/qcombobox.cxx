// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qcombobox.h
// dst-file: /src/widgets/qcombobox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qcombobox.h>

extern "C" {

int QComboBox_Class_Size()
{
  return sizeof(QComboBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qcombobox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 171, column 17>
//   // proto:  void QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData);
if (false) {
  auto f = [](const QIcon & arg1, const QString & arg2, const QVariant & arg3) {
    ((QComboBox*)0)->addItem(arg1, arg2, arg3);
  };
}
// _ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant addItem(const class QIcon &, const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 101, column 16>
//   // proto:  int QComboBox::findText(const QString & text, Qt::MatchFlags flags);
if (false) {
  auto f = [](const QString & arg1, Qt::MatchFlags arg2) {
    ((QComboBox*)0)->findText(arg1, arg2);
  };
}
// _ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE findText(const class QString &, Qt::MatchFlags)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 170, column 17>
//   // proto:  void QComboBox::addItem(const QString & text, const QVariant & userData);
if (false) {
  auto f = [](const QString & arg1, const QVariant & arg2) {
    ((QComboBox*)0)->addItem(arg1, arg2);
  };
}
// _ZN9QComboBox7addItemERK7QStringRK8QVariant addItem(const class QString &, const class QVariant &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 173, column 17>
//   // proto:  void QComboBox::addItems(const QStringList & texts);
if (false) {
  auto f = [](const QStringList & arg1) {
    ((QComboBox*)0)->addItems(arg1);
  };
}
// _ZN9QComboBox8addItemsERK11QStringList addItems(const class QStringList &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qcombobox.h', line 176, column 17>
//   // proto:  void QComboBox::insertItem(int index, const QString & text, const QVariant & userData);
if (false) {
  auto f = [](int arg1, const QString & arg2, const QVariant & arg3) {
    ((QComboBox*)0)->insertItem(arg1, arg2, arg3);
  };
}
// _ZN9QComboBox10insertItemEiRK7QStringRK8QVariant insertItem(int, const class QString &, const class QVariant &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QComboBox_SlotProxy here
class QComboBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QComboBox_SlotProxy():QObject(){}

public slots:
  // activated(const class QString &)
  void slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox9activatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // currentIndexChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox19currentIndexChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // currentTextChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox18currentTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox11highlightedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // editTextChanged(const class QString &)
  void slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QComboBox15editTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // highlighted(int)
  void slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox11highlightedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // activated(int)
  void slot_proxy_func__ZN9QComboBox9activatedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox9activatedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentIndexChanged(int)
  void slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0);
public:
  void (*slot_func__ZN9QComboBox19currentIndexChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcombobox.moc"

extern "C" {
  QComboBox_SlotProxy* QComboBox_SlotProxy_new()
  {
    return new QComboBox_SlotProxy();
  }
};

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox9activatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox9activatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox9activatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox9activatedERK7QString = (decltype(that->slot_func__ZN9QComboBox9activatedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(activated(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox9activatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox9activatedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox19currentIndexChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox19currentIndexChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox19currentIndexChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox19currentIndexChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox19currentIndexChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentIndexChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox19currentIndexChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox19currentIndexChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox18currentTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox18currentTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox18currentTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox18currentTextChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox18currentTextChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox18currentTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox18currentTextChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox11highlightedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox11highlightedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox11highlightedERK7QString = (decltype(that->slot_func__ZN9QComboBox11highlightedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox11highlightedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QComboBox15editTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox15editTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox15editTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox15editTextChangedERK7QString = (decltype(that->slot_func__ZN9QComboBox15editTextChangedERK7QString))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(editTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QComboBox15editTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox15editTextChangedERK7QString(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox11highlightedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox11highlightedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox11highlightedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox11highlightedEi = (decltype(that->slot_func__ZN9QComboBox11highlightedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(highlighted(int)), that, SLOT(slot_proxy_func__ZN9QComboBox11highlightedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox11highlightedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox9activatedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox9activatedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox9activatedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox9activatedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox9activatedEi = (decltype(that->slot_func__ZN9QComboBox9activatedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(activated(int)), that, SLOT(slot_proxy_func__ZN9QComboBox9activatedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox9activatedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QComboBox_SlotProxy::slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0) {
  if (this->slot_func__ZN9QComboBox19currentIndexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QComboBox19currentIndexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QComboBox_SlotProxy_connect__ZN9QComboBox19currentIndexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QComboBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QComboBox19currentIndexChangedEi = (decltype(that->slot_func__ZN9QComboBox19currentIndexChangedEi))ffifptr;
  QObject::connect((QComboBox*)sender, SIGNAL(currentIndexChanged(int)), that, SLOT(slot_proxy_func__ZN9QComboBox19currentIndexChangedEi(int arg0)));
  return that;
}
extern "C"
void QComboBox_SlotProxy_disconnect__ZN9QComboBox19currentIndexChangedEi(QComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

