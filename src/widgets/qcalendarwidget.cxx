// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qcalendarwidget.h
// dst-file: /src/widgets/qcalendarwidget.cxx
//

// header block begin =>
#include <qcalendarwidget.h>

extern "C" {

int QCalendarWidget_Class_Size()
{
  return sizeof(QCalendarWidget);
}

// ~QCalendarWidget()
void dedtor_ZN15QCalendarWidgetD0Ev(QCalendarWidget* that)
{
  QCalendarWidget* rthis = (QCalendarWidget*)that;
  delete rthis;
}

// QCalendarWidget(class QWidget *)
QCalendarWidget* dector_ZN15QCalendarWidgetC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QCalendarWidget) == 32, "tyszerr");
  QCalendarWidget* rthis = new QCalendarWidget(parent);
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
// QCalendarWidget_SlotProxy here
class QCalendarWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCalendarWidget_SlotProxy():QObject(){}

public slots:
  // clicked(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget7clickedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv();
public:
  void (*slot_func__ZN15QCalendarWidget16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // activated(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget9activatedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public slots:
  // currentPageChanged(int, int)
  void slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN15QCalendarWidget18currentPageChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcalendarwidget.moc"

extern "C" {
  QCalendarWidget_SlotProxy* QCalendarWidget_SlotProxy_new()
  {
    return new QCalendarWidget_SlotProxy();
  }
};

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget7clickedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget7clickedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget7clickedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget7clickedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget7clickedERK5QDate))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(clicked(const class QDate &)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget7clickedERK5QDate(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv() {
  if (this->slot_func__ZN15QCalendarWidget16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget16selectionChangedEv = (decltype(that->slot_func__ZN15QCalendarWidget16selectionChangedEv))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv()));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget16selectionChangedEv(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget9activatedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget9activatedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget9activatedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget9activatedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget9activatedERK5QDate))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(activated(const class QDate &)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget9activatedERK5QDate(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN15QCalendarWidget18currentPageChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget18currentPageChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget18currentPageChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget18currentPageChangedEii = (decltype(that->slot_func__ZN15QCalendarWidget18currentPageChangedEii))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(currentPageChanged(int, int)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget18currentPageChangedEii(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

