// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
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
  // selectionChanged()
  void slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv();
public:
  void (*slot_func__ZN15QCalendarWidget16selectionChangedEv)() = NULL;
public slots:
  // clicked(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget7clickedERK5QDate)(const QDate & arg0) = NULL;
public slots:
  // activated(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget9activatedERK5QDate)(const QDate & arg0) = NULL;
public slots:
  // currentPageChanged(int, int)
  void slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN15QCalendarWidget18currentPageChangedEii)(int arg0, int arg1) = NULL;
};
#include "src/widgets/qcalendarwidget.moc"

extern "C" {
  QCalendarWidget_SlotProxy* QCalendarWidget_SlotProxy_new()
  {
    return new QCalendarWidget_SlotProxy();
  }
};

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv() {
  if (this->slot_func__ZN15QCalendarWidget16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget16selectionChangedEv();
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget16selectionChangedEv(QObject* sender, void* fptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->slot_func__ZN15QCalendarWidget16selectionChangedEv = (decltype(that->slot_func__ZN15QCalendarWidget16selectionChangedEv))fptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv()));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget16selectionChangedEv(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget7clickedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget7clickedERK5QDate(arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget7clickedERK5QDate(QObject* sender, void* fptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->slot_func__ZN15QCalendarWidget7clickedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget7clickedERK5QDate))fptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(clicked(const class QDate &)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget7clickedERK5QDate(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget9activatedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget9activatedERK5QDate(arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget9activatedERK5QDate(QObject* sender, void* fptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->slot_func__ZN15QCalendarWidget9activatedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget9activatedERK5QDate))fptr;
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
    this->slot_func__ZN15QCalendarWidget18currentPageChangedEii(arg0, arg1);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget18currentPageChangedEii(QObject* sender, void* fptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->slot_func__ZN15QCalendarWidget18currentPageChangedEii = (decltype(that->slot_func__ZN15QCalendarWidget18currentPageChangedEii))fptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(currentPageChanged(int, int)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget18currentPageChangedEii(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

