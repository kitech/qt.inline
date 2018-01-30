//  header block begin
// /usr/include/qt/QtWidgets/qgesturerecognizer.h
#include <qgesturerecognizer.h>
#include <QtWidgets>

// QGestureRecognizer is pure virtual: true
// QGestureRecognizer has virtual projected: false
//  header block end

//  main block begin

class MyQGestureRecognizer : public QGestureRecognizer {
public:
  virtual ~MyQGestureRecognizer() {}
// void QGestureRecognizer()
MyQGestureRecognizer() : QGestureRecognizer() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:77
// [-2] void QGestureRecognizer()
extern "C"
void* C_ZN18QGestureRecognizerC1Ev() {
  return 0; // new QGestureRecognizer();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:78
// [-2] void ~QGestureRecognizer()
extern "C"
void C_ZN18QGestureRecognizerD2Ev(void *this_) {
  delete (QGestureRecognizer*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:80
// [8] QGesture * create(class QObject *)
extern "C"
void* C_ZN18QGestureRecognizer6createEP7QObject(void *this_, QObject * target) {
  return (void*)((QGestureRecognizer*)this_)->create(target);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:81
// [4] QGestureRecognizer::Result recognize(class QGesture *, class QObject *, class QEvent *)
extern "C"
void C_ZN18QGestureRecognizer9recognizeEP8QGestureP7QObjectP6QEvent(void *this_, QGesture * state, QObject * watched, QEvent * event) {
  auto rv = ((QGestureRecognizer*)this_)->recognize(state, watched, event);
/*return rv;*/
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:83
// [-2] void reset(class QGesture *)
extern "C"
void C_ZN18QGestureRecognizer5resetEP8QGesture(void *this_, QGesture * state) {
  ((QGestureRecognizer*)this_)->reset(state);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:85
// [4] Qt::GestureType registerRecognizer(class QGestureRecognizer *)
extern "C"
Qt::GestureType C_ZN18QGestureRecognizer18registerRecognizerEPS_(QGestureRecognizer * recognizer) {
  return (Qt::GestureType)QGestureRecognizer::registerRecognizer(recognizer);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:86
// [-2] void unregisterRecognizer(Qt::GestureType)
extern "C"
void C_ZN18QGestureRecognizer20unregisterRecognizerEN2Qt11GestureTypeE(Qt::GestureType type) {
  QGestureRecognizer::unregisterRecognizer(type);
}
//  main block end
