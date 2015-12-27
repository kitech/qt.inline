// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qdatetimeedit.h
// dst-file: /src/widgets/qdatetimeedit.cxx
//

// header block begin =>
#include <qdatetimeedit.h>

extern "C" {

int QTimeEdit_Class_Size()
{
  return sizeof(QTimeEdit);
}

// QTimeEdit(class QWidget *)
QTimeEdit* dector_ZN9QTimeEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTimeEdit) == 32, "tyszerr");
  QTimeEdit* rthis = new QTimeEdit(parent);
  return rthis;
}

// QTimeEdit(const class QTime &, class QWidget *)
QTimeEdit* dector_ZN9QTimeEditC1ERK5QTimeP7QWidget(const QTime & time, QWidget * parent)
{
  // static_assert(sizeof(QTimeEdit) == 32, "tyszerr");
  QTimeEdit* rthis = new QTimeEdit(time, parent);
  return rthis;
}

// ~QTimeEdit()
void dedtor_ZN9QTimeEditD0Ev(QTimeEdit* that)
{
  QTimeEdit* rthis = (QTimeEdit*)that;
  delete rthis;
}

int QDateEdit_Class_Size()
{
  return sizeof(QDateEdit);
}

// QDateEdit(const class QDate &, class QWidget *)
QDateEdit* dector_ZN9QDateEditC1ERK5QDateP7QWidget(const QDate & date, QWidget * parent)
{
  // static_assert(sizeof(QDateEdit) == 32, "tyszerr");
  QDateEdit* rthis = new QDateEdit(date, parent);
  return rthis;
}

// QDateEdit(class QWidget *)
QDateEdit* dector_ZN9QDateEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QDateEdit) == 32, "tyszerr");
  QDateEdit* rthis = new QDateEdit(parent);
  return rthis;
}

// ~QDateEdit()
void dedtor_ZN9QDateEditD0Ev(QDateEdit* that)
{
  QDateEdit* rthis = (QDateEdit*)that;
  delete rthis;
}

int QDateTimeEdit_Class_Size()
{
  return sizeof(QDateTimeEdit);
}

// QDateTimeEdit(const class QTime &, class QWidget *)
QDateTimeEdit* dector_ZN13QDateTimeEditC1ERK5QTimeP7QWidget(const QTime & t, QWidget * parent)
{
  // static_assert(sizeof(QDateTimeEdit) == 32, "tyszerr");
  QDateTimeEdit* rthis = new QDateTimeEdit(t, parent);
  return rthis;
}

// QDateTimeEdit(const class QDate &, class QWidget *)
QDateTimeEdit* dector_ZN13QDateTimeEditC1ERK5QDateP7QWidget(const QDate & d, QWidget * parent)
{
  // static_assert(sizeof(QDateTimeEdit) == 32, "tyszerr");
  QDateTimeEdit* rthis = new QDateTimeEdit(d, parent);
  return rthis;
}

// ~QDateTimeEdit()
void dedtor_ZN13QDateTimeEditD0Ev(QDateTimeEdit* that)
{
  QDateTimeEdit* rthis = (QDateTimeEdit*)that;
  delete rthis;
}

// QDateTimeEdit(class QWidget *)
QDateTimeEdit* dector_ZN13QDateTimeEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QDateTimeEdit) == 32, "tyszerr");
  QDateTimeEdit* rthis = new QDateTimeEdit(parent);
  return rthis;
}

// QDateTimeEdit(const class QDateTime &, class QWidget *)
QDateTimeEdit* dector_ZN13QDateTimeEditC1ERK9QDateTimeP7QWidget(const QDateTime & dt, QWidget * parent)
{
  // static_assert(sizeof(QDateTimeEdit) == 32, "tyszerr");
  QDateTimeEdit* rthis = new QDateTimeEdit(dt, parent);
  return rthis;
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
// QTimeEdit_SlotProxy here
class QTimeEdit_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QTimeEdit_SlotProxy():QObject(){}

public slots:
  // userTimeChanged(const class QTime &)
  void slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0);
public:
  void (*slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime)(const QTime & arg0) = NULL;
};

extern "C" {
  QTimeEdit_SlotProxy* QTimeEdit_SlotProxy_new()
  {
    return new QTimeEdit_SlotProxy();
  }
};

void QTimeEdit_SlotProxy::slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0) {
  if (this->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime != NULL) {
    // do smth...
    this->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime(arg0);
  }
}
extern "C"
void* QTimeEdit_SlotProxy_connect__ZN9QTimeEdit15userTimeChangedERK5QTime(QObject* sender, void* fptr){
  auto that = new QTimeEdit_SlotProxy();
  that->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime = (decltype(that->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime))fptr;
  QObject::connect((QTimeEdit*)sender, SIGNAL(userTimeChanged(const class QTime &)), that, SLOT(slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0)));
  return that;
}
extern "C"
void QTimeEdit_SlotProxy_disconnect__ZN9QTimeEdit15userTimeChangedERK5QTime(QTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDateEdit_SlotProxy here
class QDateEdit_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDateEdit_SlotProxy():QObject(){}

public slots:
  // userDateChanged(const class QDate &)
  void slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN9QDateEdit15userDateChangedERK5QDate)(const QDate & arg0) = NULL;
};

extern "C" {
  QDateEdit_SlotProxy* QDateEdit_SlotProxy_new()
  {
    return new QDateEdit_SlotProxy();
  }
};

void QDateEdit_SlotProxy::slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN9QDateEdit15userDateChangedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN9QDateEdit15userDateChangedERK5QDate(arg0);
  }
}
extern "C"
void* QDateEdit_SlotProxy_connect__ZN9QDateEdit15userDateChangedERK5QDate(QObject* sender, void* fptr){
  auto that = new QDateEdit_SlotProxy();
  that->slot_func__ZN9QDateEdit15userDateChangedERK5QDate = (decltype(that->slot_func__ZN9QDateEdit15userDateChangedERK5QDate))fptr;
  QObject::connect((QDateEdit*)sender, SIGNAL(userDateChanged(const class QDate &)), that, SLOT(slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QDateEdit_SlotProxy_disconnect__ZN9QDateEdit15userDateChangedERK5QDate(QDateEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDateTimeEdit_SlotProxy here
class QDateTimeEdit_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDateTimeEdit_SlotProxy():QObject(){}

public slots:
  // dateTimeChanged(const class QDateTime &)
  void slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime)(const QDateTime & arg0) = NULL;
public slots:
  // timeChanged(const class QTime &)
  void slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime)(const QTime & arg0) = NULL;
public slots:
  // dateChanged(const class QDate &)
  void slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate)(const QDate & arg0) = NULL;
};
#include "src/widgets/qdatetimeedit.moc"

extern "C" {
  QDateTimeEdit_SlotProxy* QDateTimeEdit_SlotProxy_new()
  {
    return new QDateTimeEdit_SlotProxy();
  }
};

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(QObject* sender, void* fptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime = (decltype(that->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime))fptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(dateTimeChanged(const class QDateTime &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime(arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit11timeChangedERK5QTime(QObject* sender, void* fptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime = (decltype(that->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime))fptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(timeChanged(const class QTime &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit11timeChangedERK5QTime(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate(arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit11dateChangedERK5QDate(QObject* sender, void* fptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate = (decltype(that->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate))fptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(dateChanged(const class QDate &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit11dateChangedERK5QDate(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

