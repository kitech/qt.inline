// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// /usr/include/qt/QtGui/qevent.h:1002
// void QApplicationStateChangeEvent(Qt::ApplicationState)
extern "C"
void* C_ZN28QApplicationStateChangeEventC1EN2Qt16ApplicationStateE(Qt::ApplicationState state) {
  return new QApplicationStateChangeEvent(state);
}
// /usr/include/qt/QtGui/qevent.h:1003
// Qt::ApplicationState applicationState()
extern "C"
void C_ZNK28QApplicationStateChangeEvent16applicationStateEv(void *this_) {
  /*return*/ ((QApplicationStateChangeEvent*)this_)->applicationState();
}