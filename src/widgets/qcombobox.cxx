// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qcombobox.h
// dst-file: /src/widgets/qcombobox.cxx
//

// header block begin =>
#include <qcombobox.h>

extern "C" {

int QComboBox_Class_Size()
{
  return sizeof(QComboBox);
}

// QComboBox(class QWidget *)
QComboBox* dector_ZN9QComboBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QComboBox) == 32, "tyszerr");
  QComboBox* rthis = new QComboBox(parent);
  return rthis;
}

// ~QComboBox()
void dedtor_ZN9QComboBoxD0Ev(QComboBox* that)
{
  QComboBox* rthis = (QComboBox*)that;
  delete rthis;
}

  // proto:  void QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData);
void demth_ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant(void *that, const QIcon & icon, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->addItem(icon, text, userData);
}

  // proto:  int QComboBox::findText(const QString & text, Qt::MatchFlags flags);
int demth_ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE(void *that, const QString & text, Qt::MatchFlags flags)
{
  QComboBox *cthat = (QComboBox *)that;
  return cthat->findText(text, flags);
}

  // proto:  void QComboBox::addItem(const QString & text, const QVariant & userData);
void demth_ZN9QComboBox7addItemERK7QStringRK8QVariant(void *that, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->addItem(text, userData);
}

  // proto:  void QComboBox::addItems(const QStringList & texts);
void demth_ZN9QComboBox8addItemsERK11QStringList(void *that, const QStringList & texts)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->addItems(texts);
}

  // proto:  void QComboBox::insertItem(int index, const QString & text, const QVariant & userData);
void demth_ZN9QComboBox10insertItemEiRK7QStringRK8QVariant(void *that, int index, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->insertItem(index, text, userData);
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

